#include "profil.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Profil::Profil()
{
  id=0;nom="";type="";
}

Profil::Profil(int id,QString nom,QString type)
{ this->id=id; this->nom=nom ; this->type=type;}
int Profil::getid(){return id;}
QString Profil::getnom(){return nom;}
QString Profil::gettype(){return type;}
void Profil::setid(int id){this->id=id;}
void Profil::setnom(QString nom){this->nom=nom;}
void Profil::settype(QString type){this->type=type;}
bool Profil::ajouter()
{
    QSqlQuery query;
  QString id_string=QString::number(id);
    query.prepare("INSERT INTO profil (id, nom, type) "
                  "VALUES (:id, :forename, :surname)");
    query.bindValue(":id", id_string);
    query.bindValue(":forename", nom);
    query.bindValue(":surname", type);
    return query.exec();

}
QSqlQueryModel* Profil::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

         model->setQuery("SELECT* FROM profil");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    return model;
}

bool Profil::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from profil where id= :id");
    query.bindValue(":id", id);

    return query.exec();
}
