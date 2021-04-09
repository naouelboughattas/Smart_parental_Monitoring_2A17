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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QGroupBox *groupBox_2;
    QLineEdit *le_num2;
    QPushButton *modifier;
    QLineEdit *le_nom2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_13;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_sort;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_28;
    QLineEdit *lineEdit_search_num;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    QLineEdit *lineEdit_search_nom;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_search;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLineEdit *num;
    QPushButton *suprrimer;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_num_2;
    QLineEdit *le_type_2;
    QPushButton *pb_ajouter_2;
    QGroupBox *groupBox_4;
    QLineEdit *le_num2_2;
    QPushButton *modifier_2;
    QLineEdit *le_type2_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_20;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_sort_2;
    QTableView *tableView_2;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_31;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_32;
    QLineEdit *lineEdit_search_num_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_33;
    QLineEdit *lineEdit_search_nom_2;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_search_2;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_6;
    QLabel *label_19;
    QLineEdit *num_2;
    QPushButton *suprrimer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 841, 541));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 271, 171));
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
        pb_ajouter->setGeometry(QRect(170, 130, 75, 23));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 261, 171));
        le_num2 = new QLineEdit(groupBox_2);
        le_num2->setObjectName(QStringLiteral("le_num2"));
        le_num2->setGeometry(QRect(130, 40, 113, 20));
        modifier = new QPushButton(groupBox_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(160, 140, 75, 23));
        le_nom2 = new QLineEdit(groupBox_2);
        le_nom2->setObjectName(QStringLiteral("le_nom2"));
        le_nom2->setGeometry(QRect(130, 90, 113, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-140, 40, 101, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-130, 90, 101, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 40, 91, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 90, 101, 20));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(570, 10, 231, 181));
        verticalLayout_7 = new QVBoxLayout(groupBox_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_8->addWidget(label_13);

        comboBox = new QComboBox(groupBox_7);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_8->addWidget(comboBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        pushButton_sort = new QPushButton(groupBox_7);
        pushButton_sort->setObjectName(QStringLiteral("pushButton_sort"));

        horizontalLayout_9->addWidget(pushButton_sort);


        verticalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout_7->addLayout(verticalLayout_8);

        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(570, 210, 231, 201));
        verticalLayout_9 = new QVBoxLayout(groupBox_10);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_27 = new QLabel(groupBox_10);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_9->addWidget(label_27);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_28 = new QLabel(groupBox_10);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_10->addWidget(label_28);

        lineEdit_search_num = new QLineEdit(groupBox_10);
        lineEdit_search_num->setObjectName(QStringLiteral("lineEdit_search_num"));

        horizontalLayout_10->addWidget(lineEdit_search_num);


        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_29 = new QLabel(groupBox_10);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_11->addWidget(label_29);

        lineEdit_search_nom = new QLineEdit(groupBox_10);
        lineEdit_search_nom->setObjectName(QStringLiteral("lineEdit_search_nom"));

        horizontalLayout_11->addWidget(lineEdit_search_nom);


        verticalLayout_9->addLayout(horizontalLayout_11);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        pushButton_search = new QPushButton(groupBox_10);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        horizontalLayout_12->addWidget(pushButton_search);


        verticalLayout_9->addLayout(horizontalLayout_12);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 380, 441, 61));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 20, 101, 16));
        num = new QLineEdit(groupBox_3);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(180, 20, 113, 20));
        suprrimer = new QPushButton(groupBox_3);
        suprrimer->setObjectName(QStringLiteral("suprrimer"));
        suprrimer->setGeometry(QRect(350, 30, 75, 23));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 200, 411, 161));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 260, 51, 23));
        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString::fromUtf8("G\303\251rer les chambres"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 20, 271, 171));
        groupBox_5->setAutoFillBackground(false);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 40, 91, 20));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 90, 101, 20));
        le_num_2 = new QLineEdit(groupBox_5);
        le_num_2->setObjectName(QStringLiteral("le_num_2"));
        le_num_2->setGeometry(QRect(110, 40, 113, 20));
        le_type_2 = new QLineEdit(groupBox_5);
        le_type_2->setObjectName(QStringLiteral("le_type_2"));
        le_type_2->setGeometry(QRect(110, 90, 113, 20));
        pb_ajouter_2 = new QPushButton(groupBox_5);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(170, 130, 75, 23));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(290, 20, 261, 171));
        le_num2_2 = new QLineEdit(groupBox_4);
        le_num2_2->setObjectName(QStringLiteral("le_num2_2"));
        le_num2_2->setGeometry(QRect(130, 40, 113, 20));
        modifier_2 = new QPushButton(groupBox_4);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(160, 140, 75, 23));
        le_type2_2 = new QLineEdit(groupBox_4);
        le_type2_2->setObjectName(QStringLiteral("le_type2_2"));
        le_type2_2->setGeometry(QRect(130, 90, 113, 20));
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
        label_18->setGeometry(QRect(30, 90, 101, 20));
        groupBox_9 = new QGroupBox(tab_2);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(560, 30, 231, 181));
        verticalLayout_10 = new QVBoxLayout(groupBox_9);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_20 = new QLabel(groupBox_9);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_11->addWidget(label_20);

        comboBox_2 = new QComboBox(groupBox_9);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_11->addWidget(comboBox_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        pushButton_sort_2 = new QPushButton(groupBox_9);
        pushButton_sort_2->setObjectName(QStringLiteral("pushButton_sort_2"));

        horizontalLayout_13->addWidget(pushButton_sort_2);


        verticalLayout_11->addLayout(horizontalLayout_13);


        verticalLayout_10->addLayout(verticalLayout_11);

        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(30, 200, 461, 201));
        groupBox_11 = new QGroupBox(tab_2);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(570, 220, 231, 201));
        verticalLayout_12 = new QVBoxLayout(groupBox_11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_31 = new QLabel(groupBox_11);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_12->addWidget(label_31);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_32 = new QLabel(groupBox_11);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_14->addWidget(label_32);

        lineEdit_search_num_2 = new QLineEdit(groupBox_11);
        lineEdit_search_num_2->setObjectName(QStringLiteral("lineEdit_search_num_2"));

        horizontalLayout_14->addWidget(lineEdit_search_num_2);


        verticalLayout_12->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_33 = new QLabel(groupBox_11);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_15->addWidget(label_33);

        lineEdit_search_nom_2 = new QLineEdit(groupBox_11);
        lineEdit_search_nom_2->setObjectName(QStringLiteral("lineEdit_search_nom_2"));

        horizontalLayout_15->addWidget(lineEdit_search_nom_2);


        verticalLayout_12->addLayout(horizontalLayout_15);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_8);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_8);

        pushButton_search_2 = new QPushButton(groupBox_11);
        pushButton_search_2->setObjectName(QStringLiteral("pushButton_search_2"));

        horizontalLayout_16->addWidget(pushButton_search_2);


        verticalLayout_12->addLayout(horizontalLayout_16);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 280, 61, 23));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(60, 430, 441, 61));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 20, 101, 16));
        num_2 = new QLineEdit(groupBox_6);
        num_2->setObjectName(QStringLiteral("num_2"));
        num_2->setGeometry(QRect(180, 20, 113, 20));
        suprrimer_2 = new QPushButton(groupBox_6);
        suprrimer_2->setObjectName(QStringLiteral("suprrimer_2"));
        suprrimer_2->setGeometry(QRect(350, 30, 75, 23));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Mise en ordre", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Entrer le type de tri : ", Q_NULLPTR));
        pushButton_sort->setText(QApplication::translate("MainWindow", "Ordonner", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Enter ici le : ", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "nom chambre     ", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Supprission", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        suprrimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Ajout  ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "num\303\251ro \303\251tage", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "type \303\251tage", Q_NULLPTR));
        le_num_2->setText(QString());
        le_type_2->setText(QString());
        pb_ajouter_2->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "nom chambre", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "num\303\251ro \303\251tage", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "type \303\251tage", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Mise en ordre", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Entrer le type de tri : ", Q_NULLPTR));
        pushButton_sort_2->setText(QApplication::translate("MainWindow", "Ordonner", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Entre ici le :", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "nom chambre     ", Q_NULLPTR));
        pushButton_search_2->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Supprission", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "num\303\251ro chambre", Q_NULLPTR));
        suprrimer_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "G\303\251rer les \303\251tages", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
