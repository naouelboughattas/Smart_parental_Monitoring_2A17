#include "interface_devoir.h"
#include "ui_interface_devoir.h"
#include <QMessageBox>
#include <QtPrintSupport/QPrinter>
#include "smtp.h"
#include <QPixmap>

Interface_Devoir::Interface_Devoir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface_Devoir)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/3.jpg");

    ui->label_19->setPixmap(pix);


    QFile file("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/Historique.txt");
   if (!file.open(QIODevice::ReadOnly))
   {
       QMessageBox::information(0,"info",file.errorString());
   }
   QTextStream in (&file);
  ui->textBrowser->setText(in.readAll());


    ui->tableView->setModel(tmpen.afficher());
     ui->tableView_2->setModel(tmpde.afficher());
     QPieSeries *series = new QPieSeries();
     QSqlQuery q("select sexe,count(*) from enfant group by sexe");


      while(q.next())
      {series->append(q.value(0).toString()+": "+q.value(1).toString(),q.value(1).toInt());}
     QChart *chart = new QChart();
     chart->addSeries(series);
     chart->setTitle("Statistiques");
     chart->setBackgroundBrush(Qt::transparent);
     QChartView *chartview = new QChartView(chart);
     chartview->setRenderHint(QPainter::Antialiasing);
     chartview->setParent(ui->horizontalFrame);
     chartview->resize(400,300);

     chart->setAnimationOptions(QChart::AllAnimations);
     chart->legend()->setVisible(true);
     chart->legend()->setAlignment(Qt::AlignRight);
     series->setLabelsVisible(true);

}


Interface_Devoir::~Interface_Devoir()
{
    delete ui;
}

