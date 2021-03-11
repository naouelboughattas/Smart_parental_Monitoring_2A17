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

//GETTERS
int Etat::get_Id(){return  id;}
QString Etat::get_Nom(){return  nom;}


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
{
    QSqlQueryModel * model= new QSqlQueryModel();

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


//******MODEL

QSqlTableModel * Etat::moodel()
{
    QSqlTableModel * model  =new QSqlTableModel();

model->setTable("ETAT");
model->select();
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));

return model;
}

//******REMPLIR COMBO BOX

QSqlQueryModel * Etat::remplircomboetat()
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


