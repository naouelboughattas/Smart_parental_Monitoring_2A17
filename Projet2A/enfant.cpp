#include "enfant.h"

enfant::enfant()
{

}
enfant::enfant(int i,QString n,QString p,QString d,QString s)
{
    id=i;
    nom=n;
    prenom=p;
    datenais=d;
    sexe=s;
}
bool enfant::rechercherE(int id)
{
    QSqlQuery q1;
    QString res=QString::number(id);
    q1.exec("select *from enfant where id='"+res+"'");
    bool test=q1.next();
    return test;
}
bool enfant::ajouter()
{
QSqlQuery q;//declaration requete SQL
QString id_str=QString::number(id);//declaration d'une variable id_str pour prendre la valeur de id mais en tq QString
q.prepare("insert into enfant values(:id,:nom,:prenom,:datenais,:sexe)");//donner la requete a executer
q.bindValue(":id",id_str);//remplacement de :id avec la valeur de id// injection SQL (securité)
q.bindValue(":nom",nom);
q.bindValue(":prenom",prenom);
q.bindValue(":datenais",datenais);
q.bindValue(":sexe",sexe);
return q.exec();
}

bool enfant::supprimer(int rech)
{
    if(!rechercherE(rech)){return false;}
    QSqlQuery q;
    q.prepare("delete from enfant where id=:rech");
    q.bindValue(":rech",rech);
    return q.exec();

}
QSqlQueryModel* enfant::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from enfant");
    return model;
}
bool enfant::modifier(int id)
{
    if(!rechercherE(id)){return false;}
    QSqlQuery q;
    q.prepare("update enfant set nom=:nom,prenom=:prenom,datenais=:datenais,sexe=:sexe where id=:id");
    q.bindValue(":id",id);//remplacement de :id avec la valeur de id// injection SQL (securité)
    q.bindValue(":nom",nom);
    q.bindValue(":prenom",prenom);
    q.bindValue(":datenais",datenais);
    q.bindValue(":sexe",sexe);
    return q.exec();
}
QSqlQueryModel* enfant::trier(QString critere)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from enfant order by "+critere+"");
    return model;
}
