#ifndef INTERETAT_H
#define INTERETAT_H

#include <QDialog>
#include "etat.h"

namespace Ui {
class InterEtat;
}

class InterEtat : public QDialog
{
    Q_OBJECT

public:
    explicit InterEtat(QWidget *parent = nullptr);
    ~InterEtat();

private slots:
    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Etat tmpetat;

    QSqlTableModel * model;

    Ui::InterEtat *ui;
};

#endif // INTERETAT_H
