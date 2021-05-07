#ifndef PROFIL_H
#define PROFIL_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
#include <QPropertyAnimation>
#include <QMediaPlayer>

//QString lng="fr";
class profil
{
public:
    profil();
    profil(int,int,int,QString);
    int getid();
    int getnbr_enfants();
    int getnbr_heures_dispo();

    QString getnom_profil();
    void setid(int);
    void setnbr_enfants(int);
    void setnbr_heures_dispo(int);
    void setnom_profil(QString) ;
    bool ajouter2();
    QSqlQueryModel* afficher_profil();
    bool supprimer(int);
     bool modifier_profil(int,int,int,QString);
     //  int rechercher(int);
     QSqlQueryModel *tri_id();

     QSqlQueryModel *tri_nbr_enfants();
     QSqlQueryModel * rechercher_profil(QString);
private slots:


private:
        int id,nbr_enfants,nbr_heures_dispo;

      QString nom_profil;
      QMediaPlayer *click;

};
#endif // PROFIL_H
