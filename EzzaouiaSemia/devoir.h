#ifndef DEVOIR_H
#define DEVOIR_H
#include <QSqlQuery>
#include <QString>
#include <QVariant>
#include <QSqlQueryModel>

class devoir
{
public:
    devoir();
    devoir(int,QString,QString);
    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherRech(QString,QString);
    bool rechercherD(int);
    bool modifier(int);

private:
    int id;
    QString matiere;
    QString niveau;
};

#endif // DEVOIR_H
