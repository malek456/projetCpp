/********************************************************************************
** Form generated from reading UI file 'emp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMP_H
#define UI_EMP_H

#include <QtCharts>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emp
{
public:
    QWidget *top_widget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_16;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QTableView *tableView;
    QLabel *form;
    QLabel *options;
    QPushButton *supprimer;
    QPushButton *modifier;
    QLineEdit *lineEdit_nom;
    QPushButton *ajouter;
    QLineEdit *lineEdit_pre;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_cin;
    QLineEdit *lineEdit_mail;
    QLineEdit *lineEdit_add;
    QLineEdit *lineEdit_mdp;
    QWidget *widget_2;
    QComboBox *comboBox_search_by;
    QComboBox *comboBox_order_sort;
    QLineEdit *recherche_2;
    QComboBox *comboBox_sort_by;
    QLabel *label_2;
    QPushButton *valider;
    QPushButton *annuler;
    QComboBox *lineEdit_fct;
    QChartView *widget_3;
    QPushButton *refresh;
    QWidget *side_menu;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;

    void setupUi(QDialog *emp)
    {
        if (emp->objectName().isEmpty())
            emp->setObjectName(QStringLiteral("emp"));
        emp->resize(1900, 980);
        emp->setStyleSheet(QLatin1String("\n"
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
"#side_menu{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"#top_widget{\n"
"\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"#form{\n"
"	\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"border-top-left-radius: 50px;\n"
"}\n"
"\n"
"#widget QLineEdit{\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgb(0,0,0);\n"
"padding-bottom:7px\n"
"\n"
"}\n"
"#widget{\n"
"	\n"
"	/* background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"	/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"    background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"#options{\n"
"background-color:  rgb(0,0,0);\n"
""
                        "border-bottom-right-radius: 50px;\n"
"\n"
"}\n"
"#widget #recherche_2{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"\n"
"#ajouter{\n"
" color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
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
" color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
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
"  color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
""
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
"}\n"
"\n"
"#top_widget #label\n"
"{\n"
"	\n"
"	font: 75 14pt \"Segoe Print\";\n"
"}\n"
"\n"
"#pdf{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#stat{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#widget_2 QLineEdit {\n"
"		background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
""
                        "\n"
"}\n"
"#widget_2{\n"
"	\n"
"	border-radius: 20px;\n"
"	background-color:  rgb(0,0,0);\n"
"\n"
"}\n"
"QPushButton{\n"
"	background-color: rgb(204, 204, 204);\n"
"}\n"
"\n"
""));
        top_widget = new QWidget(emp);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(10, 10, 1851, 80));
        pushButton_5 = new QPushButton(top_widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1790, 20, 51, 41));
        pushButton_5->setStyleSheet(QLatin1String("border-radius: 160px;\n"
"background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/retour2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(55, 40));
        pushButton_8 = new QPushButton(top_widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1620, 20, 161, 41));
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(45, 45));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        pushButton_16 = new QPushButton(top_widget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(1360, 20, 221, 41));
        pushButton_16->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/lockdoor.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon2);
        pushButton_16->setIconSize(QSize(40, 40));
        pushButton_16->setCheckable(true);
        pushButton_16->setAutoExclusive(true);
        pushButton = new QPushButton(top_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 17, 481, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"MV Boli\";\n"
"border-radius:20px;"));
        pushButton_2 = new QPushButton(top_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1040, 17, 71, 51));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        widget = new QWidget(emp);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 110, 1651, 831));
        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(760, 130, 831, 361));
        tableView->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        form = new QLabel(widget);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(30, 30, 551, 711));
        form->setStyleSheet(QStringLiteral(""));
        options = new QLabel(widget);
        options->setObjectName(QStringLiteral("options"));
        options->setGeometry(QRect(580, 30, 131, 711));
        supprimer = new QPushButton(widget);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(600, 340, 91, 61));
        modifier = new QPushButton(widget);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(600, 240, 91, 61));
        lineEdit_nom = new QLineEdit(widget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(60, 110, 201, 51));
        ajouter = new QPushButton(widget);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(600, 140, 91, 61));
        lineEdit_pre = new QLineEdit(widget);
        lineEdit_pre->setObjectName(QStringLiteral("lineEdit_pre"));
        lineEdit_pre->setGeometry(QRect(60, 200, 201, 51));
        lineEdit_num = new QLineEdit(widget);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(60, 300, 201, 51));
        lineEdit_cin = new QLineEdit(widget);
        lineEdit_cin->setObjectName(QStringLiteral("lineEdit_cin"));
        lineEdit_cin->setGeometry(QRect(60, 390, 201, 51));
        lineEdit_mail = new QLineEdit(widget);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(330, 200, 201, 51));
        lineEdit_add = new QLineEdit(widget);
        lineEdit_add->setObjectName(QStringLiteral("lineEdit_add"));
        lineEdit_add->setGeometry(QRect(330, 110, 201, 51));
        lineEdit_mdp = new QLineEdit(widget);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setGeometry(QRect(330, 300, 201, 51));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(760, 30, 831, 91));
        comboBox_search_by = new QComboBox(widget_2);
        comboBox_search_by->setObjectName(QStringLiteral("comboBox_search_by"));
        comboBox_search_by->setGeometry(QRect(410, 50, 381, 31));
        comboBox_search_by->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        comboBox_order_sort = new QComboBox(widget_2);
        comboBox_order_sort->setObjectName(QStringLiteral("comboBox_order_sort"));
        comboBox_order_sort->setGeometry(QRect(20, 10, 371, 31));
        comboBox_order_sort->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        recherche_2 = new QLineEdit(widget_2);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(20, 50, 371, 31));
        comboBox_sort_by = new QComboBox(widget_2);
        comboBox_sort_by->setObjectName(QStringLiteral("comboBox_sort_by"));
        comboBox_sort_by->setGeometry(QRect(410, 10, 381, 31));
        comboBox_sort_by->setStyleSheet(QStringLiteral("font: 12pt \"MV Boli\";"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-5, -5, 1661, 841));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        valider = new QPushButton(widget);
        valider->setObjectName(QStringLiteral("valider"));
        valider->setGeometry(QRect(350, 510, 93, 28));
        valider->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        annuler = new QPushButton(widget);
        annuler->setObjectName(QStringLiteral("annuler"));
        annuler->setGeometry(QRect(130, 510, 93, 28));
        annuler->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));
        lineEdit_fct = new QComboBox(widget);
        lineEdit_fct->setObjectName(QStringLiteral("lineEdit_fct"));
        lineEdit_fct->setGeometry(QRect(330, 410, 191, 31));
        widget_3 = new QChartView(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(1230, 500, 361, 261));
        widget_3->setStyleSheet(QLatin1String("\n"
"\n"
"#refresh:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}"));
        refresh = new QPushButton(widget);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(1180, 500, 41, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon3);
        refresh->setIconSize(QSize(30, 30));
        label_2->raise();
        tableView->raise();
        form->raise();
        options->raise();
        supprimer->raise();
        modifier->raise();
        lineEdit_nom->raise();
        ajouter->raise();
        lineEdit_pre->raise();
        lineEdit_num->raise();
        lineEdit_cin->raise();
        lineEdit_mail->raise();
        lineEdit_add->raise();
        lineEdit_mdp->raise();
        widget_2->raise();
        valider->raise();
        annuler->raise();
        lineEdit_fct->raise();
        widget_3->raise();
        refresh->raise();
        side_menu = new QWidget(emp);
        side_menu->setObjectName(QStringLiteral("side_menu"));
        side_menu->setGeometry(QRect(10, 110, 181, 841));
        pushButton_9 = new QPushButton(side_menu);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 80, 161, 41));
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon4);
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_10 = new QPushButton(side_menu);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 30, 161, 41));
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon5);
        pushButton_10->setIconSize(QSize(45, 45));
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);
        pushButton_15 = new QPushButton(side_menu);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 130, 161, 41));
        pushButton_15->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/rend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(50, 50));
        pushButton_15->setCheckable(true);
        pushButton_15->setAutoExclusive(true);

        retranslateUi(emp);

        QMetaObject::connectSlotsByName(emp);
    } // setupUi

    void retranslateUi(QDialog *emp)
    {
        emp->setWindowTitle(QApplication::translate("emp", "Dialog", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_8->setText(QApplication::translate("emp", "votre compte", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("emp", "syst\303\251me verouillage", Q_NULLPTR));
        pushButton->setText(QApplication::translate("emp", "gestion des employ\303\251s", Q_NULLPTR));
        pushButton_2->setText(QString());
        form->setText(QString());
        options->setText(QString());
        supprimer->setText(QApplication::translate("emp", "supprimer", Q_NULLPTR));
        modifier->setText(QApplication::translate("emp", "modifier", Q_NULLPTR));
        lineEdit_nom->setText(QString());
        lineEdit_nom->setPlaceholderText(QApplication::translate("emp", "  nom", Q_NULLPTR));
        ajouter->setText(QApplication::translate("emp", "ajouter", Q_NULLPTR));
        lineEdit_pre->setText(QString());
        lineEdit_pre->setPlaceholderText(QApplication::translate("emp", "  pr\303\251nom", Q_NULLPTR));
        lineEdit_num->setText(QString());
        lineEdit_num->setPlaceholderText(QApplication::translate("emp", "  num\303\251ro de t\303\251l\303\250phone", Q_NULLPTR));
        lineEdit_cin->setText(QString());
        lineEdit_cin->setPlaceholderText(QApplication::translate("emp", "  CIN", Q_NULLPTR));
        lineEdit_mail->setText(QString());
        lineEdit_mail->setPlaceholderText(QApplication::translate("emp", "  adresse e-mail", Q_NULLPTR));
        lineEdit_add->setText(QString());
        lineEdit_add->setPlaceholderText(QApplication::translate("emp", "  adresse", Q_NULLPTR));
        lineEdit_mdp->setText(QString());
        lineEdit_mdp->setPlaceholderText(QApplication::translate("emp", " mot de passe", Q_NULLPTR));
        comboBox_search_by->clear();
        comboBox_search_by->insertItems(0, QStringList()
         << QApplication::translate("emp", "chercher par:", Q_NULLPTR)
         << QApplication::translate("emp", "nom", Q_NULLPTR)
         << QApplication::translate("emp", "prenom", Q_NULLPTR)
        );
        comboBox_order_sort->clear();
        comboBox_order_sort->insertItems(0, QStringList()
         << QApplication::translate("emp", "ordre de tri:", Q_NULLPTR)
         << QApplication::translate("emp", "croissant", Q_NULLPTR)
         << QApplication::translate("emp", "d\303\251croissant", Q_NULLPTR)
        );
        recherche_2->setPlaceholderText(QApplication::translate("emp", "  recherche", Q_NULLPTR));
        comboBox_sort_by->clear();
        comboBox_sort_by->insertItems(0, QStringList()
         << QApplication::translate("emp", "trier par:", Q_NULLPTR)
         << QApplication::translate("emp", "nom", Q_NULLPTR)
         << QApplication::translate("emp", "prenom", Q_NULLPTR)
        );
        label_2->setText(QString());
        valider->setText(QApplication::translate("emp", "valider", Q_NULLPTR));
        annuler->setText(QApplication::translate("emp", "annuler", Q_NULLPTR));
        lineEdit_fct->clear();
        lineEdit_fct->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("emp", "Inspecteur", Q_NULLPTR)
         << QApplication::translate("emp", "Technicien", Q_NULLPTR)
         << QApplication::translate("emp", "Receptionniste", Q_NULLPTR)
         << QApplication::translate("emp", "PersonnelAdmin", Q_NULLPTR)
        );
        refresh->setText(QString());
        pushButton_9->setText(QApplication::translate("emp", "         Clients", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("emp", "        Vehicules", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("emp", "  Rendez-Vous", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class emp: public Ui_emp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMP_H
