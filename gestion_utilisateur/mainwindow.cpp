#include "mainwindow.h"
#include "utilisateur.h"
#include "ui_mainwindow.h"
//#include <QDebug>
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
   ui->tab_utilisateur->setModel(U.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    Utilisateur U(id,nom,prenom);
    bool test=U.ajouter();
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Ajout avec succés");
        ui->tab_utilisateur->setModel(U.afficher());
    }
    else
        msgBox.setText("Echec d'e suppression'ajout");
    msgBox.exec();
}

void MainWindow::on_pb_supprimer_clicked()
{
    Utilisateur U1; U1.setid(ui->le_id_supp->text().toInt());
    bool test=U1.supprimer(U1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Supprimer avec succés");
     ui->tab_utilisateur->setModel(U.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();

}
