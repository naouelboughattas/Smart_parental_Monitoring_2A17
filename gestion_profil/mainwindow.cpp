#include "mainwindow.h"
#include "profil.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
   ui->tab_profil->setModel(P.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString type=ui->le_type->text();
    Profil U(id,nom,type);
    bool test=P.ajouter();
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Ajout avec succés");
        ui->tab_profil->setModel(P.afficher());
    }
    else
        msgBox.setText("Echec d'e suppression'ajout");
    msgBox.exec();
}

void MainWindow::on_pb_supprimer_clicked()
{
    Profil P1; P1.setid(ui->le_id_supp->text().toInt());
    bool test=P1.supprimer(P1.getid());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Supprimer avec succés");
     ui->tab_profil->setModel(P.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();

}
