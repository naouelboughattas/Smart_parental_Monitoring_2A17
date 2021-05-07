#ifndef INTERFACE_UTILISATEUR_H
#define INTERFACE_UTILISATEUR_H

#include <QPropertyAnimation>
#include <QMainWindow>
#include "utilisateur.h"
#include "profil.h"
#include "dialog.h"

namespace Ui {
class Interface_Utilisateur;
}

class Interface_Utilisateur : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb ;

    explicit Interface_Utilisateur(QWidget *parent = nullptr);
    ~Interface_Utilisateur();
private slots:

    void on_pb_ajouter_clicked();


    void on_pb_supprimer_clicked();
     void on_modifier_utilisateur_clicked();
    void on_tab_utilisateur_activated(const QModelIndex &index);
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

      void on_pushButton_3_clicked();

private:
    Ui::Interface_Utilisateur *ui;
    Dialog *dialog;
    QString lng="fr";
    utilisateur v;
     profil C;

     QPropertyAnimation *animation ;
          QPropertyAnimation *animation2 ;
          QMediaPlayer *click;


};

#endif // INTERFACE_UTILISATEUR_H
