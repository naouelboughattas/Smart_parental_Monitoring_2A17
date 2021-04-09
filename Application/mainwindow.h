#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "chambres.h"
#include "etages.h"
#include <QMainWindow>
#include <QSortFilterProxyModel>
#include<QPainter>
#include<QFileDialog>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_suprrimer_clicked();

    void on_modifier_clicked();


    void on_pb_ajouter_2_clicked();

    void on_modifier_2_clicked();

    void on_suprrimer_2_clicked();

    void on_pushButton_sort_clicked();

    void on_pushButton_sort_2_clicked();

    void on_pushButton_search_clicked();

    void on_pushButton_search_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::MainWindow *ui;
    Chambres Etmp ;
    Etages Et ;

    QSortFilterProxyModel proxyModelEtmp;
    QSortFilterProxyModel proxyModelEt;
};

#endif // MAINWINDOW_H
