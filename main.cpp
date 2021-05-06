#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include<QTranslator>
#include<QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;
    QTranslator t ;
    QTranslator guiTranslator;
    QStringList languages ;
    languages<< "English" << "Arabic" << "french" ;
    QString lang = QInputDialog::getItem(NULL,"Choisir language","Language",languages);
    if (lang=="English")
    {
        t.load(":/english.qm");
        guiTranslator.load("C:/Qt/5.9.9/mingw53_32/translations/qtbase_en.qm") ;
    }else if (lang=="Arabic")
    {
         t.load(":/arabic.qm");
          guiTranslator.load("C:/Qt/5.9.9/mingw53_32/translations/qtbase_ar.qm") ;
    }
    if (lang != "french")
    {
        a.installTranslator(&t);
        a.installTranslator(&guiTranslator);
//guiTranslator.load() ;
    }
    bool test=c.createconnect();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("base de donnés est ouverte"),
                    QObject::tr("connexion reuissite .\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("base de donnés n'est pas ouverte"),
                    QObject::tr("connexion n'est reuissite pas.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
