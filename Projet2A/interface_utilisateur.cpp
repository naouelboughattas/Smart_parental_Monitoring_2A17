#include "interface_utilisateur.h"
#include "ui_interface_utilisateur.h"
#include<QPrinter>
#include<QPrintDialog>
#include<QPdfWriter>
#include<QPainter>
#include<QDesktopServices>
#include<QUrl>
#include <QtWidgets>
#include "utilisateur.h"
#include "profil.h"
#include <QDebug>
#include <QMessageBox>
#include <QIntValidator>
#include <QPropertyAnimation>
#include "dialog.h"


Interface_Utilisateur::Interface_Utilisateur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface_Utilisateur)
{
    ui->setupUi(this);
    animation = new QPropertyAnimation (ui ->text,"geometry" );
      // animation = new QPropertyAnimation (ui ->text_2,"geometry" );
       animation->setDuration(10000) ;
       animation->setStartValue(ui->text->geometry());
       animation->setEndValue(QRect(10,5,741,50)) ;
       animation->start() ;

  click = new QMediaPlayer ();
  click-> setMedia(QUrl("C:/Users/21629/Desktop/click.wav"));




     /* // animation2 = new QPropertyAnimation (ui ->text,"geometry" );
       animation2 = new QPropertyAnimation (ui ->text_2,"geometry" );
       animation2->setDuration(10000) ;
       animation2->setStartValue(ui->text->geometry());
       animation2->setEndValue(QRect(10,40,741,101)) ;
       animation2->start() ;*/


   ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
   ui->tab_utilisateur->setModel(v.afficher_utilisateur());
}


Interface_Utilisateur::~Interface_Utilisateur()
{
    delete ui;
}

void Interface_Utilisateur::on_pb_ajouter_clicked()
{
     click->play() ;
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    utilisateur v(id,nom,prenom);
    bool test=v.ajouter();
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Ajout avec succés");
        ui->tab_utilisateur->setModel(v.afficher_utilisateur());
    }
    else
        msgBox.setText("Echec d'e suppression'ajout");
    msgBox.exec();
}

void Interface_Utilisateur::on_pb_supprimer_clicked()
{
    click->play() ;

    utilisateur C1; C1.setid(ui->le_id_supp->text().toInt());
    bool test=C1.supprimer(C1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Supprimer avec succés");
     ui->tab_utilisateur->setModel(v.afficher_utilisateur());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();

}

void Interface_Utilisateur::on_modifier_utilisateur_clicked()
{

    click->play() ;
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
  ;


   utilisateur v(id, nom, prenom);
     bool test=v.modifier_utilisateur(v.getid(),v.getnom(),v.getprenom());
     QMessageBox msgBox;

     if(test)
        { msgBox.setText("Modification avec succés");
         ui->tab_utilisateur->setModel(v.afficher_utilisateur());
     }
     else
         msgBox.setText("Echec de modification");
     msgBox.exec();
}

void Interface_Utilisateur::on_tab_utilisateur_activated(const QModelIndex &index)
{
    QString val=ui->tab_utilisateur->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("select* from utilisateur where id='"+val+"' ");
        if (query.exec())
        { while(query.next())
            {
                ui->le_id->setText(query.value(0).toString());
                ui->le_nom->setText(query.value(0).toString());
                ui->le_prenom->setText(query.value(1).toString());



              }
}
}




void Interface_Utilisateur::on_pb_ajouter_2_clicked()
{
    click->play() ;
    int id=ui->le_id_2->text().toInt();
    int nbr_enfants=ui->le_nom_2->text().toInt();
    int nbr_heures_dispo=ui->le_prenom_2->text().toInt();
  QString nom_profil=ui->le_nom_3->text();
    profil C(id,nbr_enfants,nbr_heures_dispo,nom_profil);
    bool test=C.ajouter2();
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Ajout avec succés");
        ui->tab_profil->setModel(C.afficher_profil());
    }
    else
        msgBox.setText("Echec d'e suppression'ajout");
    msgBox.exec();
}

