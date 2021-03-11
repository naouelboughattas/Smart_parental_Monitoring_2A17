#include "utilisateur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Utilisateur::Utilisateur()
{
  id=0;nom="";prenom="";
}

Utilisateur::Utilisateur(int id,QString nom,QString prenom)
{ this->id=id; this->nom=nom ; this->prenom=prenom;}
int Utilisateur::getid(){return id;}
QString Utilisateur::getnom(){return nom;}
QString Utilisateur::getprenom(){return prenom;}
void Utilisateur::setid(int id){this->id=id;}
void Utilisateur::setnom(QString nom){this->nom=nom;}
void Utilisateur::setprenom(QString prenom){this->prenom=prenom;}
bool Utilisateur::ajouter()
{
    QSqlQuery query;
  QString id_string=QString::number(id);
    query.prepare("INSERT INTO utilisateur (id, nom, prenom) "
                  "VALUES (:id, :forename, :surname)");
    query.bindValue(":id", id_string);
    query.bindValue(":forename", nom);
    query.bindValue(":surname", prenom);
    return query.exec();

}
QSqlQueryModel* Utilisateur::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

         model->setQuery("SELECT* FROM utilisateur");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    return model;
}

bool Utilisateur::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from utilisateur where id= :id");
    query.bindValue(":id", id);

    return query.exec();
}




