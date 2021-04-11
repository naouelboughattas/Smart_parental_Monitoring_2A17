#ifndef Etages_H
#define Etages_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Etages
{
    QString type ;
    int num_etage ;
public:
    Etages() {}
    Etages (int , QString);

    QString gettype() {return type;}
    int getnum_etage() {return num_etage;}

    void settype (QString type) {this ->type=type ; }
    void setnum_etage (int num_etage) {this-> num_etage=num_etage;}
    bool ajouter2 ();
    QSqlQueryModel * afficher2 () ;
    bool supprimer2 (int);
    bool modifier2 ();
    QSqlQueryModel * search () ;



};

#endif // Etages_H
