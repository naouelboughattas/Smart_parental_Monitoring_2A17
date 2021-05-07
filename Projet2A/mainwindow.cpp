#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lieu.h"
#include <QMessageBox>
#include <QComboBox>
#include <confirmation.h>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include "fid.h"
#include <QIcon>
#include <QPixmap>
#include <QAbstractItemModel>
#include <QPainter>
#include <QPrinter>
#include <QtCharts/QChartView>
#include <QtCharts/QStackedBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QtCharts>
#include <QDesktopServices>
#include <QUrl>
#include <qprocess.h>
#include <QProcess>
#include <QProcess>


//

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
//
MainWindow::on_back_clicked();
MainWindow::on_pb_actualiser_clicked();
setWindowTitle("Gestion LIEU ATTRACTION");
ui->typetxt->addItem("Sport");
ui->typetxt->addItem("Art");


ui->valee->hide();
ui->valeee->hide();


}

MainWindow::~MainWindow()
{
    delete ui;
}


//CRUD
void MainWindow::on_pb_ok_clicked()
{

    int id = ui->idd->text().toInt();

    QString type= ui->typetxt->currentText();
    QString nom= ui->nomtxt->text();
    QString adresse= ui->adressetxt->text();


  lieu t(id,nom,adresse,type);
  bool test=t.ajouter();
  if(test)
{MainWindow::on_pb_actualiser_clicked();
 ui->valee->hide();//Actualiser
QMessageBox::information(nullptr, QObject::tr("Ajouter un lieu"),
                  QObject::tr("Lieu ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un lieu"),
                  QObject::tr("Erreur ! Check your data !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}




void MainWindow::on_pb_supprimer_clicked()
{
int id = ui->supptxt->currentText().toInt();

bool test=tmpclient.supprimer(id);
if(test)
{MainWindow::on_pb_actualiser_clicked();//refresh

    QMessageBox::information(nullptr, QObject::tr("Supprimer un Lieu"),
                QObject::tr("Lieu supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab->setModel(tmpclient.afficher());


}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un Lieu"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_actualiser_clicked()
{
ui->tab->setModel(tmpclient.afficher());
ui->supptxt->setModel(tmpclient.afficher());
//ui->idtxt->setModel(tmpclient.afficher());

QSqlQuery qu;
qu.prepare("SELECT COUNT (*) FROM LIEU_ATTRACTION ");
qu.exec();
qu.next();
QString val1 = qu.value(0).toString();
ui->hyhy->setText(val1);
}




void MainWindow::on_pb_modifierp_clicked()
{
    int id = ui->idd->text().toInt();
    QString type= ui->typetxt->currentText();
    QString nom= ui->nomtxt->text();
    QString adresse= ui->adressetxt->text();


  lieu t(id,nom,adresse,type);
  bool test=t.modifier(id);
  if(test)
{MainWindow::on_pb_actualiser_clicked();
 ui->valee->hide();//Actualiser
QMessageBox::information(nullptr, QObject::tr("Ajouter un Lieu"),
                  QObject::tr("Lieu ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un lieu"),
                  QObject::tr("Erreur ! Check your data !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

//

//Metiers

//Search
void MainWindow::on_actionChercher_triggered()
{
 this->setFixedSize(890,690);
}
//imprimer
void MainWindow::on_actionImprimer_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, ui->tab);
    dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    if (dialog.exec() != QDialog::Accepted) {
        return;
}
}
//
void MainWindow::on_l_gotof_clicked()
{
   FID F(this);
   F.exec();
}

void MainWindow::on_actionNettoyer_triggered()
{
    QMessageBox::critical(nullptr, QObject::tr("Attention"),
                QObject::tr("Vous ètes en train de supprimer\n"
                            "le contenu du table Clients."), QMessageBox::Ok);

    MainWindow::on_pb_actualiser_clicked();
}

//tri
void MainWindow::on_actionAlphabet_triggered()
{
   /* ui->tab->setModel(tmpclient.afficher2());
    ui->supptxt->setModel(tmpclient.afficher2());*/
}

void MainWindow::on_actionID_triggered()
{
    ui->tab->setModel(tmpclient.affichern());
    ui->supptxt->setModel(tmpclient.affichern());
}

void MainWindow::on_actionEtat_triggered()
{

}

void MainWindow::on_actionType_triggered()
{
    ui->tab->setModel(tmpclient.affichert());
    ui->supptxt->setModel(tmpclient.affichert());
}

void MainWindow::on_actionDate_de_Naissance_triggered()
{

}

//

void MainWindow::on_buttonBox_accepted()
{
QString nom = ui->Snomtxt->text();
ui->Stab->setModel(tmpclient.afficherch(nom));
MainWindow::on_pb_actualiser_clicked();
}

void MainWindow::on_buttonBox_rejected()
{
    this->setFixedSize(890,520);
}

void MainWindow::on_next_clicked()//->mod
{
  ui->next->setEnabled(false);
  ui->back->setEnabled(true);
 // ui->idtxt->setEnabled(true);
 // ui->titleid->setEnabled(true);
  ui->pb_ok->hide();
  ui->pb_modifierp->show();
  ui->title_2->show();
  ui->title->hide();
}

void MainWindow::on_back_clicked()//aj<-
{
    ui->back->setEnabled(false);
    ui->next->setEnabled(true);
  //  ui->idtxt->setEnabled(false);
   // ui->titleid->setEnabled(false);
    ui->pb_modifierp->hide();
    ui->pb_ok->show();
    ui->title->show();
    ui->title_2->hide();
}


void MainWindow::on_tab_activated(const QModelIndex &index)
{
        QString val=ui->tab->model()->data(index).toString() ;
        QSqlQuery query ;

        query.prepare("select * from CLIENTS where ID='"+val+"' OR CIN='"+val+"' OR NOM='"+val+"' OR PRENOM='"+val+"' OR DDN='"+val+"' OR NATION='"+val+"' OR ETAT='"+val+"'") ;
         if( query.exec())
         {
             while (query.next())
             {
               /*  ui->cintxt->setText(query.value(1).toString());
                 ui->nomtxt->setText(query.value(2).toString());
                 ui->prenomtxt->setText(query.value(3).toString());
                 ui->ddntxt->setDateTime(query.value(4).toDateTime());
                 ui->nationtxt->setText(query.value(5).toString());
                 ui->etattxt->setCurrentText(query.value(6).toString());*/
             }
        }

}

void MainWindow::on_idtxt_currentIndexChanged()
{
    QString val = "";
   // val=ui->idtxt->currentText();
    QSqlQuery query ;

    query.prepare("select * from CLIENTS where ID='"+val+"'") ;
     if( query.exec())
     {
         while (query.next())
         {
            /* ui->cintxt->setText(query.value(1).toString());
             ui->nomtxt->setText(query.value(2).toString());
             ui->prenomtxt->setText(query.value(3).toString());
             ui->ddntxt->setDate(query.value(4).toDate());
             ui->nationtxt->setText(query.value(5).toString());
             ui->etattxt->setCurrentText(query.value(6).toString());*/
         }
  }

}



void MainWindow::on_actionClavier_Virtuel_triggered()
{
  // ui->stackedWidget->setCurrentIndex(1);
}