void Interface_Utilisateur::on_pb_supprimer_2_clicked()
{
    profil C1; C1.setid(ui->le_id_supp_2->text().toInt());
    bool test=C1.supprimer(C1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Supprimer avec succés");
     ui->tab_profil->setModel(C.afficher_profil());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();

}

void Interface_Utilisateur::on_tab_profil_activated(const QModelIndex &index)
{
    QString val=ui->tab_profil->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("select* from profil_test where id='"+val+"' ");
        if (query.exec())
        { while(query.next())
            {
                ui->le_id_2->setText(query.value(0).toString());
                ui->le_nom_2->setText(query.value(0).toString());
                ui->le_prenom_2->setText(query.value(1).toString());
                ui->le_nom_3->setText(query.value(2).toString());
                ui->le_id_supp_2->setText(query.value(3).toString());


              }
}
}

void Interface_Utilisateur::on_modifier_profil_clicked()
{
    int id=ui->le_id_2->text().toInt();
    int nbr_enfants=ui->le_nom_2->text().toInt();
    int nbr_heures_dispo=ui->le_prenom_2->text().toInt();
     QString nom_profil=ui->le_nom_3->text();

   profil C (id, nbr_enfants, nbr_heures_dispo, nom_profil );
     bool test=C.modifier_profil(C.getid(),C.getnbr_enfants(),C.getnbr_heures_dispo(),C.getnom_profil());
     QMessageBox msgBox;

     if(test)
        { msgBox.setText("Modification avec succés");
         ui->tab_profil->setModel(C.afficher_profil());
     }
     else
         msgBox.setText("Echec de modification");
     msgBox.exec();



}



void Interface_Utilisateur::on_tri_profil_clicked()
{
    QString type = ui->comboBox_mission->currentText();
        if (type == "id")
        {
            ui->tab_profil->setModel(C.tri_id());
        }else if (type == "nbr de enfants")
        {
            ui->tab_profil->setModel(C.tri_nbr_enfants());

        }
}

void Interface_Utilisateur::on_pushButton_clicked()
{


        QPdfWriter pdf("C:/Users/21629/Desktop/dhia PDF/PdfAbonnes.pdf");
        QPainter painter(&pdf);
        int i = 4000;
        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 30));
        painter.drawText(2300,1200,"Liste Des profils");
        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 50));
       //painter.drawText(1100,2000,afficheDC);
        painter.drawRect(1500,200,7300,2600);
        //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/image/logopdf.png"));
        painter.drawRect(0,3000,9600,500);
        painter.setFont(QFont("Arial", 9));
        painter.drawText(300,3300,"id");
        painter.drawText(2300,3300,"nbr enfants");
        painter.drawText(2300,3300,"nbr heures");
        painter.drawText(6300,3300,"nom");
        QSqlQuery query;
        query.prepare("select * from profil_test");
        query.exec();
        while (query.next())
        {
            painter.drawText(300,i,query.value(0).toString());
            painter.drawText(2300,i,query.value(1).toString());
            painter.drawText(4300,i,query.value(2).toString());
            painter.drawText(6300,i,query.value(3).toString());
            painter.drawText(8000,i,query.value(4).toString());
            i = i +500;
        }
        int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
        if (reponse == QMessageBox::Yes)
        {
            QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/21629/Desktop/dhia PDF/PdfAbonnes.pdf"));

            painter.end();
        }
        if (reponse == QMessageBox::No)
        {
            painter.end();
        }
    }

void Interface_Utilisateur::on_pb_rechercher_profil_clicked()
{
    QString res=ui->recher_profil->text();

        ui->tab_profil->setModel(C.rechercher_profil(res));
}


void Interface_Utilisateur::on_pushButton_4_clicked()
{
    Interface_Utilisateur conn;
            QSqlQueryModel * modal = new QSqlQueryModel();
            QSqlQuery * qry = new QSqlQuery(conn.mydb);


            qry-> prepare("select id,nbr_enfants,nbr_heures_dispo,nom_profil from profil_test");
            qry->exec();
            modal->setQuery(*qry);
            ui->tab_profil->setModel(modal);


}

/*void Interface_Utilisateur::on_pushButton_2_clicked()
{
    secDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}*/

void Interface_Utilisateur::on_pushButton_6_clicked()
{


        lng="ang";
            // page biblo
            ui->l1->setText("ID profil");
           // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
            ui->l2->setText("nbr enfants");
            ui->l3->setText("nbr heures");
            ui->l4->setText("name profil");
            ui->l4_2->setText("username");
            ui->pb_ajouter_2->setText("ADD");
            ui->pb_rechercher_profil->setText("FIND");
            //ui->Liv_ajouter->setText("ADD");
            ui->modifier_profil->setText("EDIT");
            ui->pb_supprimer_2->setText("REMOVE");
           // ui->pushButton_rch_livre->setText("RESEARCH");
            //ui->pushButton_tri_livre->setText("SORTING");
           // ui->oui_liv->setText("YES");
           // ui->non_liv_2->setText("NO");




            //----------------------------------//


    }


void Interface_Utilisateur::on_pushButton_5_clicked()

{
     lng="fr";

     // page biblo
     ui->l1->setText("Identifiant profil ");
    // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
     ui->l2->setText("Nombres enfants");
     ui->l3->setText("Nombres heures ");
     ui->l4->setText("nom de profil");
     ui->l4_2->setText("Identifiant");
     ui->pb_ajouter_2->setText("Ajouter");
     ui->pb_rechercher_profil->setText("Recherche");
     //ui->Liv_ajouter->setText("ADD");
     ui->modifier_profil->setText("Modifier");
     ui->pb_supprimer_2->setText("Supprimer");
    // ui->pushButton_rch_livre->setText("RESEARCH");
     //ui->pushButton_tri_livre->setText("SORTING");
    // ui->oui_liv->setText("YES");
    // ui->non_liv_2->setText("NO");

}



void Interface_Utilisateur::on_pushButton_3_clicked()
{
 dialog =new Dialog(this);
 dialog->show();
}
