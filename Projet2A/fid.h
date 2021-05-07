#ifndef FID_H
#define FID_H
#include "connection.h"
#include <QMainWindow>
#include <QComboBox>
#include <QMainWindow>
#include <QDialog>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QDialog>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include "lieu.h"
#include <QMainWindow>
#include "mainwindow.h"



namespace Ui {
class FID;
}

class FID : public QDialog
{
    Q_OBJECT

public:
    explicit FID(QWidget *parent = nullptr);
    ~FID();



    private slots:

    void on_pb_modifierf_clicked();
    void on_pb_actualiserf_clicked();
    void on_pb_supprimerf_clicked();
    void on_pb_okf_clicked();
    void on_pb_stats_clicked();
    void on_pb_sf_clicked();
    void on_commandLinkButton_clicked();
    void on_l_gotof_clicked();
    void on_FIDtxtm_currentIndexChanged();

    void on_pb_modifierf_2_clicked();

private:
    Ui::FID *ui;
};

#endif // FID_H
