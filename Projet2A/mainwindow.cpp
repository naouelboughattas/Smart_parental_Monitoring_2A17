#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interetat.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Home");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    InterEtat e;
    e.setModal(true);
    e.exec();

}

void MainWindow::on_pushButton_2_clicked()
{

}
