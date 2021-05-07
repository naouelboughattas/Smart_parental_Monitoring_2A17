#include "menu.h"
#include "ui_menu.h"
#include "interetat.h"
#include "modesinter.h"
#include "interface_utilisateur.h"
#include "mainwindow.h"
#include "interface_devoir.h"
#include "interface_chambres.h"
Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    InterEtat *e = new InterEtat();
    e->show();

}

void Menu::on_pushButton_2_clicked()
{
    modesinter *e = new modesinter();
    e->show();
}

void Menu::on_pushButton_3_clicked()
{
    Interface_Utilisateur *ia = new Interface_Utilisateur();
    ia->show();
}

void Menu::on_pushButton_4_clicked()
{
    MainWindow *m = new MainWindow();
    m->show();
}

void Menu::on_pushButton_5_clicked()
{
 Interface_Devoir *e = new Interface_Devoir();
 e->show();
}

void Menu::on_pushButton_6_clicked()
{
    Interface_Chambres *ch = new Interface_Chambres();
    ch->show();

}
