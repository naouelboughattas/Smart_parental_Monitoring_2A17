#ifndef CHAMBRES_H
#define CHAMBRES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Chambres
{
    QString nom ;
    int num ;
public:
    Chambres() {}
    Chambres (int , QString);

    QString getnom() {return nom;}
    int getnum() {return num;}

    void setnom (QString nom) {this ->nom=nom ; }
    void setnum (int num) {this-> num=num;}
    bool ajouter ();
    QSqlQueryModel * afficher () ;
    bool supprimer (int);
    bool modifier ();
    QSqlQueryModel * search () ;



};

#endif // CHAMBRES_H
