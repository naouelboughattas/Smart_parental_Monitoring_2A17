#include "etages.h"

Etages::Etages(int num,QString type)
{
this ->num=num ;
 this ->type=type;
}
bool Etages::ajouter2()
{


    QSqlQuery query;
    QString res = QString::number(num);
    query.prepare("INSERT INTO Etages (num, type) "
                  "VALUES (:num, :type)");
    query.bindValue(":num", res);
    query.bindValue(":type", type);
    return query.exec();
}

QSqlQueryModel * Etages::afficher2()
{
QSqlQueryModel * model = new QSqlQueryModel () ;
model-> setQuery("select *from Etages order by type ");
model-> setHeaderData(0,Qt::Horizontal,QObject::tr("NUM"));
model-> setHeaderData(1,Qt::Horizontal,QObject::tr("type"));

return model;
}

bool Etages ::supprimer2(int num)
{
QSqlQuery query ;
QString res = QString::number(num);
query.prepare("Delete from Etages where NUM = :num");
query.bindValue(":num",res);
return query.exec();
}
bool Etages::modifier2()
{

    QSqlQuery query;
    QString res= QString::number(num);
    query.prepare("UPDATE   Etages SET type= :type   "
                        "WHERE NUM= :num ");
    query.bindValue(":num",res);

    query.bindValue(":type",type);
    return query.exec();
}
