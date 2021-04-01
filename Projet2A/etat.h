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

    bool ajouter();
    bool supprimer(int);
    bool modifier(QString,QString);

    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircomboevent();
    QSqlQuery request(QString);
    QSqlQueryModel * requestnom();
    QSqlQueryModel * afficherecherche(QString);


private:
    int id;
    QString nom;
};

#endif // ETAT_H
