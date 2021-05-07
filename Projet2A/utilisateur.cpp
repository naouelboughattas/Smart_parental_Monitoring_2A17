#include "utilisateur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
utilisateur::utilisateur()
{
  id=0;nom="";prenom="";
}

utilisateur::utilisateur(int id,QString nom,QString prenom)
{ this->id=id; this->nom=nom ; this->prenom=prenom;}
int utilisateur::getid(){return id;}
QString utilisateur::getnom(){return nom;}
QString utilisateur::getprenom(){return prenom;}
void utilisateur::setid(int id){this->id=id;}
void utilisateur::setnom(QString nom){this->nom=nom;}
void utilisateur::setprenom(QString prenom){this->prenom=prenom;}



bool utilisateur::ajouter()
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



bool utilisateur::modifier_utilisateur(int id,QString nom, QString prenom)
{
    QSqlQuery query;
    QString id_string=QString::number(id);


    query.prepare("update utilisateur set id='"+id_string+"', nom='"+nom+"', prenom='"+prenom+"' where id=:id");
    query.bindValue(0, id_string);
    query.bindValue(1, nom);
    query.bindValue(2, prenom);

    return query.exec();
}

QSqlQueryModel* utilisateur::afficher_utilisateur()
{
    QSqlQueryModel* model=new QSqlQueryModel();

         model->setQuery("SELECT* FROM utilisateur");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

    return model;
}




bool utilisateur::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from utilisateur where id= :id");
    query.bindValue(":id", id);

    return query.exec();
}


/*int utilisateur::rechercher(int)
{

}*/


