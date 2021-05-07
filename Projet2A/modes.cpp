#include "modes.h"

//Constructeur par defaut

modes::modes()
{

}

//Constructeur pour Afficher

modes::modes(int id,QString nom,QString etat,QDateTime datedebut,QDateTime datefin,QString description)
{
    this->id=id;
    this->nom=nom;
    this->etat=etat;
    this->datedebut=datedebut;
    this->datefin=datefin;
    this->description=description;

}

//Constructeur pour Ajouter

modes::modes(QString nom,QString etat,QDateTime datedebut,QDateTime datefin,QString description)
{
    this->id=id;
    this->nom=nom;
    this->etat=etat;
    this->datedebut=datedebut;
    this->datefin=datefin;
    this->description=description;

}


//*******AJOUTER

bool modes::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO MODES (NOM,ETAT, DATE_DEBUT, DATE_FIN,DESCRIPTION) "
                    "VALUES (:nom,:etat, :datedebut, :datefin, :description)");


query.bindValue(":nom", nom);
query.bindValue(":etat", etat);
query.bindValue(":datedebut", datedebut);
query.bindValue(":datefin", datefin);
query.bindValue(":description", description);


return    query.exec();
}

//******AFFICHER

QSqlQueryModel * modes::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MODES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Fin"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Description"));

    return model;
}

//*******SUPPRIMPER

bool modes::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from MODES where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}



//*******MODIFIER

bool modes::modifier(QString nom, QString etat, QDateTime datedebut,QDateTime datefin,QString description,QString id)
{
QSqlQuery query;

query.prepare("UPDATE MODES SET NOM= :nom, ETAT= :etat, DATE_DEBUT= :datedebut,DATE_FIN= :datefin,DESCRIPTION= :description "
                    " WHERE  ID = :id ");


query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":etat", etat);
query.bindValue(":datedebut", datedebut);
query.bindValue(":datefin", datefin);
query.bindValue(":description", description);


return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * modes::remplircombomodes()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from MODES");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery modes::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from MODES where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}

//******RECHERCHE AVANCEE

QSqlQueryModel * modes::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from MODES  where (NOM LIKE '%"+res+"%' OR ETAT LIKE '%"+res+"%' OR DESCRIPTION LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Debut"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Fin"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Description"));


    return model;
}

//******AFFICHER TRI

QSqlQueryModel * modes::triafficher(QString col)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from MODES order by "+col);
    query.exec();


model->setQuery(query);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Debut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Fin"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Description"));

return model;
}


