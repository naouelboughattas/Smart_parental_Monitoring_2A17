#ifndef MODES_H
#define MODES_H
#include <QString>
#include <QDateTime>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>


class modes
{
public:
    modes();
    modes(int,QString,QString,QDateTime,QDateTime,QString);
    modes(QString,QString,QDateTime,QDateTime,QString);

    bool ajouter();
    bool supprimer(int);

    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * afficher();
    QSqlQueryModel * remplircombomodes();
    QSqlQuery request(QString);
    bool modifier(QString,QString,QDateTime,QDateTime,QString,QString);

private:
    int id;
    QString nom;
    QString etat;
    QDateTime datedebut;
    QDateTime datefin;
    QString description;

};

#endif // MODES_H
