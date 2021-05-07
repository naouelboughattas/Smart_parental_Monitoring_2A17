#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>


class lieu
{
public:
    lieu();
    lieu(int,QString,QString,QString);
    QString get_nom();
    QString get_adresse();
    QString get_type();
    int get_id();


    bool supprimer(int);
    bool ajouter();

    bool actualiser();
    bool modifier(int);
    //
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherch(QString);
    QSqlQueryModel * affichern();
    QSqlQueryModel * affichert();
    //
    private:
    int id;
    QString nom,adresse,type;

};

#endif // CLIENT_H
