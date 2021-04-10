/********************************************************************************
** Form generated from reading UI file 'fid.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FID_H
#define UI_FID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FID
{
public:
    QComboBox *supptxtf;
    QPushButton *pb_actualiserf;
    QTableView *tabf;
    QPushButton *pb_supprimerf;
    QLabel *label_8;
    QFrame *line_3;
    QPushButton *pb_stats;
    QCommandLinkButton *l_gotof;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QPushButton *pb_modifierf_2;
    QFrame *line_5;
    QLineEdit *sftxt;
    QFrame *line_7;
    QFrame *line_6;
    QComboBox *scb;
    QPushButton *pb_sf;
    QCommandLinkButton *commandLinkButton;
    QFrame *line_8;
    QLabel *label_5;
    QLabel *label_9;
    QFrame *line;
    QLineEdit *ptff;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_10;
    QComboBox *statutf;
    QFrame *line_4;
    QPushButton *pb_modifierf;
    QFrame *line_2;
    QLabel *hyhy;
    QLabel *valeee;
    QDateEdit *dateEdit;
    QLineEdit *idtf;

    void setupUi(QDialog *FID)
    {
        if (FID->objectName().isEmpty())
            FID->setObjectName(QStringLiteral("FID"));
        FID->resize(890, 537);
        supptxtf = new QComboBox(FID);
        supptxtf->setObjectName(QStringLiteral("supptxtf"));
        supptxtf->setGeometry(QRect(700, 70, 81, 31));
        pb_actualiserf = new QPushButton(FID);
        pb_actualiserf->setObjectName(QStringLiteral("pb_actualiserf"));
        pb_actualiserf->setGeometry(QRect(240, 70, 91, 31));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font.setPointSize(11);
        pb_actualiserf->setFont(font);
        pb_actualiserf->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/RSC/RSC/unnamed (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_actualiserf->setIcon(icon);
        tabf = new QTableView(FID);
        tabf->setObjectName(QStringLiteral("tabf"));
        tabf->setGeometry(QRect(240, 110, 641, 341));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        tabf->setFont(font1);
        tabf->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        tabf->setAutoFillBackground(true);
        tabf->setAlternatingRowColors(true);
        tabf->setShowGrid(true);
        tabf->horizontalHeader()->setDefaultSectionSize(120);
        tabf->horizontalHeader()->setMinimumSectionSize(30);
        pb_supprimerf = new QPushButton(FID);
        pb_supprimerf->setObjectName(QStringLiteral("pb_supprimerf"));
        pb_supprimerf->setGeometry(QRect(790, 70, 91, 31));
        pb_supprimerf->setFont(font);
        pb_supprimerf->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/RSC/RSC/unnamed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimerf->setIcon(icon1);
        label_8 = new QLabel(FID);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 0, 561, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift"));
        font2.setPointSize(26);
        font2.setItalic(false);
        font2.setUnderline(true);
        label_8->setFont(font2);
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"background-color: rgb(30, 40, 60);"));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setLineWidth(5);
        label_8->setMidLineWidth(5);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setScaledContents(false);
        label_8->setWordWrap(false);
        label_8->setOpenExternalLinks(false);
        line_3 = new QFrame(FID);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(210, 10, 20, 501));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pb_stats = new QPushButton(FID);
        pb_stats->setObjectName(QStringLiteral("pb_stats"));
        pb_stats->setGeometry(QRect(340, 70, 101, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        pb_stats->setFont(font3);
        pb_stats->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/RSC/RSC/mac_computer_stats_statistics-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_stats->setIcon(icon2);
        l_gotof = new QCommandLinkButton(FID);
        l_gotof->setObjectName(QStringLiteral("l_gotof"));
        l_gotof->setGeometry(QRect(246, -10, 61, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        l_gotof->setFont(font4);
        l_gotof->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/RSC/RSC/long-arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        l_gotof->setIcon(icon3);
        l_gotof->setIconSize(QSize(32, 32));
        groupBox_2 = new QGroupBox(FID);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 40, 871, 601));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 50);"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 420, 121, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Circular Bold"));
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QStringLiteral("color : white;"));
        groupBox_3 = new QGroupBox(FID);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 30, 211, 621));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 60);"));
        pb_modifierf_2 = new QPushButton(groupBox_3);
        pb_modifierf_2->setObjectName(QStringLiteral("pb_modifierf_2"));
        pb_modifierf_2->setGeometry(QRect(10, 450, 191, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font6.setPointSize(11);
        font6.setStyleStrategy(QFont::PreferAntialias);
        pb_modifierf_2->setFont(font6);
        pb_modifierf_2->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/RSC/RSC/698873-icon-136-document-edit-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifierf_2->setIcon(icon4);
        pb_modifierf_2->setIconSize(QSize(16, 16));
        pb_modifierf_2->setAutoDefault(true);
        pb_modifierf_2->setFlat(false);
        line_5 = new QFrame(FID);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(450, 90, 241, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        sftxt = new QLineEdit(FID);
        sftxt->setObjectName(QStringLiteral("sftxt"));
        sftxt->setGeometry(QRect(533, 466, 271, 31));
        line_7 = new QFrame(FID);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(260, 470, 20, 21));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(FID);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(520, 471, 20, 21));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        scb = new QComboBox(FID);
        scb->setObjectName(QStringLiteral("scb"));
        scb->setGeometry(QRect(271, 466, 69, 31));
        pb_sf = new QPushButton(FID);
        pb_sf->setObjectName(QStringLiteral("pb_sf"));
        pb_sf->setGeometry(QRect(805, 466, 75, 31));
        pb_sf->setFont(font3);
        pb_sf->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/RSC/RSC/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_sf->setIcon(icon5);
        commandLinkButton = new QCommandLinkButton(FID);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(345, 462, 31, 40));
        commandLinkButton->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/RSC/RSC/sort-az-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon6);
        line_8 = new QFrame(FID);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(240, 450, 641, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(FID);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 465, 31, 31));
        label_5->setFont(font5);
        label_5->setStyleSheet(QStringLiteral("color : white;"));
        label_9 = new QLabel(FID);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(6, 1, 201, 29));
        label_9->setFont(font2);
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAutoFillBackground(true);
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setLineWidth(5);
        label_9->setMidLineWidth(5);
        label_9->setTextFormat(Qt::AutoText);
        label_9->setScaledContents(false);
        label_9->setWordWrap(false);
        label_9->setOpenExternalLinks(false);
        line = new QFrame(FID);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(11, 38, 189, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        ptff = new QLineEdit(FID);
        ptff->setObjectName(QStringLiteral("ptff"));
        ptff->setGeometry(QRect(10, 220, 191, 21));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ptff->sizePolicy().hasHeightForWidth());
        ptff->setSizePolicy(sizePolicy);
        ptff->setBaseSize(QSize(0, 0));
        QFont font7;
        font7.setStyleStrategy(QFont::PreferAntialias);
        ptff->setFont(font7);
        label_4 = new QLabel(FID);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(11, 200, 131, 16));
        label_4->setFont(font5);
        label_4->setStyleSheet(QStringLiteral("color : white;"));
        label_7 = new QLabel(FID);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(11, 130, 161, 16));
        label_7->setFont(font5);
        label_7->setStyleSheet(QStringLiteral("color : white;"));
        label = new QLabel(FID);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 60, 111, 16));
        label->setFont(font5);
        label->setStyleSheet(QStringLiteral("color : white;"));
        label_10 = new QLabel(FID);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(11, 270, 61, 16));
        label_10->setFont(font5);
        label_10->setStyleSheet(QStringLiteral("color : white;"));
        statutf = new QComboBox(FID);
        statutf->setObjectName(QStringLiteral("statutf"));
        statutf->setGeometry(QRect(11, 290, 191, 21));
        statutf->setFont(font7);
        line_4 = new QFrame(FID);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(11, 400, 189, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pb_modifierf = new QPushButton(FID);
        pb_modifierf->setObjectName(QStringLiteral("pb_modifierf"));
        pb_modifierf->setGeometry(QRect(9, 420, 191, 41));
        pb_modifierf->setFont(font6);
        pb_modifierf->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
" border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : white ;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"color : black ;\n"
"background-color: rgb(245,245, 245); \n"
"\n"
"}\n"
""));
        pb_modifierf->setIcon(icon4);
        pb_modifierf->setIconSize(QSize(16, 16));
        pb_modifierf->setAutoDefault(true);
        pb_modifierf->setFlat(false);
        line_2 = new QFrame(FID);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(11, 460, 189, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        hyhy = new QLabel(FID);
        hyhy->setObjectName(QStringLiteral("hyhy"));
        hyhy->setGeometry(QRect(749, 27, 41, 21));
        QFont font8;
        font8.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font8.setPointSize(16);
        font8.setItalic(false);
        hyhy->setFont(font8);
        hyhy->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"background-color: rgb(30, 40, 60);\n"
"color : white ;"));
        valeee = new QLabel(FID);
        valeee->setObjectName(QStringLiteral("valeee"));
        valeee->setGeometry(QRect(550, 500, 221, 16));
        dateEdit = new QDateEdit(FID);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(10, 160, 191, 22));
        idtf = new QLineEdit(FID);
        idtf->setObjectName(QStringLiteral("idtf"));
        idtf->setGeometry(QRect(10, 90, 191, 21));
        sizePolicy.setHeightForWidth(idtf->sizePolicy().hasHeightForWidth());
        idtf->setSizePolicy(sizePolicy);
        idtf->setBaseSize(QSize(0, 0));
        idtf->setFont(font7);
        label_9->raise();
        line->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        supptxtf->raise();
        pb_actualiserf->raise();
        tabf->raise();
        pb_supprimerf->raise();
        label_8->raise();
        line_3->raise();
        pb_stats->raise();
        l_gotof->raise();
        line_5->raise();
        ptff->raise();
        label_4->raise();
        label_7->raise();
        label->raise();
        label_10->raise();
        statutf->raise();
        line_4->raise();
        pb_modifierf->raise();
        line_2->raise();
        scb->raise();
        line_7->raise();
        commandLinkButton->raise();
        line_6->raise();
        pb_sf->raise();
        sftxt->raise();
        line_8->raise();
        label_5->raise();
        hyhy->raise();
        valeee->raise();
        dateEdit->raise();
        idtf->raise();

        retranslateUi(FID);

        pb_modifierf_2->setDefault(false);
        pb_modifierf->setDefault(false);


        QMetaObject::connectSlotsByName(FID);
    } // setupUi

    void retranslateUi(QDialog *FID)
    {
        FID->setWindowTitle(QApplication::translate("FID", "Dialog", Q_NULLPTR));
        pb_actualiserf->setText(QApplication::translate("FID", "Actualiser", Q_NULLPTR));
        pb_supprimerf->setText(QApplication::translate("FID", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("FID", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#ffffff;\">Gestion Loisir :</span></p></body></html>", Q_NULLPTR));
        pb_stats->setText(QApplication::translate("FID", "Statistiques", Q_NULLPTR));
        l_gotof->setText(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("FID", " Par identifiant :", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pb_modifierf_2->setText(QApplication::translate("FID", "Ajouter", Q_NULLPTR));
        pb_sf->setText(QApplication::translate("FID", "chercher", Q_NULLPTR));
        commandLinkButton->setText(QString());
        label_5->setText(QApplication::translate("FID", "Tri :", Q_NULLPTR));
        label_9->setText(QApplication::translate("FID", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#00007f;\">Gestion loisir :</span></p></body></html>", Q_NULLPTR));
        ptff->setPlaceholderText(QApplication::translate("FID", "Taper ici", Q_NULLPTR));
        label_4->setText(QApplication::translate("FID", "Lieu :", Q_NULLPTR));
        label_7->setText(QApplication::translate("FID", "Date :", Q_NULLPTR));
        label->setText(QApplication::translate("FID", "Identifiant :", Q_NULLPTR));
        label_10->setText(QApplication::translate("FID", "Type :", Q_NULLPTR));
        pb_modifierf->setText(QApplication::translate("FID", "Modifier", Q_NULLPTR));
        hyhy->setText(QApplication::translate("FID", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        valeee->setText(QApplication::translate("FID", "<html><head/><body><p><span style=\" color:#ff0000;\">*Client Inexistant ! Verifier Vos Param\303\250tres !</span></p></body></html>", Q_NULLPTR));
        idtf->setPlaceholderText(QApplication::translate("FID", "Taper ici", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FID: public Ui_FID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FID_H
