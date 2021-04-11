#include "etages.h"

Etages::Etages(int num_etage,QString type)
{
this ->num_etage=num_etage ;
 this ->type=type;
}
bool Etages::ajouter2()
{


    QSqlQuery query;
    QString res = QString::number(num_etage);
    query.prepare("INSERT INTO Etages (num_etage, type) "
                  "VALUES (:num_etage, :type)");
    query.bindValue(":num_etage", res);
    query.bindValue(":type", type);
    return query.exec();
}

QSqlQueryModel * Etages::afficher2()
{
QSqlQueryModel * model = new QSqlQueryModel () ;
model-> setQuery("select *from Etages order by type ");
model-> setHeaderData(0,Qt::Horizontal,QObject::tr("num_etage"));
model-> setHeaderData(1,Qt::Horizontal,QObject::tr("type"));

return model;
}

bool Etages ::supprimer2(int num_etage)
{
QSqlQuery query ;
QString res = QString::number(num_etage);
query.prepare("Delete from Etages where num_etage = :num_etage");
query.bindValue(":num_etage",res);
return query.exec();
}
bool Etages::modifier2()
{

    QSqlQuery query;
    QString res= QString::number(num_etage);
    query.prepare("UPDATE   Etages SET type= :type   "
                        "WHERE num_etage= :num_etage ");
    query.bindValue(":num_etage",res);

    query.bindValue(":type",type);
    return query.exec();
}


 QSqlQueryModel * Etages::search()
 {
     QSqlQueryModel * model = new QSqlQueryModel () ;
     if(num_etage != -1){
         model-> setQuery(QString("select *from Etages where type like '%%1%' and \
    num_etage = %2 order by type").arg(type, QString::number(num_etage)));
     }else{
         model-> setQuery(QString("select *from Etages where type like '%%1%' \
    order by type").arg(type));
     }

     model-> setHeaderData(0,Qt::Horizontal,QObject::tr("num_etage"));
     model-> setHeaderData(1,Qt::Horizontal,QObject::tr("type"));

     return model;
 }
