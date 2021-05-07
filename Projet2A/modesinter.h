#ifndef MODESINTER_H
#define MODESINTER_H

#include <QDialog>
#include "modes.h"
#include "etat.h"
#include <QSystemTrayIcon>

namespace Ui {
class modesinter;
}

class modesinter : public QDialog
{
    Q_OBJECT

public:
    explicit modesinter(QWidget *parent = nullptr);
    ~modesinter();

    void refresh();
private slots:
    void on_AjouterBouton_clicked();

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_Tri_currentIndexChanged(const QString &arg1);

    void on_recherche_cursorPositionChanged(int arg1, int arg2);

    void on_PDF_clicked();

    void on_ModifierBouton_clicked();

    void on_SupprimerBouton_clicked();

private:

    modes tmpmodes;
    Etat tmpetat;
    Ui::modesinter *ui;
    QSystemTrayIcon * trayIcon;

};

#endif // MODESINTER_H
