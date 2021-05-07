#ifndef INTERFACE_DEVOIR_H
#define INTERFACE_DEVOIR_H

#include "enfant.h"
#include "devoir.h"
#include <QMainWindow>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>

namespace Ui {
class Interface_Devoir;
}

class Interface_Devoir : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interface_Devoir(QWidget *parent = nullptr);
    ~Interface_Devoir();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::Interface_Devoir *ui;
    enfant tmpen;//variable temporaire pour passer au fonctions de classe enfant
    devoir tmpde;

};

#endif // INTERFACE_DEVOIR_H
