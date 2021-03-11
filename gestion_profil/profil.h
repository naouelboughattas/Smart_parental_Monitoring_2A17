#ifndef PROFIL_H
#define PROFIL_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
class Profil
{
public:
   Profil();
   Profil(int,QString,QString);
    int getid();
    QString getnom();
    QString gettype();
    void setid(int);
    void setnom(QString);
    void settype(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
  //  int rechercher(int);
private:
        int id;
        QString nom, type;


};

#endif // PROFIL_H
