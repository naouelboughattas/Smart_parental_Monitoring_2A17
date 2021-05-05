#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPropertyAnimation>
#include <QMainWindow>
#include "utilisateur.h"
#include "profil.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb ;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_ajouter_clicked();


    void on_pb_supprimer_clicked();
     void on_modifier_vehicule_clicked();
    void on_tab_vehicule_activated(const QModelIndex &index);
    void on_pb_ajouter_2_clicked();

    void on_pb_supprimer_2_clicked();
     void on_tab_profil_activated(const QModelIndex &index);
     void on_modifier_profil_clicked();
   // void on_tab_detenu_activated(const QModelIndex &index);

    //void on_tab_cellule_activated(const QModelIndex &index);


     void on_tri_profil_clicked();

     void on_pushButton_clicked();

      void on_pb_rechercher_profil_clicked();

      void on_pushButton_4_clicked();

    //  void on_pushButton_2_clicked();

      void on_pushButton_6_clicked();

      void on_pushButton_5_clicked();

     // veh_profil m;
    //  void on_pushButton_7_clicked();

      void on_Petition_clicked();

    //  void on_pushButton_8_clicked();

      void on_Materiel_clicked();

     // void on_pushButton_9_clicked();

      void on_Agent_clicked();

      void on_Crimes_clicked();

      void on_Plaintes_clicked();

      void on_profil_clicked();

      void on_modifier_utilisateur_clicked();

      void on_tab_utilisateur_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QString lng="fr";
    utilisateur v;
     profil C;

     QPropertyAnimation *animation ;
          QPropertyAnimation *animation2 ;
          QMediaPlayer *click;

     //VEH_profil m;

};

#endif // MAINWINDOW_H
