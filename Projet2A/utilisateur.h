#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
class utilisateur
{
public:
    utilisateur();
    utilisateur(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();



    void setid(int);
    void setnom(QString);
    void setprenom(QString);


    bool ajouter();
    QSqlQueryModel* afficher_utilisateur();
    bool supprimer(int);
     bool modifier_utilisateur(int,QString,QString);
  //  int rechercher(int);
private:
        int id;
        QString nom, prenom;


};
#endif // UTILISATEUR_H
