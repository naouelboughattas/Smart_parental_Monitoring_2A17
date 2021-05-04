#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "lieu.h"
#include <QMainWindow>
#include <QComboBox>


namespace Ui {
class MainWindow;
//class Modifier;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_ok_clicked();
    void on_pb_actualiser_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_modifierp_clicked();//dia
    void on_actionChercher_triggered();//dia
    void on_actionImprimer_triggered();



    void on_actionID_triggered();

    void on_l_gotof_clicked();

    void on_actionNettoyer_triggered();

    void on_actionAlphabet_triggered();

    void on_actionEtat_triggered();

    void on_actionNationalit_triggered();

    void on_actionDate_de_Naissance_triggered();


    void on_next_clicked();

    void on_back_clicked();

    void on_buttonBox_rejected();
    void on_buttonBox_accepted();


    void on_tab_activated(const QModelIndex &index);

    void on_idtxt_currentIndexChanged();

    void on_actionType_triggered();



    void on_actionClavier_Virtuel_triggered();

private:
    Ui::MainWindow *ui;
    lieu tmpclient;

};

#endif // MAINWINDOW_H
