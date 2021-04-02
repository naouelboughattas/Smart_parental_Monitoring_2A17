#ifndef Etages_H
#define Etages_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Etages
{
    QString type ;
    int num ;
public:
    Etages() {}
    Etages (int , QString);

    QString gettype() {return type;}
    int getnum() {return num;}

    void settype (QString type) {this ->type=type ; }
    void setnum (int num) {this-> num=num;}
    bool ajouter2 ();
    QSqlQueryModel * afficher2 () ;
    bool supprimer2 (int);
    bool modifier2 ();



};

#endif // Etages_H
