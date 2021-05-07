#include "devoir.h"

devoir::devoir()
{

}

devoir::devoir(int i,QString m,QString n)
{
    id=i;
    matiere=m;
    niveau=n;
}


bool devoir::rechercherD(int id)
{
    QSqlQuery q1;
    QString res=QString::number(id);
    q1.exec("select *from devoir where id='"+res+"'");
    bool test=q1.next();
    return test;
}

bool devoir::ajouter()
{
    QSqlQuery q;//declaration requete SQL
    QString id_str=QString::number(id);//declaration d'une variable id_str pour prendre la valeur de id mais en tq QString
    q.prepare("insert into devoir values(:id,:matiere,:niveau)");//donner la requete a executer
    q.bindValue(":id",id_str);//remplacement de :id avec la valeur de id// injection SQL (securité)
    q.bindValue(":matiere",matiere);
    q.bindValue(":niveau",niveau);
    return q.exec();
}

bool devoir::supprimer(int id)
{
    if(!rechercherD(id)){return false;}
    QSqlQuery q;
    q.prepare("delete from devoir where id=:rech");
    q.bindValue(":rech",id);

    return q.exec();
}

QSqlQueryModel* devoir::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from devoir");
    return model;
}
bool devoir::modifier(int id)
{
    if(!rechercherD(id)){return false;}
    QSqlQuery q;
    q.prepare("update devoir set matiere=:matiere,niveau=:niveau where id=:id");
    q.bindValue(":id",id);//remplacement de :id avec la valeur de id// injection SQL (securité)
    q.bindValue(":matiere",matiere);
    q.bindValue(":niveau",niveau);
    return q.exec();
}
QSqlQueryModel* devoir::afficherRech(QString critere,QString rech)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from devoir where "+critere+" like '"+rech+"%'");

    return model;
}
