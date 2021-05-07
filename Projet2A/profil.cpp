#include "profil.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
profil::profil()
{
  id=0;nbr_enfants=0;
  nbr_heures_dispo=0;
  nom_profil="";
}

profil::profil(int id,int nbr_enfants,int nbr_heures_dispo,QString nom_profil)
{ this->id=id; this->nbr_enfants=nbr_enfants; this->nbr_heures_dispo=nbr_heures_dispo; this->nom_profil=nom_profil ;}
int profil::getid(){return id;}
int profil::getnbr_enfants(){return nbr_enfants;}
int profil::getnbr_heures_dispo(){return nbr_heures_dispo;}
QString profil::getnom_profil(){return nom_profil;}

void profil::setid(int id){this->id=id;}
void profil::setnbr_enfants(int nbr_enfants){this->nbr_enfants=nbr_enfants;}
void profil::setnbr_heures_dispo(int nbr_heures_dispo){this->nbr_heures_dispo=nbr_heures_dispo;}
void profil::setnom_profil(QString nom_profil){this->nom_profil=nom_profil;}


bool profil::ajouter2()
{
    QSqlQuery query;
  QString id_string=QString::number(id);
   QString forename=QString::number(nbr_enfants);
   QString surname=QString::number(nbr_heures_dispo);




  query.prepare("INSERT INTO profil_test (id, nbr_enfants, nbr_heures_dispo,nom_profil) "
                  "VALUES (:id, :nbr_enfants, :nbr_heures_dispo, :nom_profil)");
    query.bindValue(":id", id_string);
    query.bindValue(":nbr_enfants",forename);
    query.bindValue(":nbr_heures_dispo",surname);
    query.bindValue(":nom_profil",nom_profil);
    return query.exec();

}
bool profil::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from profil_test where id= :id");
    query.bindValue(":id", id);

    return query.exec();
}
QSqlQueryModel* profil::afficher_profil()
{
    QSqlQueryModel* model=new QSqlQueryModel();

         model->setQuery("SELECT* FROM profil_test");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_enfants"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_heures_dispo"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom_profil"));
    return model;
}

/*int profil::rechercher(int)
{

}*/

bool profil::modifier_profil(int id ,int nbr_enfants, int nbr_heures_dispo,QString nom_profil )
{
    QSqlQuery query;
    QString id_string=QString::number(id) ;
    QString forename=QString::number(nbr_enfants) ;

    QString surname=QString::number(nbr_heures_dispo);


    query.prepare("update profil_test set id='"+id_string+"',nbr_enfants='"+forename+"',nbr_heures_dispo='"+surname+"',nom_profil='"+nom_profil+"' where id=:id");
    query.bindValue(0, id_string);

    query.bindValue(1, forename);
    query.bindValue(2,surname );
    query.bindValue(3, nom_profil);

    return query.exec();
}



QSqlQueryModel* profil::tri_id()// triii
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from profil_test ORDER BY id ASC") ;
    query->exec() ;
    model->setQuery(*query) ;



    return model;

}
QSqlQueryModel* profil::tri_nbr_enfants()// triii
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from profil_test ORDER BY  nbr_enfants ASC ") ;
    query->exec() ;
    model->setQuery(*query) ;



    return model;

}


QSqlQueryModel * profil::rechercher_profil(QString rech)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from profil_test where id='"+rech+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nbr_enfants"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbr_heures_dispo"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom_profil"));

        return model;
}