void Interface_Devoir::on_pushButton_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString datenais=ui->dateEdit->text();
    QString sexe=ui->comboBox->currentText();
    enfant e(id,nom,prenom,datenais,sexe);
   bool test=e.ajouter();
   if(test)
   { ui->tableView->setModel(tmpen.afficher());//rafraishissement
       QMessageBox::information(nullptr, QObject::tr("Enfant ajouté"),
                   QObject::tr("successful.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

}
   else
       QMessageBox::critical(nullptr, QObject::tr("Enfant non ajouté"),
                   QObject::tr("failed.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface_Devoir::on_pushButton_2_clicked()
{
    int id=ui->lineEdit_supp->text().toInt();
   bool test= tmpen.supprimer(id);
   if (test)
    {ui->tableView->setModel(tmpen.afficher());//rafraishissement
            QMessageBox::information(nullptr, QObject::tr("Enfant Supprimé"),
                        QObject::tr("successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);}


        else
            QMessageBox::critical(nullptr, QObject::tr("Enfant non Supprimé"),
                        QObject::tr("failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface_Devoir::on_pushButton_3_clicked()
{
    int id=ui->lineEdit_id2->text().toInt();
    QString matiere=ui->lineEdit_matiere->text();
    QString niveau=ui->lineEdit_niveau->text();
    devoir d(id,matiere,niveau);
    bool test=d.ajouter();
    QFile file("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/Historique.txt");//declaration d'un fichier
            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                return;

            QTextStream cout(&file);
    if(test)
    {

        QString message2="Vous avez ajouté un devoir\n";
            cout << message2;
            QFile file("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/Historique.txt");
           if (!file.open(QIODevice::ReadOnly))
           {
               QMessageBox::information(0,"info",file.errorString());
           }
           QTextStream in (&file);
          ui->textBrowser->setText(in.readAll());
        ui->tableView_2->setModel(tmpde.afficher());//rafraishissement
        QMessageBox::information(nullptr, QObject::tr("Devoir ajouté"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

 }
    else
        QMessageBox::critical(nullptr, QObject::tr("Devoir non ajouté"),
                    QObject::tr("failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
 }


void Interface_Devoir::on_pushButton_4_clicked()
{
    int id=ui->lineEdit_supp2->text().toInt();
    bool test=tmpde.supprimer(id);
    if(test)
    { ui->tableView_2->setModel(tmpde.afficher());//rafraishissement
        QMessageBox::information(nullptr, QObject::tr("Devoir Supprimé"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

 }
    else
        QMessageBox::critical(nullptr, QObject::tr("Devoir non Supprimé"),
                    QObject::tr("failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface_Devoir::on_pushButton_5_clicked()
{
    int id=ui->lineEdit_id2_mod->text().toInt();
    QString matiere=ui->lineEdit_matiere_mod->text();
    QString niveau=ui->lineEdit_niveau_mod->text();
    devoir d(id,matiere,niveau);//creation d'une instance devoir avec les valeurs des lienedits
    bool test=d.modifier(id);//apelle du fonction modifier avec l'id
    if(test)
    { ui->tableView_2->setModel(tmpde.afficher());//rafraishissement
        QMessageBox::information(nullptr, QObject::tr("Devoir modifié"),
                    QObject::tr("successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

 }
    else
        QMessageBox::critical(nullptr, QObject::tr("Devoir non modifié"),
                    QObject::tr("failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface_Devoir::on_pushButton_6_clicked()
{
    int id=ui->lineEdit_id_mod->text().toInt();
    QString nom=ui->lineEdit_nom_mod->text();
    QString prenom=ui->lineEdit_prenom_mod->text();
    QString datenais=ui->dateEdit_mod->text();
    QString sexe=ui->comboBox_mod->currentText();
    enfant e(id,nom,prenom,datenais,sexe);
   bool test=e.modifier(id);
   if(test)
   { ui->tableView->setModel(tmpen.afficher());//rafraishissement
       QMessageBox::information(nullptr, QObject::tr("Enfant modifié"),
                   QObject::tr("successful.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

}
   else
       QMessageBox::critical(nullptr, QObject::tr("Enfant non modifié"),
                   QObject::tr("failed.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface_Devoir::on_pushButton_7_clicked()
{
    QString critere=ui->comboBox_2->currentText();
    QString rech=ui->lineEdit->text();
    ui->tableView_2->setModel(tmpde.afficherRech(critere,rech));
}

void Interface_Devoir::on_pushButton_8_clicked()
{
    ui->tableView_2->setModel(tmpde.afficher());//rafraishissement
}

void Interface_Devoir::on_pushButton_9_clicked()
{
    QString critere=ui->comboBox_3->currentText();
    ui->tableView->setModel(tmpen.trier(critere));
}

void Interface_Devoir::on_pushButton_10_clicked()
{
    QString strStream;
                   QTextStream out(&strStream);

                    const int rowCount = ui->tableView_2->model()->rowCount();
                    const int columnCount = ui->tableView_2->model()->columnCount();
                   out <<  "<html>\n"
                   "<head>\n"
                                    "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                    <<  QString("<title>%1</title>\n").arg("strTitle")
                                    <<  "</head>\n"
                                    "<body bgcolor=#ffffff link=#5000A0>\n"

                                   //     "<align='right'> " << datefich << "</align>"
                                    "<center> <H1>Liste des devoirs</H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                                // headers
                                out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                                out<<"<cellspacing=10 cellpadding=3>";
                                for (int column = 0; column < columnCount; column++)
                                    if (!ui->tableView_2->isColumnHidden(column))
                                        out << QString("<th>%1</th>").arg(ui->tableView_2->model()->headerData(column, Qt::Horizontal).toString());
                                out << "</tr></thead>\n";

                                // data table
                                for (int row = 0; row < rowCount; row++) {
                                    out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                    for (int column = 0; column < columnCount; column++) {
                                        if (!ui->tableView_2->isColumnHidden(column)) {
                                            QString data = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, column)).toString().simplified();
                                            out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                        }
                                    }
                                    out << "</tr>\n";
                                }
                                out <<  "</table> </center>\n"
                                    "</body>\n"
                                    "</html>\n";

                          QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                            if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                           QPrinter printer (QPrinter::PrinterResolution);
                            printer.setOutputFormat(QPrinter::PdfFormat);
                           printer.setPaperSize(QPrinter::A4);
                          printer.setOutputFileName(fileName);

                           QTextDocument doc;
                            doc.setHtml(strStream);
                            doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                            doc.print(&printer);
}

void Interface_Devoir::on_pushButton_11_clicked()
{
    QTableView *table;
       table = ui->tableView;

       QString filters("CSV files (*.csv);;All files (*.*)");
       QString defaultFilter("CSV files (*.csv)");
       QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                          filters, &defaultFilter);
       QFile file(fileName);

       QAbstractItemModel *model =  table->model();
       if (file.open(QFile::WriteOnly | QFile::Truncate)) {
           QTextStream data(&file);
           QStringList strList;
           for (int i = 0; i < model->columnCount(); i++) {
               if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                   strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
               else
                   strList.append("");
           }
           data << strList.join(";") << "\n";
           for (int i = 0; i < model->rowCount(); i++) {
               strList.clear();
               for (int j = 0; j < model->columnCount(); j++) {

                   if (model->data(model->index(i, j)).toString().length() > 0)
                       strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                   else
                       strList.append("");
               }
               data << strList.join(";") + "\n";
           }
           file.close();
           QMessageBox::information(this,"Exporter To Excel","Exporter En Excel Avec Succées ");
       }
}

void Interface_Devoir::on_pushButton_12_clicked()
{
    Smtp* smtp = new Smtp("semia.ezzaouia@esprit.tn", "etudiant2019.", "smtp.gmail.com", 465);
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
        smtp->sendMail("semia.ezzaouia@esprit.tn",ui->lineEdit_2->text(), ui->lineEdit_3->text(),ui->plainTextEdit->toPlainText());
}

void Interface_Devoir::on_pushButton_13_clicked()
{

    if(ui->comboBox_4->currentText()=="Background 1")
    {
        QPixmap pix("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/1.jpg");
        ui->label_19->setPixmap(pix);
    }
    if(ui->comboBox_4->currentText()=="Background 2")
    {
        QPixmap pix("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/2.jpg");
        ui->label_19->setPixmap(pix);
    }
    if(ui->comboBox_4->currentText()=="Background 3")
    {
        QPixmap pix("C:/Users/MSI/Desktop/INTEGRATION/Projet2A/3.jpg");
        ui->label_19->setPixmap(pix);
    }
}

