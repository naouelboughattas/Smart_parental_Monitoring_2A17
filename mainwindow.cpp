#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include "chambres.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Etmp.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int num=ui -> le_num -> text().toInt();
    QString nom=ui->le_nom -> text();
   Chambres ch (num ,nom);
   bool test=ch.ajouter();
    if(test)
    {
         ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("ajout effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("ajout non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
}

void MainWindow::on_suprrimer_clicked()
{
    int num =ui ->num ->text().toInt();
    bool test =Etmp.supprimer(num);
    if (test)
    {
         ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("suppression effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("suppression non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
}

void MainWindow::on_modifier_clicked()
{
    int num=ui -> le_num2 -> text().toInt();
    QString nom=ui->le_nom2 -> text();
   Chambres ch (num ,nom);
   bool test=ch.modifier();
    if(test)
    {
         ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("modification effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("modification non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
}




