/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *widget_2;
    QLabel *form;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QLabel *options;
    QPushButton *supprimer;
    QPushButton *modifier;
    QPushButton *ajouter;
    QTableView *tableView;
    QWidget *widget;
    QLineEdit *recherche_2;
    QComboBox *comboBox_5;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tab_client;
    QWidget *tab_2;
    QLineEdit *id_sup;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_33;
    QPushButton *supprimer_2;
    QPushButton *imp;
    QPushButton *imp_2;
    QComboBox *lineEdit_5;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QWidget *side_menu_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_21;
    QWidget *top_widget;
    QPushButton *pushButton_5;
    QPushButton *profil;
    QPushButton *facture;
    QPushButton *facture_2;
    QPushButton *facture_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(1900, 980);
        client->setStyleSheet(QLatin1String("\n"
"	\n"
"	\n"
"QWidget {	\n"
"	border:1px solid #dfdfdf;\n"
"	border-radius: 5px;\n"
"	background-color: #ffffff;\n"
"}\n"
"\n"
"QPushButton{\n"
"	\n"
"	border-raduis:5px\n"
"}\n"
"QPushButton:pressed{\n"
"	\n"
"	\n"
"	background-color: rgb(185, 185, 185);\n"
"}\n"
"#side_menu{\n"
"	border-radius: 20px;\n"
"	/*background-color: #071e26;*/\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"#side_menu_2{\n"
"	border-radius: 20px;\n"
"	/*background-color: #071e26;*/\n"
"	background-color:rgb(0,0,0);\n"
"}\n"
"\n"
"#top_widget{\n"
"\n"
"	/*background-color: #071e26;*/\n"
"background-color:rgb(0,0,0);\n"
"}\n"
"#widget_2 #widget{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"\n"
"#form{\n"
"	\n"
"	\n"
"	background-color: rgb(255,255,255);\n"
"border-top-left-radius: 50px;\n"
"}\n"
"\n"
"#widget_2 QLineEdit{\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgb(0,0,0);\n"
"padding-bottom:7px\n"
"\n"
"}\n"
"#widget_2{\n"
"	\n"
"	/* backgrou"
                        "nd-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"	/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"    /*background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"/*background-color: linear-gradient(135.9deg, rgb(109, 25, 252) 16.4%, rgb(125, 31, 165) 56.1%);\n"
"background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #6d19fc, stop: 1 #7d1fa5);*/\n"
"	background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"\n"
"#widget_2 #ajouter{\n"
"    color:rgb(0, 0, 0);\n"
"   \n"
"	background-color: rgb(172, 172, 172);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;	\n"
"}\n"
"\n"
"#widget_2 #modifier{\n"
"    color:rgb(0, 0, 0);\n"
" "
                        "  \n"
"	background-color: rgb(172, 172, 172);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;	\n"
"}\n"
"\n"
"#widget_2 #supprimer{\n"
"    color:rgb(0, 0, 0);\n"
"   \n"
"	background-color: rgb(172, 172, 172);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;	\n"
"}\n"
"\n"
"#options{\n"
"/*background-color: #071e26;*/\n"
"background-color: rgb(0, 0, 0);\n"
"border-bottom-right-radius: 50px;\n"
"\n"
"}\n"
"#widget_2 #recherche_2{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"#widget_2 #recherche_3{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"#widget_2 #recherche_4{\n"
"	\n"
"	backgro"
                        "und-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"\n"
"\n"
"/*#widget_2 #ajouter{\n"
" color: #b1b1b1;\n"
"    background-color:rgb(163, 163, 163)\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"\n"
"#modifier{\n"
" color: #b1b1b1;\n"
"    background-color: #565656;\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"#supprimer{\n"
" color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
""
                        "    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"#ajouter:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"#modifier:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"#supprimer:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}*/\n"
"#pdf_3{\n"
"background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"\n"
"#stat_2{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"\n"
"#widget QLineEdit{\n"
"background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        widget_2 = new QWidget(client);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(230, 140, 1631, 821));
        form = new QLabel(widget_2);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(90, 60, 451, 661));
        form->setStyleSheet(QStringLiteral(""));
        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 130, 261, 51));
        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(180, 240, 261, 51));
        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(170, 430, 261, 51));
        options = new QLabel(widget_2);
        options->setObjectName(QStringLiteral("options"));
        options->setGeometry(QRect(540, 60, 181, 661));
        supprimer = new QPushButton(widget_2);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(590, 320, 91, 61));
        modifier = new QPushButton(widget_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(590, 220, 91, 61));
        ajouter = new QPushButton(widget_2);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(590, 130, 91, 61));
        ajouter->setAutoRepeatDelay(300);
        tableView = new QTableView(widget_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(800, 70, 771, 651));
        tableView->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(820, 80, 731, 91));
        recherche_2 = new QLineEdit(widget);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(20, 10, 671, 31));
        comboBox_5 = new QComboBox(widget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(20, 50, 341, 31));
        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(370, 50, 321, 31));
        lineEdit_7 = new QLineEdit(widget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(170, 530, 261, 51));
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(800, 180, 771, 541));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_client = new QTableView(tab);
        tab_client->setObjectName(QStringLiteral("tab_client"));
        tab_client->setGeometry(QRect(-10, 0, 761, 511));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        id_sup = new QLineEdit(tab_2);
        id_sup->setObjectName(QStringLiteral("id_sup"));
        id_sup->setGeometry(QRect(160, 60, 113, 22));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 55, 101, 21));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 105, 101, 21));
        lineEdit_33 = new QLineEdit(tab_2);
        lineEdit_33->setObjectName(QStringLiteral("lineEdit_33"));
        lineEdit_33->setGeometry(QRect(160, 110, 113, 22));
        tabWidget->addTab(tab_2, QString());
        supprimer_2 = new QPushButton(widget_2);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(590, 420, 91, 61));
        supprimer_2->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;"));
        imp = new QPushButton(widget_2);
        imp->setObjectName(QStringLiteral("imp"));
        imp->setGeometry(QRect(590, 510, 91, 61));
        imp->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;"));
        imp_2 = new QPushButton(widget_2);
        imp_2->setObjectName(QStringLiteral("imp_2"));
        imp_2->setGeometry(QRect(590, 600, 91, 61));
        imp_2->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;"));
        lineEdit_5 = new QComboBox(widget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 350, 271, 41));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1671, 821));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        label->raise();
        form->raise();
        lineEdit_3->raise();
        lineEdit_6->raise();
        lineEdit_8->raise();
        options->raise();
        supprimer->raise();
        modifier->raise();
        ajouter->raise();
        tableView->raise();
        widget->raise();
        lineEdit_7->raise();
        tabWidget->raise();
        supprimer_2->raise();
        imp->raise();
        imp_2->raise();
        lineEdit_5->raise();
        layoutWidget = new QWidget(client);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 2, 2));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        side_menu_2 = new QWidget(client);
        side_menu_2->setObjectName(QStringLiteral("side_menu_2"));
        side_menu_2->setGeometry(QRect(30, 130, 181, 831));
        pushButton_16 = new QPushButton(side_menu_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 130, 151, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/equi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon);
        pushButton_16->setIconSize(QSize(50, 50));
        pushButton_16->setCheckable(true);
        pushButton_16->setAutoExclusive(true);
        pushButton_18 = new QPushButton(side_menu_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 80, 151, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon1);
        pushButton_18->setIconSize(QSize(50, 50));
        pushButton_21 = new QPushButton(side_menu_2);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(10, 30, 151, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_21->setIcon(icon2);
        pushButton_21->setIconSize(QSize(45, 45));
        pushButton_21->setCheckable(true);
        pushButton_21->setAutoExclusive(true);
        top_widget = new QWidget(client);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(30, 10, 1831, 101));
        top_widget->setStyleSheet(QLatin1String("#top_widget\n"
"{\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton \n"
"{\n"
"border-radius: 5px\n"
"}\n"
"\n"
"\n"
""));
        pushButton_5 = new QPushButton(top_widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1740, 30, 61, 41));
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(50, 50));
        profil = new QPushButton(top_widget);
        profil->setObjectName(QStringLiteral("profil"));
        profil->setGeometry(QRect(1570, 30, 161, 41));
        profil->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        profil->setIcon(icon3);
        profil->setIconSize(QSize(45, 45));
        profil->setCheckable(true);
        profil->setAutoExclusive(true);
        facture = new QPushButton(top_widget);
        facture->setObjectName(QStringLiteral("facture"));
        facture->setGeometry(QRect(240, 30, 161, 41));
        facture->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/facturee.png"), QSize(), QIcon::Normal, QIcon::Off);
        facture->setIcon(icon4);
        facture->setIconSize(QSize(50, 35));
        facture_2 = new QPushButton(top_widget);
        facture_2->setObjectName(QStringLiteral("facture_2"));
        facture_2->setGeometry(QRect(1410, 30, 151, 41));
        facture_2->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/his.png"), QSize(), QIcon::Normal, QIcon::Off);
        facture_2->setIcon(icon5);
        facture_2->setIconSize(QSize(50, 40));
        facture_3 = new QPushButton(top_widget);
        facture_3->setObjectName(QStringLiteral("facture_3"));
        facture_3->setGeometry(QRect(80, 30, 151, 41));
        facture_3->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        facture_3->setIcon(icon6);
        facture_3->setIconSize(QSize(50, 40));
        pushButton = new QPushButton(top_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 20, 481, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"MV Boli\";\n"
"border-radius:20px;"));
        pushButton_2 = new QPushButton(top_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1140, 20, 61, 51));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));

        retranslateUi(client);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QDialog *client)
    {
        client->setWindowTitle(QApplication::translate("client", "Dialog", Q_NULLPTR));
        form->setText(QString());
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("client", "nom ", Q_NULLPTR));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("client", "pr\303\251nom", Q_NULLPTR));
        lineEdit_8->setText(QString());
        lineEdit_8->setPlaceholderText(QApplication::translate("client", "num CIN", Q_NULLPTR));
        options->setText(QString());
        supprimer->setText(QApplication::translate("client", "supprimer", Q_NULLPTR));
        modifier->setText(QApplication::translate("client", "modifier", Q_NULLPTR));
        ajouter->setText(QApplication::translate("client", "ajouter", Q_NULLPTR));
        recherche_2->setPlaceholderText(QApplication::translate("client", "  recherche", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("client", "ASC", Q_NULLPTR)
         << QApplication::translate("client", "DESC", Q_NULLPTR)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("client", "NOM", Q_NULLPTR)
         << QApplication::translate("client", "PRENOM", Q_NULLPTR)
         << QApplication::translate("client", "CIN", Q_NULLPTR)
        );
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QApplication::translate("client", "numero t\303\251lephone", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("client", "Tab 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("client", "saisir cin", Q_NULLPTR));
        label_3->setText(QApplication::translate("client", "PDF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("client", "Tab 2", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("client", "afficher", Q_NULLPTR));
        imp->setText(QApplication::translate("client", "PDF", Q_NULLPTR));
        imp_2->setText(QApplication::translate("client", "trie", Q_NULLPTR));
        lineEdit_5->clear();
        lineEdit_5->insertItems(0, QStringList()
         << QApplication::translate("client", "tunis", Q_NULLPTR)
         << QApplication::translate("client", "Autre", Q_NULLPTR)
         << QApplication::translate("client", "Ben arouse", Q_NULLPTR)
         << QApplication::translate("client", "Manouba", Q_NULLPTR)
         << QApplication::translate("client", "Ariana", Q_NULLPTR)
        );
        label->setText(QString());
        pushButton_16->setText(QApplication::translate("client", "Equipements", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("client", "         Clients", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("client", "        Vehicules", Q_NULLPTR));
        pushButton_5->setText(QString());
        profil->setText(QApplication::translate("client", "votre copmte", Q_NULLPTR));
        facture->setText(QApplication::translate("client", "       facture", Q_NULLPTR));
        facture_2->setText(QApplication::translate("client", "  historique", Q_NULLPTR));
        facture_3->setText(QApplication::translate("client", "statiqtiques", Q_NULLPTR));
        pushButton->setText(QApplication::translate("client", "gestion des clients", Q_NULLPTR));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
