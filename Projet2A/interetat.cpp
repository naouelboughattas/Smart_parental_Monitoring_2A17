#include "interetat.h"
#include "ui_interetat.h"
#include "connection.h"
#include "etat.h"
#include <QMessageBox>

InterEtat::InterEtat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterEtat)
{
    ui->setupUi(this);
    setWindowTitle("Gestion d'etat");

    //Column size
    ui->tableetat->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //tabmodif

    model = new QSqlTableModel(this);
    model = tmpetat.moodel();
    ui->tableetat->setModel(model);

    //remplissage combobox
    ui->comboBox->setModel(tmpetat.remplircomboetat());
}

InterEtat::~InterEtat()
{
    delete ui;
}

void InterEtat::on_ajouter_clicked()
{
    Etat etat(ui->nom->text());
    bool test = etat.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Client"),
        QObject::tr("Client ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Client"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //tabmodif
    model = new QSqlTableModel(this);
    model = tmpetat.moodel();
    ui->tableetat->setModel(model);
    //Combo
    ui->comboBox->setModel(tmpetat.remplircomboetat());

}

void InterEtat::on_supprimer_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpetat.supprimer(ui->comboBox->currentText().toInt());
        if(test)
        {
            //refresh
            //tabmodif
            Connection c;
            model = new QSqlTableModel(this);
            model = tmpetat.moodel();
            ui->tableetat->setModel(model);
            //Combo
            ui->comboBox->setModel(tmpetat.remplircomboetat());

            //message
            QMessageBox::information(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Evenement supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }

}

void InterEtat::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox->currentText();

    query =tmpetat.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nomaff->setText(query.value(1).toString());
        }
    }


}
