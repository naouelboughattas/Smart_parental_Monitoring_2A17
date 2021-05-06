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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_num;
    QLineEdit *le_nom;
    QPushButton *pb_ajouter;
    QPushButton *Sonrechech_3;
    QGroupBox *groupBox_2;
    QLineEdit *le_num2;
    QLineEdit *le_nom2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *modifier;
    QPushButton *Sonrechech_4;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLineEdit *num;
    QPushButton *suprrimer;
    QPushButton *Sonrechech_5;
    QTableView *tableView;
    QGroupBox *groupBox_10;
    QLabel *label_34;
    QComboBox *comboBox;
    QPushButton *pushButton_sort;
    QPushButton *Sonrechech_2;
    QGroupBox *groupBox_11;
    QLineEdit *lineEdit_search_num;
    QLineEdit *lineEdit_search_nom;
    QPushButton *pushButton_search;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QPushButton *Sonrechech;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_num_2;
    QLineEdit *le_type_2;
    QLabel *label_11;
    QPushButton *pb_ajouter_2;
    QPushButton *Sonrechech_8;
    QGroupBox *groupBox_4;
    QLineEdit *le_num2_2;
    QPushButton *modifier_2;
    QLineEdit *le_type2_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *Sonrechech_9;
    QTableView *tableView_2;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_6;
    QLabel *label_19;
    QLineEdit *num_2;
    QPushButton *suprrimer_2;
    QPushButton *Sonrechech_10;
    QGroupBox *groupBox_8;
    QLabel *label_20;
    QComboBox *comboBox_2;
    QPushButton *pushButton_sort_2;
    QPushButton *Sonrechech_7;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_search_num_2;
    QLineEdit *lineEdit_search_nom_2;
    QPushButton *pushButton_search_2;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_30;
    QPushButton *Sonrechech_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(860, 981);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 931, 931));
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 255, 236);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 410, 271, 171));
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 91, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 101, 20));
        le_num = new QLineEdit(groupBox);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setGeometry(QRect(110, 40, 113, 20));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(110, 90, 113, 20));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(180, 130, 81, 31));
        pb_ajouter->setStyleSheet(QLatin1String("	background:linear-gradient(to bottom, #44c767 5%, #5cbf2a 100%);\n"
"	background-color:#44c767;\n"
"	border-radius:14px;\n"
"	border:0px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"	font-weight:bold;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #2f6627;\n"
"	background:linear-gradient(to bottom, #5cbf2a 5%, #44c767 100%);\n"
"	background-color:#5cbf2a;\n"
"	position:relative;\n"
"	top:0px;\n"
"\n"
""));
        Sonrechech_3 = new QPushButton(groupBox);
        Sonrechech_3->setObjectName(QStringLiteral("Sonrechech_3"));
        Sonrechech_3->setGeometry(QRect(230, 10, 31, 41));
        Sonrechech_3->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(410, 410, 281, 171));
        le_num2 = new QLineEdit(groupBox_2);
        le_num2->setObjectName(QStringLiteral("le_num2"));
        le_num2->setGeometry(QRect(130, 50, 113, 20));
        le_nom2 = new QLineEdit(groupBox_2);
        le_nom2->setObjectName(QStringLiteral("le_nom2"));
        le_nom2->setGeometry(QRect(132, 100, 111, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-140, 40, 101, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-130, 90, 101, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 50, 91, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 100, 101, 20));
        modifier = new QPushButton(groupBox_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(170, 130, 81, 31));
        modifier->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #9fb4f2;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #476e9e 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #44c767 100%);\n"
