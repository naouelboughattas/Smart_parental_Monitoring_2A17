#include "dialog.h"
#include "ui_dialog.h"
#include "mail/SmtpMime"
#include <QMessageBox>
#include <QApplication>

//#include "recruits.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_envoyer_clicked()
{


      /*  SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);




                    smtp.setUser("xxxpuniisherxxx@gmail.com");
                    smtp.setPassword("abcd1234.ABCD");



            MimeMessage message;

            message.setSender(new EmailAddress("xxxpuniisherxxx@gmail.com", "e health"));
            message.addRecipient(new EmailAddress(ui->lineEdit_adresse->text(), "Recipient's name"));
            message.setSubject(ui->lineEdit_objet->text());



            MimeText text;

            text.setText(ui->textEdit_texte->toPlainText());



            message.addPart(&text);

            smtp.connectToHost();
            smtp.login();
            if (smtp.sendMail(message)){
               QMessageBox::information(this, "OK", "email envoyé");
            }
            else{
               QMessageBox::critical(this, "Erreur","email non envoyé");
            }
            smtp.quit();*/

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);




                        smtp.setUser("big97394@gmail.com");
                        smtp.setPassword("951753951753");



                MimeMessage message;

                message.setSender(new EmailAddress("big97394@gmail.com", "e health"));
                message.addRecipient(new EmailAddress(ui->lineEdit_adresse->text(), "Recipient's name"));
                message.setSubject(ui->lineEdit_objet->text());



                MimeText text;

                text.setText(ui->textEdit_texte->toPlainText());



                message.addPart(&text);

                smtp.connectToHost();
                smtp.login();
                if (smtp.sendMail(message)){
                   QMessageBox::information(this, "OK", "email envoyé");
                }
                else{
                   QMessageBox::critical(this, "Erreur","email non envoyé");
                }
                smtp.quit();
}



      /*  Smtp *s=new Smtp("big97394@gmail.com","951753951753","smtp.gmail.com",465);
        s->sendMail("mail_ici",ui->le_adresse->text(),ui->le_subject->text(),ui->textEdit->toPlainText());
        QMessageBox::information(nullptr,QObject::tr("Ok"),
                             QObject::tr("Mail envoyé\n"
                                           "Click cancel to exit."),QMessageBox::Cancel);*/

void Dialog::on_lineEdit_adresse_cursorPositionChanged(int arg1, int arg2)
{
//test
}
