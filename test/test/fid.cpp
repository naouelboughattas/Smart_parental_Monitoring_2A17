#include "fid.h"
#include "ui_fid.h"
#include <QMessageBox>
#include <QComboBox>
#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include "mainwindow.h"
#include <QMainWindow>
#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QStackedBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QtCharts>

FID::FID(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FID)
{

    ui->setupUi(this);
    this->setFixedSize(890,520);

    setWindowTitle("Gestion Fidèlitè");


    //
    ui->statutf->addItem("Fetbel");
    ui->statutf->addItem("desenè");
    ui->statutf->addItem("mesekè");
    //
    ui->scb->addItem("FID");
    ui->scb->addItem("PTF");
    ui->scb->addItem("STR");
    FID::on_pb_actualiserf_clicked();

    ui->valeee->hide();


}

FID::~FID()
{
    delete ui;
}



void FID::on_pb_modifierf_clicked()
{
    int FID = ui->idtf->text().toInt();
    QString res= QString::number(FID);
    QString NN = ui->dateEdit->date().toString();
    QString PTF = ui->ptff->text();
    QString STR = ui->statutf->currentText();
    QSqlQuery query;
    query.prepare ("INSERT INTO LOISIR (ID_LOISIR, DATE_L, LIEU, TYPE)"
                      "VALUES (:FID, :NN, :PTF, :STR,)");
    query.bindValue(":FID",res);
    query.bindValue(":NN",NN);
    query.bindValue(":PTF",PTF);
    query.bindValue(":STR", STR);

    if(query.exec())
    {
        QMessageBox::information(this,tr("Insert"),tr("Inserted Successfully, Press 'Actualiser' to Apply changes !"));
    }
    else QMessageBox::critical(this,tr("Insert"),tr("Insertion Failed !"));
    FID::on_pb_actualiserf_clicked();
}


void FID::on_pb_actualiserf_clicked()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from LOISIR ORDER");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_LOISIR"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_L"));

    ui->tabf->setModel(model);
    ui->supptxtf->setModel(model);

    QSqlQuery qu;
    qu.prepare("SELECT COUNT (*) FROM LOISIR ");
    if(qu.exec())
    {
        while(qu.next())
        {
            QString val1=qu.value(0).toString();
            ui->hyhy->setText(val1);


        }
    }


}

void FID::on_pb_supprimerf_clicked()
{
    int FID;
    FID = ui->supptxtf->currentText().toInt();
    QString res= QString::number(FID);
    QSqlQuery query;
    query.prepare("Delete from LOISIR  where ID_LOISIR = '"+res+"'");
    if(query.exec())
    {
        FID::on_pb_actualiserf_clicked();
        QMessageBox::information(this,tr("Suppression"),tr("Done, Press 'Actualiser' to Apply changes"));
    }
    else QMessageBox::information(this,tr("Suppression"),tr("Failed !"));
    FID::on_pb_actualiserf_clicked();
}



void FID::on_pb_okf_clicked()
{
    int FID = ui->idtf->text().toInt();
    QString res= QString::number(FID);
    QString NN = ui->dateEdit->date().toString();
    QString PTF = ui->ptff->text();
    QString STR = ui->statutf->currentText();
    QSqlQuery query;
    query.prepare ("INSERT INTO LOISIR (res, DATE_L, LIEU, TYPE)"
                      "VALUES (:FID, :NN, :PTF, :STR,)");
    query.bindValue(":FID",res);
    query.bindValue(":DATE_L",NN);
    query.bindValue(":LIEU",PTF);
    query.bindValue(":TYPE", STR);

    if(query.exec())
    {
        QMessageBox::information(this,tr("Insert"),tr("Inserted Successfully, Press 'Actualiser' to Apply changes !"));
    }
    else QMessageBox::critical(this,tr("Insert"),tr("Insertion Failed !"));
    FID::on_pb_actualiserf_clicked();
}


void FID::on_l_gotof_clicked()
{
    this->close();
}

void FID::on_pb_sf_clicked()
{

}