"	background-color:#476e9e;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        Sonrechech_4 = new QPushButton(groupBox_2);
        Sonrechech_4->setObjectName(QStringLiteral("Sonrechech_4"));
        Sonrechech_4->setGeometry(QRect(250, 10, 31, 41));
        Sonrechech_4->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 600, 511, 71));
        groupBox_3->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 30, 101, 16));
        num = new QLineEdit(groupBox_3);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(180, 30, 113, 20));
        suprrimer = new QPushButton(groupBox_3);
        suprrimer->setObjectName(QStringLiteral("suprrimer"));
        suprrimer->setGeometry(QRect(340, 30, 101, 31));
        suprrimer->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#cf0606;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        Sonrechech_5 = new QPushButton(groupBox_3);
        Sonrechech_5->setObjectName(QStringLiteral("Sonrechech_5"));
        Sonrechech_5->setGeometry(QRect(470, 10, 31, 41));
        Sonrechech_5->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(90, 190, 621, 211));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(420, 10, 261, 171));
        groupBox_10->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        label_34 = new QLabel(groupBox_10);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 20, 141, 20));
        comboBox = new QComboBox(groupBox_10);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 50, 241, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_sort = new QPushButton(groupBox_10);
        pushButton_sort->setObjectName(QStringLiteral("pushButton_sort"));
        pushButton_sort->setGeometry(QRect(150, 132, 91, 31));
        pushButton_sort->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#616161;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        Sonrechech_2 = new QPushButton(groupBox_10);
        Sonrechech_2->setObjectName(QStringLiteral("Sonrechech_2"));
        Sonrechech_2->setGeometry(QRect(220, 10, 31, 41));
        Sonrechech_2->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_11 = new QGroupBox(tab);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(140, 10, 261, 171));
        groupBox_11->setStyleSheet(QStringLiteral(""));
        lineEdit_search_num = new QLineEdit(groupBox_11);
        lineEdit_search_num->setObjectName(QStringLiteral("lineEdit_search_num"));
        lineEdit_search_num->setGeometry(QRect(110, 50, 131, 20));
        lineEdit_search_num->setStyleSheet(QStringLiteral(""));
        lineEdit_search_nom = new QLineEdit(groupBox_11);
        lineEdit_search_nom->setObjectName(QStringLiteral("lineEdit_search_nom"));
        lineEdit_search_nom->setGeometry(QRect(110, 90, 131, 20));
        lineEdit_search_nom->setStyleSheet(QStringLiteral(""));
        pushButton_search = new QPushButton(groupBox_11);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(140, 130, 101, 31));
        pushButton_search->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#78250c;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        label_35 = new QLabel(groupBox_11);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 50, 91, 20));
        label_36 = new QLabel(groupBox_11);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 90, 91, 20));
        label_37 = new QLabel(groupBox_11);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(30, 20, 211, 13));
        Sonrechech = new QPushButton(groupBox_11);
        Sonrechech->setObjectName(QStringLiteral("Sonrechech"));
        Sonrechech->setGeometry(QRect(210, 10, 31, 41));
        Sonrechech->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 330, 51, 51));
        pushButton_3->setStyleSheet(QLatin1String(" background-image: url(C:/Users/lenovo/Downloads/file_pdf_download_icon-icons.com_68954.png);\n"
"color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(130, 410, 281, 171));
        groupBox_5->setAutoFillBackground(false);
        groupBox_5->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 91, 20));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 80, 101, 20));
        le_num_2 = new QLineEdit(groupBox_5);
        le_num_2->setObjectName(QStringLiteral("le_num_2"));
        le_num_2->setGeometry(QRect(130, 40, 113, 20));
        le_type_2 = new QLineEdit(groupBox_5);
        le_type_2->setObjectName(QStringLiteral("le_type_2"));
        le_type_2->setGeometry(QRect(130, 80, 113, 20));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(520, 290, 101, 20));
        pb_ajouter_2 = new QPushButton(groupBox_5);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(170, 130, 81, 31));
        pb_ajouter_2->setStyleSheet(QLatin1String("	background:linear-gradient(to bottom, #44c767 5%, #5cbf2a 100%);\n"
"	background-color:#44c767;\n"
"	border-radius:14px;\n"
"	border:0px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"	font-weight:bold;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #2f6627;\n"
"	background:linear-gradient(to bottom, #5cbf2a 5%, #44c767 100%);\n"
"	background-color:#5cbf2a;\n"
"	position:relative;\n"
"	top:0px;\n"
"\n"
""));
        Sonrechech_8 = new QPushButton(groupBox_5);
        Sonrechech_8->setObjectName(QStringLiteral("Sonrechech_8"));
        Sonrechech_8->setGeometry(QRect(250, 10, 31, 41));
        Sonrechech_8->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(420, 410, 281, 171));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        le_num2_2 = new QLineEdit(groupBox_4);
        le_num2_2->setObjectName(QStringLiteral("le_num2_2"));
        le_num2_2->setGeometry(QRect(130, 40, 113, 20));
        modifier_2 = new QPushButton(groupBox_4);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(170, 130, 81, 31));
        modifier_2->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #9fb4f2;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #476e9e 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #44c767 100%);\n"
