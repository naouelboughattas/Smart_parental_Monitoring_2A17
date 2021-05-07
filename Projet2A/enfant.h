#ifndef ENFANT_H
#define ENFANT_H
#include <QSqlQuery>
#include <QString>
#include <QVariant>
#include <QSqlQueryModel>

class enfant
{
public:
    enfant();
    enfant(int,QString,QString,QString,QString);
    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel * afficher();
    QSqlQueryModel * trier(QString);
    bool rechercherE(int);
    bool modifier(int);

private:
    int id;
    QString nom;
    QString prenom;
    QString datenais;
    QString sexe;
};

#endif // ENFANT_H
