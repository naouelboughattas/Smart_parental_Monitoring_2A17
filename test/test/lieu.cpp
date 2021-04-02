#include "lieu.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

lieu::lieu()
{
id =0;


nom ="";
adresse="";
type="";



}
lieu::lieu(int id,QString nom,QString adresse,QString type)
{
    this->id=id;
    this->adresse=adresse;
    this->nom=nom;
    this->type=type;

}
//getter
QString lieu::get_nom(){return nom;}
int lieu::get_id(){return id;}
QString lieu::get_adresse(){return adresse;}
QString lieu::get_type(){return type;}



bool lieu::ajouter()
{

    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("INSERT INTO LIEU_ATTRACTION (ID_LIEU, NOM, ADRESSE, TYPE) "
                        "VALUES (:id, :nom, :adresse, :type)");
    query.bindValue(":id",res);

    query.bindValue(":nom",nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":type", type);

    return query.exec();



}
bool lieu::modifier(int idd)
{

    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("UPDATE   LIEU_ATTRACTION SET NOM= :nom , ADRESSE= :adresse ,TYPE= :type  "
                        "WHERE ID_LIEU= :id ");
    query.bindValue(":id",res);

    query.bindValue(":nom",nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":type", type);

    return query.exec();



}



bool lieu::supprimer(int idd)
{

QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from LIEU_ATTRACTION where ID_LIEU = :id");
query.bindValue(":id", res);

return    query.exec();
}



QSqlQueryModel * lieu::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from LIEU_ATTRACTION  ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));

    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));

    return model;
}