"	background-color:#476e9e;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        le_type2_2 = new QLineEdit(groupBox_4);
        le_type2_2->setObjectName(QStringLiteral("le_type2_2"));
        le_type2_2->setGeometry(QRect(130, 80, 113, 20));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-140, 40, 101, 16));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(-130, 90, 101, 16));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 40, 91, 20));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 80, 81, 20));
        Sonrechech_9 = new QPushButton(groupBox_4);
        Sonrechech_9->setObjectName(QStringLiteral("Sonrechech_9"));
        Sonrechech_9->setGeometry(QRect(250, 10, 31, 41));
        Sonrechech_9->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(90, 190, 631, 201));
        tableView_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 320, 51, 51));
        pushButton_4->setStyleSheet(QLatin1String(" background-image: url(C:/Users/lenovo/Downloads/file_pdf_download_icon-icons.com_68954.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(170, 600, 501, 71));
        groupBox_6->setStyleSheet(QStringLiteral(""));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 30, 101, 16));
        num_2 = new QLineEdit(groupBox_6);
        num_2->setObjectName(QStringLiteral("num_2"));
        num_2->setGeometry(QRect(200, 30, 113, 20));
        suprrimer_2 = new QPushButton(groupBox_6);
        suprrimer_2->setObjectName(QStringLiteral("suprrimer_2"));
        suprrimer_2->setGeometry(QRect(340, 30, 101, 31));
        suprrimer_2->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#cf0606;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        Sonrechech_10 = new QPushButton(groupBox_6);
        Sonrechech_10->setObjectName(QStringLiteral("Sonrechech_10"));
        Sonrechech_10->setGeometry(QRect(460, 10, 31, 41));
        Sonrechech_10->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_8 = new QGroupBox(tab_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(420, 10, 261, 171));
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 20, 141, 20));
        comboBox_2 = new QComboBox(groupBox_8);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 50, 241, 31));
        pushButton_sort_2 = new QPushButton(groupBox_8);
        pushButton_sort_2->setObjectName(QStringLiteral("pushButton_sort_2"));
        pushButton_sort_2->setGeometry(QRect(150, 132, 91, 31));
        pushButton_sort_2->setStyleSheet(QLatin1String("box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"\n"
"	background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#616161;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        Sonrechech_7 = new QPushButton(groupBox_8);
        Sonrechech_7->setObjectName(QStringLiteral("Sonrechech_7"));
        Sonrechech_7->setGeometry(QRect(220, 10, 31, 41));
        Sonrechech_7->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        groupBox_9 = new QGroupBox(tab_2);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(130, 10, 261, 171));
        groupBox_9->setStyleSheet(QStringLiteral(""));
        lineEdit_search_num_2 = new QLineEdit(groupBox_9);
        lineEdit_search_num_2->setObjectName(QStringLiteral("lineEdit_search_num_2"));
        lineEdit_search_num_2->setGeometry(QRect(110, 50, 111, 20));
        lineEdit_search_num_2->setStyleSheet(QStringLiteral(""));
        lineEdit_search_nom_2 = new QLineEdit(groupBox_9);
        lineEdit_search_nom_2->setObjectName(QStringLiteral("lineEdit_search_nom_2"));
        lineEdit_search_nom_2->setGeometry(QRect(110, 90, 111, 20));
        lineEdit_search_nom_2->setStyleSheet(QStringLiteral(""));
        pushButton_search_2 = new QPushButton(groupBox_9);
        pushButton_search_2->setObjectName(QStringLiteral("pushButton_search_2"));
        pushButton_search_2->setGeometry(QRect(140, 130, 101, 31));
        pushButton_search_2->setStyleSheet(QLatin1String("    box-shadow: 0px 1px 16px -49px #667580;\n"
"	background:linear-gradient(to bottom, #7892c2 5%, #667580 100%);\n"
"	background-color:#7892c2;\n"
"	border-radius:14px;\n"
"	border:0px solid #4e6096;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:12px;\n"
"   font-weight:blod;\n"
"	padding:9px 19px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 10px #283966;\n"
"     background:linear-gradient(to bottom, #476e9e 5%, #667580 100%);\n"
"	background-color:#78250c;\n"
"\n"
"	position:relative;\n"
"	top:0px;"));
        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 91, 20));
        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 90, 81, 20));
        label_30 = new QLabel(groupBox_9);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 20, 211, 13));
        Sonrechech_6 = new QPushButton(groupBox_9);
        Sonrechech_6->setObjectName(QStringLiteral("Sonrechech_6"));
        Sonrechech_6->setGeometry(QRect(220, 10, 31, 41));
        Sonrechech_6->setStyleSheet(QStringLiteral("background-image: url(C:/Users/Lenovo/Desktop/son.jpg);"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout  ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Num\303\251ro Chambre", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom Chambre", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Sonrechech_3->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Num\303\251ro Chambre", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nom Chambre", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Sonrechech_4->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Supprission", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Num\303\251ro Chambre", Q_NULLPTR));
        suprrimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Sonrechech_5->setText(QString());
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Mise en ordre", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Entrer le type de tri : ", Q_NULLPTR));
        pushButton_sort->setText(QApplication::translate("MainWindow", "Ordonner", Q_NULLPTR));
        Sonrechech_2->setText(QString());
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Num\303\251ro Chambre", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Nom Chambre", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "Enter ici le : ", Q_NULLPTR));
        Sonrechech->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "G\303\251rer les chambres", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Num\303\251ro \303\251tage", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Type \303\251tage", Q_NULLPTR));
        le_num_2->setText(QString());
        le_type_2->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "type \303\251tage", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Sonrechech_8->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Num\303\251ro \303\251tage", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Type \303\251tage", Q_NULLPTR));
        Sonrechech_9->setText(QString());
        pushButton_4->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Supprission", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Num\303\251ro \303\251tage", Q_NULLPTR));
        suprrimer_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Sonrechech_10->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Mise en ordre", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Entrer le type de tri : ", Q_NULLPTR));
        pushButton_sort_2->setText(QApplication::translate("MainWindow", "Ordonner", Q_NULLPTR));
        Sonrechech_7->setText(QString());
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        pushButton_search_2->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Num\303\251ro \303\251tage", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Type \303\251tage", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Enter ici le : ", Q_NULLPTR));
        Sonrechech_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "G\303\251rer les \303\251tages", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