void FID::on_commandLinkButton_clicked()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   QString t = "FID";
   QString y = "PTF";
   QString b = "NN";
   QString val = ui->scb->currentText();
   if(ui->scb->currentText() == t)
   {
       model->setQuery("select * from FIDELITE ORDER BY FID");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("FID"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("N¤ des Nuiteès "));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Pts Fidèlitè"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Statut"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Badge"));
       ui->tabf->setModel(model);
   }
   else if (ui->scb->currentText() == y)
   {
       model->setQuery("select * from FIDELITE ORDER BY PTF DESC");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("FID"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("N¤ des Nuiteès "));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Pts Fidèlitè"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Statut"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Badge"));
       ui->tabf->setModel(model);
   }
   else
   {
       model->setQuery("select * from FIDELITE ORDER BY STR ");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("FID"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("N¤ des Nuiteès "));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Pts Fidèlitè"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Statut"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Badge"));
       ui->tabf->setModel(model);
   }
}




void FID::on_FIDtxtm_currentIndexChanged()
{

}

void FID::on_pb_stats_clicked()
{

        /* QSqlQuery qu0,qu1,qu2,qu3,qu4;
         qu0.prepare("SELECT COUNT (*) FROM FIDELITE");
         qu1.prepare("SELECT COUNT (*) FROM FIDELITE WHERE BDG = 'VIP'");
         qu2.prepare("SELECT COUNT (*) FROM FIDELITE WHERE BDG = 'N/A'");
         qu3.prepare("SELECT COUNT (*) FROM FIDELITE WHERE STR = 'Fidèle'");
         qu4.prepare("SELECT COUNT (*) FROM FIDELITE WHERE BDG = 'Standard'");

         qu0.exec();
         qu0.next();
         qu1.exec();
         qu1.next();
         qu2.exec();
         qu2.next();
         qu3.exec();
         qu3.next();
         qu4.exec();
         qu4.next();

         QString   val0 = qu0.value(0).toString();
         QString   val1 = qu1.value(0).toString();
         QString   val2 = qu2.value(0).toString();
         QString   val3 = qu3.value(0).toString();
         QString   val4 = qu4.value(0).toString();




     QPieSeries *series = new QPieSeries();

     series->setHoleSize(0.35);


     QPieSlice *slice3  = series->append("VIP : "+val1 , val1.toInt());
     slice3->setExploded();
     slice3->setLabelVisible();



     QPieSlice *slice4  = series->append("Autres : "+val2 , val2.toInt());
     slice4->setExploded();
     slice4->setLabelVisible();


     QPieSlice *slice2 = series->append("Fidèle : "+val3, val3.toInt() );
     slice2->setExploded();
     slice2->setLabelVisible();

     QPieSlice *slice = series->append("Standard : "+val4, val4.toInt());
     slice->setExploded();
     slice->setLabelVisible();

    QChartView *chartView = new QChartView();
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setTitle("Pourcentage des Badges clientèles : / " + val0);
    chartView->chart()->addSeries(series);
    chartView->chart()->legend()->setAlignment(Qt::AlignBottom);
    chartView->chart()->setTheme(QChart::ChartThemeBlueCerulean);
    chartView->chart()->legend()->setFont(QFont("Arial", 10));


    QMainWindow *main = new QMainWindow(this);
    main->setCentralWidget(chartView);
    main->resize(420, 300);
    main->show();*/

}




void FID::on_pb_modifierf_2_clicked()
{
    int FID = ui->idtf->text().toInt();
    QString res= QString::number(FID);
    QString NN = ui->dateEdit->date().toString();
    QString PTF = ui->ptff->text();

    QString STR = ui->statutf->currentText();

    QSqlQuery query;
    query.prepare ("update LOISIR set DATE_L ='"+NN+"',LIEU ='"+PTF+"',TYPE = '"+STR+"',where ID_LOISIR = '"+res+"'");
    if(query.exec())
    {
         QMessageBox::information(this,tr("Edit"),tr("Updated Successfully, Press 'Actualiser' to Apply changes !"));
    }
    else QMessageBox::critical(this,tr("Edit"),tr("Update Failed !"));
    FID::on_pb_actualiserf_clicked();
}
