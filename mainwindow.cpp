#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include "chambres.h"
#include "etages.h"
#include <QStringListModel>
#include <QDebug>
#include<QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include<SmtpMime>
#include <QMediaPlayer>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include "arduino.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(Etmp.afficher());
    ui->tableView_2->setSortingEnabled(true);
    ui->tableView_2->setModel(Et.afficher2());
    QStringList columns;
    columns << "Ascendant(0-9)" <<"Descendant (9-0)"<<"Ascendant(a-z)" <<"Descendant(z-a)";
    ui->comboBox->addItems(columns);
    ui->comboBox_2->addItems(columns);
player = new QMediaPlayer (this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int num=ui -> le_num -> text().toInt();
    QString nom=ui->le_nom -> text();
   Chambres ch (num ,nom);
   bool test=ch.ajouter();
    if(test)
    {
        //affichage de l'ajout sur table views
        proxyModelEtmp.setSourceModel(Etmp.afficher());
         ui->tableView->setModel(&proxyModelEtmp);
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("ajout effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("ajout non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    //******************Mailing

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez AJOUTER une chambre ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();
}

void MainWindow::on_suprrimer_clicked()
{
    int num =ui ->num ->text().toInt();
    bool test =Etmp.supprimer(num);
    if (test)
    {
         ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("suppression effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("suppression non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez SUPPRIMER une chambre ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();
}

void MainWindow::on_modifier_clicked()
{
    int num=ui -> le_num -> text().toInt();
    QString nom=ui->le_nom -> text();
   Chambres ch (num ,nom);
   bool test=ch.modifier();
    if(test)
    {
         ui->tableView->setModel(Etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("modification effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("modification non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez MODIFEIR une chambre ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();
}





void MainWindow::on_pb_ajouter_2_clicked()
{

    int num_etage=ui -> le_num_2 -> text().toInt();
    QString type=ui->le_type_2 -> text();
   Etages e (num_etage ,type);
   bool test=e.ajouter2();
    if(test)
    {
         ui->tableView_2->setModel(Et.afficher2());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("ajout effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("ajout non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez AJOUTER un étage ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();
}


void MainWindow::on_modifier_2_clicked()
{
    int num_etage=ui -> le_num_2 -> text().toInt();
    QString type =ui->le_type_2 -> text();
   Etages e (num_etage ,type);
   bool test=e.modifier2();
    if(test)
    {
         ui->tableView_2->setModel(Et.afficher2());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("modification effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("modification non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez MODIFIER un étage ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();

}

void MainWindow::on_suprrimer_2_clicked()
{
    int num_etage =ui ->num_2 ->text().toInt();
    bool test =Et.supprimer2(num_etage);
    if (test)
    {
         ui->tableView_2->setModel(Et.afficher2());
        QMessageBox::information(nullptr,QObject::tr ("ok"),
                                 QObject::tr ("suppression effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr ("not ok"),
                                 QObject::tr ("suppression non effectué\n"
"click Cancel to exit ."), QMessageBox::Cancel);
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
         smtp.setUser("amaltr21@gmail.com");
         smtp.setPassword("52636447");
         MimeMessage message;
         message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
         message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
         message.setSubject("Mon app control Monotoning");
         MimeText text;
         text.setText("Bonjour , Madame / Monsieur,\n Votre application subit d'une modification au niveau de votre paramétres  .\n"
"vous avez SUPPRIMER un étage ");
         message.addPart(&text);
         smtp.connectToHost();
         smtp.login();
        ( smtp.sendMail(message));
         smtp.quit();
}


void MainWindow::on_pushButton_sort_clicked()
{
    proxyModelEtmp.setSourceModel(Etmp.afficher());
     ui->tableView->setModel(&proxyModelEtmp);
     int currentindex = ui->comboBox->currentIndex();
     switch (currentindex) {
         case 0:
             ui->tableView->sortByColumn(0, Qt::AscendingOrder);
             break;
         case 1:
             ui->tableView->sortByColumn(0, Qt::DescendingOrder);
             break;
         case 2:
             ui->tableView->sortByColumn(1, Qt::AscendingOrder);
             break;
         case 3:
             ui->tableView->sortByColumn(1, Qt::DescendingOrder);
             break;
         default:
             break;
     }

    //QMessageBox::information(nullptr,QObject::tr ("ok"),
                            // QObject::tr ("ajout effectué\n"
//"click Cancel to exit ."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_sort_2_clicked()
{
    proxyModelEt.setSourceModel(Et.afficher2());
     ui->tableView_2->setModel(&proxyModelEt);
     int currentindex = ui->comboBox_2->currentIndex();
     switch (currentindex) {
         case 0:
             ui->tableView_2->sortByColumn(0, Qt::AscendingOrder);
             break;
         case 1:
             ui->tableView_2->sortByColumn(0, Qt::DescendingOrder);
             break;
         case 2:
             ui->tableView_2->sortByColumn(1, Qt::AscendingOrder);
             break;
         case 3:
             ui->tableView_2->sortByColumn(1, Qt::DescendingOrder);
             break;
         default:
             break;
     }

  // QMessageBox::information(nullptr,QObject::tr ("ok"),
                           // QObject::tr ("ajout effectué\n"
//"click Cancel to exit ."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_search_clicked()
{
    QString text = ui->le_num->text();
    int num = text.isEmpty()?-1:text.toInt();
    QString nom = ui->le_nom->text();
   Etmp.setnum(num);
   Etmp.setnom(nom);
   proxyModelEtmp.setSourceModel(Etmp.search());
    ui->tableView->setModel(&proxyModelEtmp);
  //* QMessageBox::information(nullptr,QObject::tr ("ok"),
                            //QObject::tr ("ajout effectué\n"
//"click Cancel to exit ."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_search_2_clicked()
{
    QString text = ui->le_num_2->text();
    int num = text.isEmpty()?-1:text.toInt();
    QString nom = ui->le_type_2->text();
   Et.setnum_etage(num);
   Et.settype(nom);
   proxyModelEt.setSourceModel(Et.search());
    ui->tableView_2->setModel(&proxyModelEt);
   //QMessageBox::information(nullptr,QObject::tr ("ok"),
                         //   QObject::tr ("ajout effectué\n"
//"click Cancel to exit ."), QMessageBox::Cancel);
}



//**************************************************************pdf


void MainWindow::on_pushButton_3_clicked()
{
    QString str ;
            str.append("<html><head></head><body><center>"+QString("<h1> Les chambres enregistrés <br> <br>"));
           str.append("<table border=1><tr>");
            str.append("<td>"+QString("Nom chambre")+"</td>");
            str.append("<td>"+QString("Numéro de chambre")+"</td>");
                QSqlQuery* query =new QSqlQuery();
            query->exec("SELECT num,nom FROM CHAMBRES");
            while(query->next())
            {
                str.append("<tr><td>");
                str.append(query->value(0).toString());
                str.append("</td><td>");
                str.append(query->value(1).toString());
               str.append("</td></tr>");
            }
                str.append("</table></center></body></html>");

        QPrinter printer;
        printer.setOrientation(QPrinter::Portrait);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        QString path =QFileDialog::getSaveFileName(NULL,"save pdf","chambre","PDF files (*.pdf)");
        if (path.isEmpty())return;
        printer.setOutputFileName(path);
        QTextDocument doc ;
        doc.setHtml(str);
        doc.print(&printer);

        //******************************Mailing
        SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
             smtp.setUser("amaltr21@gmail.com");
             smtp.setPassword("52636447");
             MimeMessage message;
             message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
             message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
             message.setSubject("Mon app control Monotoning");
             MimeText text;
             text.setText("Bonjour , Madame / Monsieur,\n Vous avez imprimer vos donnés sur une piéce .pdf ");
             message.addPart(&text);
             smtp.connectToHost();
             smtp.login();
            smtp.sendMail(message);
             smtp.quit();
}


void MainWindow::on_pushButton_4_clicked()
{
    QString str ;
            str.append("<html><head></head><body><center>"+QString("<h1> Les étages enregistré <br> <br>"));
           str.append("<table border=1><tr>");
            str.append("<td>"+QString("Numéro d'étage")+"</td>");
            str.append("<td>"+QString("type d'étage")+"</td>");
                QSqlQuery* query =new QSqlQuery();
            query->exec("SELECT num_etage,type FROM Etages");
            while(query->next())
            {
                str.append("<tr><td>");
                str.append(query->value(0).toString());
                str.append("</td><td>");
                str.append(query->value(1).toString());
               str.append("</td></tr>");
            }
                str.append("</table></center></body></html>");

        QPrinter printer;
        printer.setOrientation(QPrinter::Portrait);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        QString path =QFileDialog::getSaveFileName(NULL,"save pdf","étages","PDF files (*.pdf)");
        if (path.isEmpty())return;
        printer.setOutputFileName(path);
        QTextDocument doc ;
        doc.setHtml(str);
        doc.print(&printer);
        SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
             smtp.setUser("amaltr21@gmail.com");
             smtp.setPassword("52636447");
             MimeMessage message;
             message.setSender(new EmailAddress("amaltr21@gmail.com", "CONTROL MONOTORING"));
             message.addRecipient(new EmailAddress("mohamediheb.bouraoui@esprit.tn", "Utilisateur"));
             message.setSubject("Mon app control Monotoning");
             MimeText text;
             text.setText("Bonjour , Madame / Monsieur,\n Vous avez imprimer vos donnés sur une piéce .pdf ");
             message.addPart(&text);
             smtp.connectToHost();
             smtp.login();
            ( smtp.sendMail(message));
             smtp.quit();

}


void MainWindow::on_Sonrechech_clicked()
{//rechercher
    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/rechercher.mp3"));
    player->play();
}

void MainWindow::on_Sonrechech_2_clicked()
{//ordonner
    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/ordonner.mp3"));
    player->play();
}


void MainWindow::on_Sonrechech_3_clicked()
{
    //ajouter

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/ajouter.mp3"));
    player->play();
}

void MainWindow::on_Sonrechech_4_clicked()
{
    //modifier

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/supprimer.mp3"));
    player->play();
}


void MainWindow::on_Sonrechech_5_clicked()
{
    //supprimer

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/supprimer.mp3"));
    player->play();
}

void MainWindow::on_Sonrechech_6_clicked()
{
    //rechercher

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/rechercher.mp3"));
    player->play();
}

void MainWindow::on_Sonrechech_7_clicked()
{
    //ordonner

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/ordonner.mp3"));
    player->play();
}
void MainWindow::on_Sonrechech_8_clicked()
{
    //ajouter

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/ajouter.mp3"));
    player->play();
}
void MainWindow::on_Sonrechech_9_clicked()
{
    //modifier

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/modifier.mp3"));
    player->play();
}
void MainWindow::on_Sonrechech_10_clicked()
{
    //supp

    player->setMedia(QUrl::fromLocalFile("C:/Users/amal trabelsi/Desktop/Bouraoui mohamed iheb/supprimer.mp3"));
    player->play();
}



void MainWindow::on_pushButton_5_clicked()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, ui->tab);
    dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    if (dialog.exec() != QDialog::Accepted) {
        return;
}}

void MainWindow::on_pushButton_6_clicked()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, ui->tab);
    dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    if (dialog.exec() != QDialog::Accepted) {
        return;
}
}
