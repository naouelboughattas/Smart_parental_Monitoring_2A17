#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion c;
    bool test=c.ouvrirConnexion();
    MainWindow w;
    if(test)
    {
        w.show();
        w.setFixedSize(890,520);

        QMessageBox::information(nullptr, QObject::tr("database is open !"),
        QObject::tr("connection successful.\n"
                                "Click Cancel to close."), QMessageBox::Cancel);
}
else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
        QObject::tr("connection failed.\n"
                                "Click Cancel to close."), QMessageBox::Cancel);


    return a.exec();
}



