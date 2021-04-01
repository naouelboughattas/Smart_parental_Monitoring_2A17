#include "modesinter.h"
#include "ui_modesinter.h"
#include <QMessageBox>
#include <QtPrintSupport/QPrintDialog>
#include "tableprinter.h"
#include <QPrinter>
#include <QPrintPreviewDialog>
modesinter::modesinter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modesinter)
{
    ui->setupUi(this);
    setWindowTitle("Gestion de mode");

    //Column size
    ui->tablemodifier->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    refresh();

    ui->comboBox_etat->setModel(tmpetat.requestnom());

    QStringList list;
    list << "" << "NOM" << "ETAT" << "DATE_DEBUT" << "DATE_FIN"<< "DESCRIPTION";

    ui->comboBox_Tri->addItems(list);

}

modesinter::~modesinter()
{
    delete ui;
}


void modesinter::refresh(){

    ui->tablemodifier->setModel(tmpmodes.afficher());
    //Combo
    ui->comboBox_modif->setModel(tmpmodes.remplircombomodes());
    ui->comboBox->setModel(tmpmodes.remplircombomodes());

}
void modesinter::on_AjouterBouton_clicked()
{
    modes mod(ui->Nom->toPlainText(),ui->comboBox_etat->currentText(),ui->datedebut->dateTime(),ui->datefin->dateTime(),ui->decription->toPlainText());
    bool test = mod.ajouter();
    if(test)
{
        QMessageBox::information(nullptr, QObject::tr("Ajouter un mode"),
        QObject::tr("Mode ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter un Mode"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refresh();

}

void modesinter::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_modif->currentText();

    query =tmpmodes.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nom_mod->setText(query.value(1).toString());
            ui->etat_mod->setText(query.value(2).toString());
            ui->datedebut->setDateTime(query.value(3).toDateTime());
            ui->datefin->setDateTime(query.value(4).toDateTime());
            ui->decription_mod->setText(query.value(5).toString());
        }
    }

}

void modesinter::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox->currentText();

    query =tmpmodes.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nomval->setText(query.value(1).toString());
            ui->etatval->setText(query.value(2).toString());
            ui->datedebutval->setText(query.value(3).toString());
            ui->datefinval_2->setText(query.value(4).toString());
            ui->descriptionval->setText(query.value(5).toString());
        }
    }


}

void modesinter::on_comboBox_Tri_currentIndexChanged(const QString &arg1)
{
    if(!(ui->comboBox_Tri->currentText()==""))
    {
        ui->tablemodifier->setModel(tmpmodes.triafficher(ui->comboBox_Tri->currentText()));
    }

}

void modesinter::on_recherche_cursorPositionChanged(int arg1, int arg2)
{
    ui->tablemodifier->setModel(tmpmodes.afficherecherche(ui->recherche->text()));

    QString test =ui->recherche->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmpmodes.afficher());//refresh
    }

}

void modesinter::on_PDF_clicked()
{

    QString strStream;
               QTextStream out(&strStream);
               const int rowCount = ui->tablemodifier->model()->rowCount();
               const int columnCount =ui->tablemodifier->model()->columnCount();

               out <<  "<html>\n"
                       "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("eleve")
                       <<  "</head>\n"
                       "<body bgcolor=#F4B8B8 link=#5000A0>\n"
                          // "<img src='C:/Users/ksemt/Desktop/final/icon/logo.webp' width='20' height='20'>\n"
                           "<img src='C:/Users/DeLL/Desktop/logooo.png' width='100' height='100'>\n"
                           "<h1>   Liste des Session </h1>"
                            "<h1>  </h1>"

                           "<table border=1 cellspacing=0 cellpadding=2>\n";


               // headers
                   out << "<thead><tr bgcolor=#f0f0f0>";
                   for (int column = 0; column < columnCount; column++)
                       if (!ui->tablemodifier->isColumnHidden(column))
                           out << QString("<th>%1</th>").arg(ui->tablemodifier->model()->headerData(column, Qt::Horizontal).toString());
                   out << "</tr></thead>\n";
                   // data table
                      for (int row = 0; row < rowCount; row++) {
                          out << "<tr>";
                          for (int column = 0; column < columnCount; column++) {
                              if (!ui->tablemodifier->isColumnHidden(column)) {
                                  QString data = ui->tablemodifier->model()->data(ui->tablemodifier->model()->index(row, column)).toString().simplified();
                                  out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                              }
                          }
                          out << "</tr>\n";
                      }
                      out <<  "</table>\n"
                          "</body>\n"
                          "</html>\n";

                      QTextDocument *document = new QTextDocument();
                      document->setHtml(strStream);

                      QPrinter printer;

                      QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                      if (dialog->exec() == QDialog::Accepted) {
                          document->print(&printer);
                   }

}

void modesinter::on_ModifierBouton_clicked()
{
    if((ui->Nom_mod->toPlainText() != "") &&(ui->etat_mod->toPlainText() != "")&&(ui->decription_mod->toPlainText() != ""))
    {
        if(tmpmodes.modifier(ui->Nom_mod->toPlainText(),ui->etat_mod->toPlainText(),ui->datedebut_mod->dateTime(),ui->datefin_mod->dateTime(),ui->decription_mod->toPlainText(),ui->comboBox_modif->currentText()))
        {
            //refresh combobox + tableau
            refresh();
            //message
            QMessageBox::information(this, QObject::tr("Modifier un mode"),
                        QObject::tr("Mode Modifier.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Modifier un mode"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }



}

void modesinter::on_SupprimerBouton_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpmodes.supprimer(ui->comboBox->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refresh();

            //message
            QMessageBox::information(this, QObject::tr("Supprimer un mode"),
                        QObject::tr("Mode supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un mode"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }
}

