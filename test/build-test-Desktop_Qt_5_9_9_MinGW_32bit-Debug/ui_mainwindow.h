/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImprimer;
    QAction *actionChercher;
    QAction *actionNom;
    QAction *actionAlphabet;
    QAction *actionID;
    QAction *actionNettoyer;
    QAction *actionDate_de_Naissance;
    QAction *actionNationalit;
    QAction *actionEtat;
    QAction *actionFid_lit_s;
    QAction *actionClients;
    QAction *actionDark_Mode;
    QAction *actionBlue;
    QAction *actionGo3r;
    QAction *actionClavier_Virtuel;
    QWidget *centralWidget;
    QPushButton *pb_supprimer;
    QTableView *tab;
    QPushButton *pb_actualiser;
    QComboBox *supptxt;
    QCommandLinkButton *l_gotof;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QCommandLinkButton *next;
    QCommandLinkButton *back;
    QPushButton *pb_ok;
    QPushButton *pb_modifierp;
    QLabel *title;
    QFrame *line_5;
    QGroupBox *groupBox_5;
    QLabel *label_11;
    QLabel *title_2;
    QFrame *line_6;
    QGroupBox *groupBox_6;
    QFrame *line_7;
    QDialogButtonBox *buttonBox;
    QLineEdit *Snomtxt;
    QLabel *label_5;
    QLineEdit *Sprenomtxt;
    QFrame *line_8;
    QLabel *label_9;
    QTableView *Stab;
    QLabel *label_8;
    QFrame *line_10;
    QFrame *line_11;
    QLineEdit *SCIN;
    QFrame *line_4;
    QLabel *hyhy;
    QFrame *line_3;
    QGroupBox *groupBox;
    QLabel *label_3;
    QComboBox *typetxt;
    QLineEdit *idd;
    QLabel *valeee;
    QLabel *valee;
    QLineEdit *adressetxt;
    QLineEdit *nomtxt;
    QLabel *label;
    QFrame *line;
    QLabel *label_4;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuClient_le;
    QMenu *menuTrier_par_2;
    QMenu *menuAide;
    QMenu *menuA_propos;
    QMenu *menuA_propos_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(890, 503);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionImprimer = new QAction(MainWindow);
        actionImprimer->setObjectName(QStringLiteral("actionImprimer"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/RSC/RSC/Print_Button_printer-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimer->setIcon(icon);
        actionChercher = new QAction(MainWindow);
        actionChercher->setObjectName(QStringLiteral("actionChercher"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/RSC/RSC/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChercher->setIcon(icon1);
        actionNom = new QAction(MainWindow);
        actionNom->setObjectName(QStringLiteral("actionNom"));
        actionAlphabet = new QAction(MainWindow);
        actionAlphabet->setObjectName(QStringLiteral("actionAlphabet"));
        actionID = new QAction(MainWindow);
        actionID->setObjectName(QStringLiteral("actionID"));
        actionNettoyer = new QAction(MainWindow);
        actionNettoyer->setObjectName(QStringLiteral("actionNettoyer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/RSC/RSC/images.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNettoyer->setIcon(icon2);
        actionDate_de_Naissance = new QAction(MainWindow);
        actionDate_de_Naissance->setObjectName(QStringLiteral("actionDate_de_Naissance"));
        actionNationalit = new QAction(MainWindow);
        actionNationalit->setObjectName(QStringLiteral("actionNationalit"));
        actionEtat = new QAction(MainWindow);
        actionEtat->setObjectName(QStringLiteral("actionEtat"));
        actionFid_lit_s = new QAction(MainWindow);
        actionFid_lit_s->setObjectName(QStringLiteral("actionFid_lit_s"));
        actionClients = new QAction(MainWindow);
        actionClients->setObjectName(QStringLiteral("actionClients"));
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName(QStringLiteral("actionDark_Mode"));
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QStringLiteral("actionBlue"));
        actionGo3r = new QAction(MainWindow);
        actionGo3r->setObjectName(QStringLiteral("actionGo3r"));
        actionClavier_Virtuel = new QAction(MainWindow);
        actionClavier_Virtuel->setObjectName(QStringLiteral("actionClavier_Virtuel"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/RSC/Keyboard.webp"), QSize(), QIcon::Normal, QIcon::Off);
        actionClavier_Virtuel->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pb_supprimer = new QPushButton(centralWidget);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(790, 69, 91, 33));
        pb_supprimer->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font.setPointSize(11);
        pb_supprimer->setFont(font);
        pb_supprimer->setStyleSheet(QLatin1String("\n"
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
        icon4.addFile(QStringLiteral(":/RSC/RSC/unnamed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon4);
        tab = new QTableView(centralWidget);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(239, 110, 641, 341));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        tab->setFont(font1);
        tab->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        tab->setAutoFillBackground(true);
        tab->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"\n"
""));
        tab->setFrameShape(QFrame::StyledPanel);
        tab->setFrameShadow(QFrame::Sunken);
        tab->setLineWidth(8);
        tab->setAlternatingRowColors(true);
        tab->setShowGrid(true);
        tab->setGridStyle(Qt::SolidLine);
        tab->horizontalHeader()->setCascadingSectionResizes(false);
        tab->horizontalHeader()->setDefaultSectionSize(84);
        pb_actualiser = new QPushButton(centralWidget);
        pb_actualiser->setObjectName(QStringLiteral("pb_actualiser"));
        pb_actualiser->setGeometry(QRect(240, 69, 91, 31));
        pb_actualiser->setMinimumSize(QSize(0, 31));
        pb_actualiser->setFont(font);
        pb_actualiser->setStyleSheet(QLatin1String("\n"
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
"\n"
""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/RSC/RSC/unnamed (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_actualiser->setIcon(icon5);
        pb_actualiser->setIconSize(QSize(18, 18));
        supptxt = new QComboBox(centralWidget);
        supptxt->setObjectName(QStringLiteral("supptxt"));
        supptxt->setGeometry(QRect(690, 70, 91, 31));
        l_gotof = new QCommandLinkButton(centralWidget);
        l_gotof->setObjectName(QStringLiteral("l_gotof"));
        l_gotof->setGeometry(QRect(822, -10, 51, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        l_gotof->setFont(font2);
        l_gotof->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/RSC/RSC/long-arrow-right - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        l_gotof->setIcon(icon6);
        l_gotof->setIconSize(QSize(32, 32));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 0, 561, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font3.setPointSize(26);
        font3.setItalic(false);
        font3.setUnderline(true);
        label_10->setFont(font3);
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"border-radius: 10px;\n"
"padding : 0 8px;\n"
"background-color: rgb(30, 40, 60);"));
        label_10->setFrameShape(QFrame::StyledPanel);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setLineWidth(5);
        label_10->setMidLineWidth(5);
        label_10->setTextFormat(Qt::AutoText);
        label_10->setScaledContents(false);
        label_10->setWordWrap(false);
        label_10->setOpenExternalLinks(false);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 30, 891, 441));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 50);"));
        next = new QCommandLinkButton(centralWidget);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(180, -2, 31, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/RSC/RSC/4193337571530177264-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon7);
        next->setIconSize(QSize(25, 25));
        back = new QCommandLinkButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(0, -2, 41, 41));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/RSC/RSC/4193337571530177264-512 - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon8);
        back->setIconSize(QSize(25, 25));
        pb_ok = new QPushButton(centralWidget);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));
        pb_ok->setGeometry(QRect(10, 410, 191, 32));
        pb_ok->setFont(font);
        pb_ok->setStyleSheet(QLatin1String("\n"
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
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/RSC/RSC/User_Avatar_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ok->setIcon(icon9);
        pb_modifierp = new QPushButton(centralWidget);
        pb_modifierp->setObjectName(QStringLiteral("pb_modifierp"));
        pb_modifierp->setGeometry(QRect(10, 410, 191, 32));
        pb_modifierp->setFont(font);
        pb_modifierp->setStyleSheet(QLatin1String("\n"
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
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/RSC/RSC/698873-icon-136-document-edit-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifierp->setIcon(icon10);
        pb_modifierp->setIconSize(QSize(18, 18));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(40, -7, 141, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Circular Bold"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        title->setFont(font4);
        title->setFrameShape(QFrame::NoFrame);
        title->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(40, 20, 141, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 490, 371, 321));
        groupBox_5->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 50);"));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(270, 60, 91, 18));
        QFont font5;
        font5.setFamily(QStringLiteral("Bahnschrift"));
        font5.setPointSize(14);
        label_11->setFont(font5);
        title_2 = new QLabel(centralWidget);
        title_2->setObjectName(QStringLiteral("title_2"));
        title_2->setGeometry(QRect(40, -7, 141, 41));
        title_2->setFont(font4);
        title_2->setTabletTracking(false);
        title_2->setFrameShape(QFrame::NoFrame);
        title_2->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 465, 881, 31));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(380, 490, 501, 321));
        groupBox_6->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 50);"));
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(366, 500, 21, 301));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(260, 600, 100, 51));
        QFont font6;
        font6.setFamily(QStringLiteral("Bahnschrift"));
        font6.setPointSize(10);
        buttonBox->setFont(font6);
        buttonBox->setStyleSheet(QLatin1String("\n"
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
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        Snomtxt = new QLineEdit(centralWidget);
        Snomtxt->setObjectName(QStringLiteral("Snomtxt"));
        Snomtxt->setGeometry(QRect(120, 550, 121, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 570, 101, 18));
        label_5->setFont(font5);
        Sprenomtxt = new QLineEdit(centralWidget);
        Sprenomtxt->setObjectName(QStringLiteral("Sprenomtxt"));
        Sprenomtxt->setGeometry(QRect(120, 580, 121, 20));
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(100, 550, 31, 20));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 540, 91, 18));
        label_9->setFont(font5);
        Stab = new QTableView(centralWidget);
        Stab->setObjectName(QStringLiteral("Stab"));
        Stab->setGeometry(QRect(390, 498, 481, 141));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 490, 241, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Bahnschrift"));
        font7.setPointSize(26);
        label_8->setFont(font7);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(100, 580, 31, 20));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(240, 550, 20, 51));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        SCIN = new QLineEdit(centralWidget);
        SCIN->setObjectName(QStringLiteral("SCIN"));
        SCIN->setGeometry(QRect(260, 580, 101, 20));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(340, 80, 341, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        hyhy = new QLabel(centralWidget);
        hyhy->setObjectName(QStringLiteral("hyhy"));
        hyhy->setGeometry(QRect(760, 20, 41, 20));
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
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 390, 189, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-110, 30, 321, 441));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(30, 40, 60);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 220, 51, 16));
        QFont font9;
        font9.setFamily(QStringLiteral("Circular Bold"));
        font9.setPointSize(10);
        font9.setBold(true);
        font9.setWeight(75);
        label_3->setFont(font9);
        typetxt = new QComboBox(groupBox);
        typetxt->setObjectName(QStringLiteral("typetxt"));
        typetxt->setGeometry(QRect(120, 240, 191, 20));
        typetxt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        idd = new QLineEdit(groupBox);
        idd->setObjectName(QStringLiteral("idd"));
        idd->setGeometry(QRect(120, 100, 191, 20));
        idd->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        valeee = new QLabel(centralWidget);
        valeee->setObjectName(QStringLiteral("valeee"));
        valeee->setGeometry(QRect(20, 620, 221, 16));
        valee = new QLabel(centralWidget);
        valee->setObjectName(QStringLiteral("valee"));
        valee->setGeometry(QRect(10, 450, 201, 16));
        adressetxt = new QLineEdit(centralWidget);
        adressetxt->setObjectName(QStringLiteral("adressetxt"));
        adressetxt->setGeometry(QRect(11, 220, 191, 20));
        nomtxt = new QLineEdit(centralWidget);
        nomtxt->setObjectName(QStringLiteral("nomtxt"));
        nomtxt->setGeometry(QRect(11, 170, 191, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 150, 36, 16));
        label->setFont(font9);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(11, 90, 189, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(11, 200, 81, 16));
        label_4->setFont(font9);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 100, 31, 16));
        label_2->setFont(font9);
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        groupBox_2->raise();
        pb_modifierp->raise();
        tab->raise();
        label_10->raise();
        pb_supprimer->raise();
        pb_actualiser->raise();
        supptxt->raise();
        l_gotof->raise();
        next->raise();
        back->raise();
        title->raise();
        line_5->raise();
        groupBox_5->raise();
        title_2->raise();
        line_6->raise();
        groupBox_6->raise();
        line_7->raise();
        buttonBox->raise();
        Snomtxt->raise();
        label_5->raise();
        Sprenomtxt->raise();
        line_8->raise();
        label_9->raise();
        Stab->raise();
        label_8->raise();
        line_10->raise();
        line_11->raise();
        SCIN->raise();
        line_4->raise();
        hyhy->raise();
        adressetxt->raise();
        nomtxt->raise();
        line_3->raise();
        label->raise();
        line->raise();
        pb_ok->raise();
        label_4->raise();
        label_2->raise();
        valeee->raise();
        valee->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 890, 22));
        menuClient_le = new QMenu(menuBar);
        menuClient_le->setObjectName(QStringLiteral("menuClient_le"));
        menuTrier_par_2 = new QMenu(menuClient_le);
        menuTrier_par_2->setObjectName(QStringLiteral("menuTrier_par_2"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/RSC/RSC/sort-az-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTrier_par_2->setIcon(icon11);
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        menuA_propos = new QMenu(menuBar);
        menuA_propos->setObjectName(QStringLiteral("menuA_propos"));
        menuA_propos_2 = new QMenu(menuBar);
        menuA_propos_2->setObjectName(QStringLiteral("menuA_propos_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuClient_le->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuBar->addAction(menuA_propos->menuAction());
        menuBar->addAction(menuA_propos_2->menuAction());
        menuClient_le->addAction(actionImprimer);
        menuClient_le->addSeparator();
        menuClient_le->addAction(actionChercher);
        menuClient_le->addSeparator();
        menuClient_le->addAction(menuTrier_par_2->menuAction());
        menuClient_le->addSeparator();
        menuClient_le->addAction(actionNettoyer);
        menuClient_le->addSeparator();
        menuClient_le->addAction(actionClavier_Virtuel);
        menuClient_le->addSeparator();
        menuTrier_par_2->addAction(actionAlphabet);
        menuTrier_par_2->addSeparator();
        menuTrier_par_2->addAction(actionID);
        menuTrier_par_2->addSeparator();
        menuTrier_par_2->addAction(actionDate_de_Naissance);
        menuTrier_par_2->addSeparator();
        menuTrier_par_2->addAction(actionNationalit);
        menuTrier_par_2->addSeparator();
        menuTrier_par_2->addSeparator();
        menuAide->addAction(actionFid_lit_s);
        menuAide->addSeparator();
        menuAide->addAction(actionClients);
        menuAide->addSeparator();
        menuA_propos->addAction(actionDark_Mode);
        menuA_propos->addSeparator();
        menuA_propos->addAction(actionBlue);
        menuA_propos->addSeparator();
        menuA_propos->addAction(actionGo3r);
        menuA_propos->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionImprimer->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        actionChercher->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        actionNom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        actionAlphabet->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        actionID->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        actionNettoyer->setText(QApplication::translate("MainWindow", "Nettoyer", Q_NULLPTR));
        actionDate_de_Naissance->setText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        actionNationalit->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        actionEtat->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        actionFid_lit_s->setText(QApplication::translate("MainWindow", "Fid\303\250lit\303\250s", Q_NULLPTR));
        actionClients->setText(QApplication::translate("MainWindow", "Clients", Q_NULLPTR));
        actionDark_Mode->setText(QApplication::translate("MainWindow", "Dark Mode", Q_NULLPTR));
        actionBlue->setText(QApplication::translate("MainWindow", "Bleu", Q_NULLPTR));
        actionGo3r->setText(QApplication::translate("MainWindow", "Go3r", Q_NULLPTR));
        actionClavier_Virtuel->setText(QApplication::translate("MainWindow", "Clavier Virtuel", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pb_actualiser->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_actualiser->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        l_gotof->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bahnschrift Condensed'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bahnschrift'; font-size:28pt; font-weight:600; color:#e6e6e6;\">Gestion Lieu D'Attraction  :</span></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        next->setText(QString());
        back->setText(QString());
        pb_ok->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pb_modifierp->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#00007f;\">Ajouter</span></p></body></html>", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; color:#f9f9f9;\">Par CIN :</span></p></body></html>", Q_NULLPTR));
        title_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#00007f;\">Modifier</span></p></body></html>", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; color:#f9f9f9;\">Par prenom :</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; color:#f9f9f9;\">Par nom :</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; color:#f9f9f9;\">Chercher un client :</span></p></body></html>", Q_NULLPTR));
        hyhy->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        valeee->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Client Inexistant ! Verifier Vos Param\303\250tres !</span></p></body></html>", Q_NULLPTR));
        valee->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#ff0000;\">*Champ(s) Vide(s) ! Verifier Vos param\303\250tres !</span></p></body></html>", Q_NULLPTR));
        adressetxt->setPlaceholderText(QApplication::translate("MainWindow", "Taper ici", Q_NULLPTR));
        nomtxt->setText(QString());
        nomtxt->setPlaceholderText(QApplication::translate("MainWindow", "Taper ici", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#f9f9f9;\">Nom :</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Adresse</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">ID</span></p></body></html>", Q_NULLPTR));
        menuClient_le->setTitle(QApplication::translate("MainWindow", "Outils", Q_NULLPTR));
        menuTrier_par_2->setTitle(QApplication::translate("MainWindow", "Trier par", Q_NULLPTR));
        menuAide->setTitle(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "Themes", Q_NULLPTR));
        menuA_propos_2->setTitle(QApplication::translate("MainWindow", "A propos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
