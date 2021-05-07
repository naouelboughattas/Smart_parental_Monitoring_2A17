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

    //REFRESH
    refresh();


}

InterEtat::~InterEtat()
{
    delete ui;
}

void InterEtat::refresh(){

    ui->tableetat->setModel(tmpetat.afficher());
    //Combo
    ui->comboBox_Modifier->setModel(tmpetat.remplircomboevent());
    ui->comboBox_supp->setModel(tmpetat.remplircomboevent());

}

void InterEtat::on_ajouter_clicked()
{
    Etat event(ui->nom->text());
    bool test = event.ajouter();
    if(test)
{
        sendMail();

        QMessageBox::information(nullptr, QObject::tr("Ajouter un Client"),
        QObject::tr("Client ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Client"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //REFRESH
    refresh();


}

void InterEtat::on_supprimer_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpetat.supprimer(ui->comboBox_supp->currentText().toInt());
        if(test)
        {
            //REFRESH
            refresh();

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

    QString id = ui->comboBox_supp->currentText();

    query =tmpetat.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nom_val->setText(query.value(1).toString());
        }
    }


}

void InterEtat::on_comboBox_supp_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_supp->currentText();

    query =tmpetat.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nom_val->setText(query.value(1).toString());
        }
    }

}

void InterEtat::on_comboBox_Modifier_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_Modifier->currentText();

    query =tmpetat.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nom_modif->setText(query.value(1).toString());
        }
    }


}

void InterEtat::on_modifier_clicked()
{
    if(!(ui->nom_modif->text()==""))
    {
        if(tmpetat.modifier(ui->nom_modif->text(),ui->comboBox_Modifier->currentText()))
        {
            //refresh combobox + tableau
            refresh();
            //message
            QMessageBox::information(this, QObject::tr("Modifier  Etat"),
                        QObject::tr("Etat Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier un Etat"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }

}

void InterEtat::on_recherche_cursorPositionChanged(int arg1, int arg2)
{
    ui->tableetat->setModel(tmpetat.afficherecherche(ui->recherche->text()));

    QString test =ui->recherche->text();

    if(test=="")
    {
        ui->tableetat->setModel(tmpetat.afficher());//refresh
    }

}

void InterEtat::sendMail()
{
    Smtp* smtp = new Smtp("", "", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail("wajih.mejri@esprit.tn", "wajih.mejri@esprit.tn" ," objet test","Reservatuin ajouter");
}

void InterEtat::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

