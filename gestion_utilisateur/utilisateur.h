#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
class Utilisateur
{
public:
    Utilisateur();
    Utilisateur(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
  //  int rechercher(int);
private:
        int id;
        QString nom, prenom;


};

#endif // UTILISATEUR_H
