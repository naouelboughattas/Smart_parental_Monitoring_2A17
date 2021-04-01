#include "etat.h"

//********Initialisation

//Constructeur par defaut

Etat::Etat()
{

}

//Constructeur pour Afficher

Etat::Etat(int id,QString nom)
{
    this->id=id;
    this->nom=nom;
}

//Constructeur pour Ajouter

Etat::Etat(QString nom)
{
    this->nom=nom;
}



//*******AJOUTER

bool Etat::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO ETAT (nom) "
                    "VALUES (:nom)");


query.bindValue(":nom", nom);

return    query.exec();
}

//******AFFICHER

QSqlQueryModel * Etat::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ETAT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));


    return model;
}

//*******SUPPRIMPER

bool Etat::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from ETAT where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * Etat::remplircomboevent()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from ETAT");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery Etat::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from ETAT where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}


//*******MODIFIER

bool Etat::modifier(QString nom,QString id)
{
QSqlQuery query;

query.prepare("UPDATE ETAT SET nom= :nom"
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nom", nom);

return    query.exec();
}

QSqlQueryModel * Etat::requestnom()
{

    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select NOM from ETAT");
    query.exec();
    mod->setQuery(query);
    return mod;

}


//******RECHERCHE AVANCEE

QSqlQueryModel * Etat::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from etat  where (NOM LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));


    return model;
}
