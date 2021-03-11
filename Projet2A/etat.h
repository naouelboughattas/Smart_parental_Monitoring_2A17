#ifndef ETAT_H
#define ETAT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>

class Etat
{
public:
    Etat();
    Etat(int,QString);
    Etat(QString);

    int get_Id();
    QString get_Nom();

    bool ajouter();
    bool supprimer(int);

    QSqlQueryModel * afficher();
    QSqlTableModel * moodel();
    QSqlQueryModel * remplircomboetat();
    QSqlQuery request(QString);

private:
    int id;
    QString nom;
};

#endif // ETAT_H
