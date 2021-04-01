#include "chambres.h"

Chambres::Chambres(int num,QString nom)
{
this ->num=num ;
 this ->nom=nom;
}
bool Chambres::ajouter()
{


    QSqlQuery query;
    QString res = QString::number(num);
    query.prepare("INSERT INTO chambres (num, nom) "
                  "VALUES (:num, :nom)");
    query.bindValue(":num", res);
    query.bindValue(":nom", nom);
    return query.exec();
}

QSqlQueryModel * Chambres::afficher()
{
QSqlQueryModel * model = new QSqlQueryModel () ;
model-> setQuery("select *from chambres order by NOM ");
model-> setHeaderData(0,Qt::Horizontal,QObject::tr("NUM"));
model-> setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));

return model;
}

bool Chambres ::supprimer(int num)
{
QSqlQuery query ;
QString res = QString::number(num);
query.prepare("Delete from chambres where NUM = :num");
query.bindValue(":num",res);
return query.exec();
}
bool Chambres::modifier()
{

    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("UPDATE   Chambres SET NOM= :nom   "
                        "WHERE NUM= :num ");
    query.bindValue(":num",res);

    query.bindValue(":nom",nom);
    return query.exec();
}
