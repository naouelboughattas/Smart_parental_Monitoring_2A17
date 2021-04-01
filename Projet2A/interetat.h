#ifndef INTERETAT_H
#define INTERETAT_H

#include <QDialog>
#include "etat.h"
#include "smtp.h"

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

    void refresh();

    void on_comboBox_supp_currentIndexChanged(const QString &arg1);

    void on_comboBox_Modifier_currentIndexChanged(const QString &arg1);

    void on_modifier_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_recherche_cursorPositionChanged(int arg1, int arg2);

    void sendMail();
    void mailSent(QString);

private:
    Etat tmpetat;

    QSqlTableModel * model;

    Ui::InterEtat *ui;
};

#endif // INTERETAT_H
