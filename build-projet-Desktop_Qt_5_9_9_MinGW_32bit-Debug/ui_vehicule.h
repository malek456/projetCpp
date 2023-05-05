/********************************************************************************
** Form generated from reading UI file 'vehicule.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICULE_H
#define UI_VEHICULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vehicule
{
public:
    QWidget *top_widget;
    QPushButton *pushButton_6;
    QPushButton *ajouter_3;
    QPushButton *ajouter_4;
    QPushButton *ajouter_5;
    QPushButton *ajouter_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QWidget *widget_2;
    QLabel *options;
    QTableView *tableView;
    QPushButton *ajouter;
    QPushButton *supprimer;
    QPushButton *modifier;
    QLabel *form;
    QWidget *widget;
    QLineEdit *recherche;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QPushButton *ajouter_2;
    QLineEdit *lineEditm;
    QLineEdit *lineEdit_4;
    QTableView *tableView_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *ajouter_6;
    QTableWidget *tableWidget;
    QWidget *side_menu;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;

    void setupUi(QDialog *vehicule)
    {
        if (vehicule->objectName().isEmpty())
            vehicule->setObjectName(QStringLiteral("vehicule"));
        vehicule->resize(1900, 980);
        vehicule->setStyleSheet(QLatin1String("QClient{\n"
"	background-color: #071e26;\n"
"}\n"
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
"QPushButton:pressed {\n"
"	background-color: rgb(189, 189, 189);\n"
"}\n"
"#side_menu{\n"
"	border-radius: 20px;\n"
"	background-color:rgb(0, 0, 0);\n"
"}\n"
"#top_widget{\n"
"\n"
"	background-color:rgb(0, 0, 0);\n"
"}\n"
"#form{\n"
"	\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
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
"	/* background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"	/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"     background-color:QLinearGra"
                        "dient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"#options{\n"
"background-color:rgb(0, 0, 0);\n"
"border-bottom-right-radius: 50px;\n"
"\n"
"}\n"
"#widget_2 #recherche{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"#widget_2 #ajouter{\n"
" color:rgb(0, 0, 0);\n"
"    background-color: rgb(184, 184, 184);\n"
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
"#widget_2 #modifier{\n"
" color:rgb(0, 0, 0);\n"
"    background-color: rgb(184, 184, 184);\n"
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
"#widget_2 #supprimer{\n"
" color:rgb(0, 0, 0);\n"
"    background-color: rgb(1"
                        "84, 184, 184);\n"
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
"#widget_2 #ajouter:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"#widget_2 #modifier:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"#widget_2 #supprimer:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"#pdf_3{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#side_menu #stat_3{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px "
                        ";\n"
"}\n"
"#widget_2 #widget{\n"
"border-radius: 20px;\n"
"	background-color:rgb(0, 0, 0);\n"
"}\n"
"#widget QLineEdit {\n"
"background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"\n"
""));
        top_widget = new QWidget(vehicule);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(10, 30, 1871, 80));
        pushButton_6 = new QPushButton(top_widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1780, 20, 71, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(45, 45));
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);
        ajouter_3 = new QPushButton(top_widget);
        ajouter_3->setObjectName(QStringLiteral("ajouter_3"));
        ajouter_3->setGeometry(QRect(1440, 20, 151, 41));
        ajouter_3->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_3->setIcon(icon1);
        ajouter_3->setIconSize(QSize(40, 40));
        ajouter_4 = new QPushButton(top_widget);
        ajouter_4->setObjectName(QStringLiteral("ajouter_4"));
        ajouter_4->setGeometry(QRect(1340, 20, 91, 41));
        ajouter_4->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_4->setIcon(icon2);
        ajouter_4->setIconSize(QSize(35, 35));
        ajouter_5 = new QPushButton(top_widget);
        ajouter_5->setObjectName(QStringLiteral("ajouter_5"));
        ajouter_5->setGeometry(QRect(220, 20, 211, 41));
        ajouter_5->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_5->setIcon(icon3);
        ajouter_5->setIconSize(QSize(40, 40));
        ajouter_7 = new QPushButton(top_widget);
        ajouter_7->setObjectName(QStringLiteral("ajouter_7"));
        ajouter_7->setGeometry(QRect(10, 20, 201, 41));
        ajouter_7->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_7->setIcon(icon4);
        ajouter_7->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(top_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 10, 481, 51));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"MV Boli\";\n"
"border-radius:20px;"));
        pushButton = new QPushButton(top_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1160, 10, 71, 51));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton_9 = new QPushButton(top_widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(1610, 20, 161, 41));
        pushButton_9->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon5);
        pushButton_9->setIconSize(QSize(45, 45));
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);
        widget_2 = new QWidget(vehicule);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(220, 120, 1661, 841));
        options = new QLabel(widget_2);
        options->setObjectName(QStringLiteral("options"));
        options->setGeometry(QRect(570, 50, 181, 741));
        tableView = new QTableView(widget_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(810, 150, 791, 281));
        tableView->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        ajouter = new QPushButton(widget_2);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(620, 420, 101, 61));
        supprimer = new QPushButton(widget_2);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(620, 130, 101, 61));
        modifier = new QPushButton(widget_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(620, 230, 101, 61));
        form = new QLabel(widget_2);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(130, 50, 441, 741));
        form->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(820, 40, 771, 91));
        recherche = new QLineEdit(widget);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(10, 10, 391, 31));
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(410, 10, 341, 31));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 50, 741, 31));
        lineEdit_9 = new QLineEdit(widget_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(220, 630, 241, 51));
        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(220, 120, 241, 51));
        lineEdit_8->setStyleSheet(QStringLiteral(""));
        lineEdit_10 = new QLineEdit(widget_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(220, 460, 241, 51));
        lineEdit_11 = new QLineEdit(widget_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(220, 210, 241, 51));
        lineEdit_12 = new QLineEdit(widget_2);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(220, 540, 241, 51));
        lineEdit_13 = new QLineEdit(widget_2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(220, 300, 241, 51));
        lineEdit_14 = new QLineEdit(widget_2);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(220, 380, 241, 51));
        ajouter_2 = new QPushButton(widget_2);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(620, 320, 101, 61));
        ajouter_2->setStyleSheet(QLatin1String("border-radius:30px;\n"
"background-color: rgb(195, 195, 195);"));
        lineEditm = new QLineEdit(widget_2);
        lineEditm->setObjectName(QStringLiteral("lineEditm"));
        lineEditm->setGeometry(QRect(330, 60, 101, 31));
        lineEditm->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(560, 70, 101, 31));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView_2 = new QTableView(widget_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(140, 110, 1031, 441));
        tableView_2->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1661, 841));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(800, 60, 101, 31));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ajouter_6 = new QPushButton(widget_2);
        ajouter_6->setObjectName(QStringLiteral("ajouter_6"));
        ajouter_6->setGeometry(QRect(570, 630, 101, 61));
        ajouter_6->setStyleSheet(QLatin1String("border-radius:30px;\n"
"background-color: rgb(195, 195, 195);"));
        tableWidget = new QTableWidget(widget_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(810, 470, 791, 321));
        ajouter_6->raise();
        lineEdit_2->raise();
        lineEdit_4->raise();
        lineEditm->raise();
        tableView_2->raise();
        label_2->raise();
        options->raise();
        tableView->raise();
        ajouter->raise();
        supprimer->raise();
        modifier->raise();
        form->raise();
        widget->raise();
        lineEdit_9->raise();
        lineEdit_8->raise();
        lineEdit_10->raise();
        lineEdit_11->raise();
        lineEdit_12->raise();
        lineEdit_13->raise();
        lineEdit_14->raise();
        ajouter_2->raise();
        tableWidget->raise();
        side_menu = new QWidget(vehicule);
        side_menu->setObjectName(QStringLiteral("side_menu"));
        side_menu->setGeometry(QRect(10, 120, 191, 841));
        pushButton_7 = new QPushButton(side_menu);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 30, 161, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/rend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        pushButton_7->setIconSize(QSize(50, 50));
        pushButton_7->setCheckable(true);
        pushButton_7->setAutoExclusive(true);
        pushButton_8 = new QPushButton(side_menu);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 130, 161, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/icons/equi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon7);
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        pushButton_5 = new QPushButton(side_menu);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 80, 161, 41));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon8);
        pushButton_5->setIconSize(QSize(50, 50));

        retranslateUi(vehicule);

        QMetaObject::connectSlotsByName(vehicule);
    } // setupUi

    void retranslateUi(QDialog *vehicule)
    {
        vehicule->setWindowTitle(QApplication::translate("vehicule", "Dialog", Q_NULLPTR));
        pushButton_6->setText(QString());
        ajouter_3->setText(QApplication::translate("vehicule", "Statistique", Q_NULLPTR));
        ajouter_4->setText(QApplication::translate("vehicule", "PDF", Q_NULLPTR));
        ajouter_5->setText(QApplication::translate("vehicule", "Controle Technique", Q_NULLPTR));
        ajouter_7->setText(QApplication::translate("vehicule", "importation image", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("vehicule", "gestion des v\303\251hicules", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_9->setText(QApplication::translate("vehicule", "votre compte", Q_NULLPTR));
        options->setText(QString());
        ajouter->setText(QApplication::translate("vehicule", "Supprimer", Q_NULLPTR));
        supprimer->setText(QApplication::translate("vehicule", "Ajouter", Q_NULLPTR));
        modifier->setText(QApplication::translate("vehicule", "Afficher", Q_NULLPTR));
        form->setText(QString());
        recherche->setPlaceholderText(QApplication::translate("vehicule", "  recherche", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("vehicule", "Par D\303\251faut", Q_NULLPTR)
         << QApplication::translate("vehicule", "Marque", Q_NULLPTR)
         << QApplication::translate("vehicule", "Mod\303\251le", Q_NULLPTR)
         << QApplication::translate("vehicule", "Type Carburant", Q_NULLPTR)
        );
        lineEdit_9->setText(QString());
        lineEdit_9->setPlaceholderText(QApplication::translate("vehicule", "Client", Q_NULLPTR));
        lineEdit_8->setText(QString());
        lineEdit_8->setPlaceholderText(QApplication::translate("vehicule", "Matricule", Q_NULLPTR));
        lineEdit_10->setText(QString());
        lineEdit_10->setPlaceholderText(QApplication::translate("vehicule", "Ann\303\251e Fabrication", Q_NULLPTR));
        lineEdit_11->setText(QString());
        lineEdit_11->setPlaceholderText(QApplication::translate("vehicule", "Marque", Q_NULLPTR));
        lineEdit_12->setText(QString());
        lineEdit_12->setPlaceholderText(QApplication::translate("vehicule", "Type Carburant", Q_NULLPTR));
        lineEdit_13->setText(QString());
        lineEdit_13->setPlaceholderText(QApplication::translate("vehicule", "Mod\303\251le", Q_NULLPTR));
        lineEdit_14->setText(QString());
        lineEdit_14->setPlaceholderText(QApplication::translate("vehicule", "Description", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("vehicule", "Modifier", Q_NULLPTR));
        lineEditm->setPlaceholderText(QApplication::translate("vehicule", "TailleP", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("vehicule", "PoidV", Q_NULLPTR));
        label_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("vehicule", "LongeurV", Q_NULLPTR));
        ajouter_6->setText(QApplication::translate("vehicule", "Modifier", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("vehicule", "Rendez-Vous", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("vehicule", "Equipements", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("vehicule", "         Clients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vehicule: public Ui_vehicule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICULE_H
