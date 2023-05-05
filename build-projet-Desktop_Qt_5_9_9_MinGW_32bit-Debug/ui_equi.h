/********************************************************************************
** Form generated from reading UI file 'equi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUI_H
#define UI_EQUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equi
{
public:
    QWidget *widget_2;
    QLabel *form;
    QLabel *options;
    QLineEdit *lineEdit_2;
    QPushButton *modifier;
    QPushButton *supprimer;
    QPushButton *ajouter;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QWidget *widget;
    QLineEdit *recherche_2;
    QComboBox *order_sort;
    QComboBox *sort_by;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QWidget *widget_3;
    QDateEdit *lineEdit_3;
    QDateEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *lineEdit_5;
    QTableView *tableView_2;
    QPushButton *pushButton_16;
    QLabel *label_4;
    QWidget *top_widget;
    QPushButton *pushButton_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QWidget *side_menu;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;

    void setupUi(QDialog *Equi)
    {
        if (Equi->objectName().isEmpty())
            Equi->setObjectName(QStringLiteral("Equi"));
        Equi->resize(1900, 980);
        Equi->setStyleSheet(QLatin1String("QClient{\n"
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
"QPushButton:pressed{\n"
"	\n"
"	\n"
"	background-color: rgb(199, 199, 199);\n"
"}\n"
"\n"
"#side_menu{\n"
"	border-radius: 20px;\n"
"	background-color:rgb(0,0,0);\n"
"}\n"
"#top_widget{\n"
"\n"
"	background-color: rgb(0,0,0);;\n"
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
"   background-colo"
                        "r:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"#options{\n"
"background-color: rgb(0,0,0);\n"
"border-bottom-right-radius: 50px;\n"
"\n"
"}\n"
"#widget_2 #recherche_2{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"\n"
"#ajouter{\n"
"    color: rgb(0,0,0);\n"
"    background-color:rgb(181, 181, 181);\n"
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
"    background-color:rgb(181, 181, 181);\n"
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
"color: rgb(0,0,0);\n"
"    background-color:rgb(181, 181, 181);\n"
""
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
" #pdf_2{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"\n"
"#stat_2{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#widget QLineEdit{\n"
"	background-co"
                        "lor: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"\n"
"}\n"
"#widget{\n"
"border-radius: 20px;\n"
"	background-color: rgb(0,0,0);\n"
"}"));
        widget_2 = new QWidget(Equi);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(210, 120, 1661, 821));
        form = new QLabel(widget_2);
        form->setObjectName(QStringLiteral("form"));
        form->setGeometry(QRect(120, 110, 371, 641));
        form->setStyleSheet(QStringLiteral(""));
        options = new QLabel(widget_2);
        options->setObjectName(QStringLiteral("options"));
        options->setGeometry(QRect(490, 110, 181, 641));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 240, 211, 51));
        modifier = new QPushButton(widget_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(540, 370, 91, 61));
        supprimer = new QPushButton(widget_2);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(540, 470, 91, 61));
        ajouter = new QPushButton(widget_2);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(540, 270, 91, 61));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 150, 211, 51));
        tableView = new QTableView(widget_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(780, 130, 791, 331));
        tableView->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(780, 30, 791, 91));
        recherche_2 = new QLineEdit(widget);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(20, 10, 751, 31));
        order_sort = new QComboBox(widget);
        order_sort->setObjectName(QStringLiteral("order_sort"));
        order_sort->setGeometry(QRect(20, 50, 371, 31));
        sort_by = new QComboBox(widget);
        sort_by->setObjectName(QStringLiteral("sort_by"));
        sort_by->setGeometry(QRect(410, 50, 361, 31));
        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 620, 211, 51));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-5, -5, 1671, 831));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(830, 470, 331, 261));
        lineEdit_3 = new QDateEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 360, 221, 41));
        lineEdit_3->setWrapping(false);
        lineEdit_4 = new QDateEdit(widget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 470, 221, 41));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 320, 221, 41));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 430, 221, 41));
        lineEdit_5 = new QComboBox(widget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 540, 221, 51));
        tableView_2 = new QTableView(widget_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(295, 50, 1081, 701));
        tableView_2->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        pushButton_16 = new QPushButton(widget_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(780, 470, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon);
        pushButton_16->setIconSize(QSize(30, 30));
        pushButton_16->setCheckable(true);
        pushButton_16->setAutoExclusive(true);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1170, 470, 401, 261));
        tableView_2->raise();
        label->raise();
        form->raise();
        options->raise();
        lineEdit_2->raise();
        modifier->raise();
        supprimer->raise();
        ajouter->raise();
        lineEdit->raise();
        tableView->raise();
        widget->raise();
        lineEdit_6->raise();
        widget_3->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_5->raise();
        pushButton_16->raise();
        label_4->raise();
        top_widget = new QWidget(Equi);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(10, 20, 1861, 80));
        pushButton_8 = new QPushButton(top_widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1160, 10, 71, 51));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/equi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        pushButton = new QPushButton(top_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1800, 20, 51, 41));
        pushButton->setStyleSheet(QStringLiteral("border-radius: 160px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/retour2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(55, 40));
        pushButton_2 = new QPushButton(top_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(740, 10, 481, 51));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"MV Boli\";\n"
"border-radius:20px;"));
        pushButton_11 = new QPushButton(top_widget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(1630, 20, 161, 41));
        pushButton_11->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon3);
        pushButton_11->setIconSize(QSize(45, 45));
        pushButton_11->setCheckable(true);
        pushButton_11->setAutoExclusive(true);
        pushButton->raise();
        pushButton_2->raise();
        pushButton_8->raise();
        pushButton_11->raise();
        side_menu = new QWidget(Equi);
        side_menu->setObjectName(QStringLiteral("side_menu"));
        side_menu->setGeometry(QRect(10, 120, 181, 821));
        pushButton_9 = new QPushButton(side_menu);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 80, 161, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon4);
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_10 = new QPushButton(side_menu);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 30, 161, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon5);
        pushButton_10->setIconSize(QSize(45, 45));
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);
        pushButton_15 = new QPushButton(side_menu);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 130, 161, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/rend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon6);
        pushButton_15->setIconSize(QSize(50, 50));
        pushButton_15->setCheckable(true);
        pushButton_15->setAutoExclusive(true);

        retranslateUi(Equi);

        QMetaObject::connectSlotsByName(Equi);
    } // setupUi

    void retranslateUi(QDialog *Equi)
    {
        Equi->setWindowTitle(QApplication::translate("Equi", "Dialog", Q_NULLPTR));
        form->setText(QString());
        options->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Equi", "nom equipemet", Q_NULLPTR));
        modifier->setText(QApplication::translate("Equi", "modifier", Q_NULLPTR));
        supprimer->setText(QApplication::translate("Equi", "supprimer", Q_NULLPTR));
        ajouter->setText(QApplication::translate("Equi", "ajouter", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Equi", "id equipement", Q_NULLPTR));
        recherche_2->setPlaceholderText(QApplication::translate("Equi", "  recherche", Q_NULLPTR));
        order_sort->clear();
        order_sort->insertItems(0, QStringList()
         << QApplication::translate("Equi", "trier par ordre :", Q_NULLPTR)
         << QApplication::translate("Equi", "croissant", Q_NULLPTR)
         << QApplication::translate("Equi", "d\303\251croissant", Q_NULLPTR)
        );
        sort_by->clear();
        sort_by->insertItems(0, QStringList()
         << QApplication::translate("Equi", "trier par:", Q_NULLPTR)
         << QApplication::translate("Equi", "date_fin_garantie", Q_NULLPTR)
         << QApplication::translate("Equi", "date_achat", Q_NULLPTR)
        );
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("Equi", "type", Q_NULLPTR));
        label->setText(QString());
        lineEdit_3->setSpecialValueText(QApplication::translate("Equi", "Date d'achat", Q_NULLPTR));
        label_2->setText(QApplication::translate("Equi", "Date d'achat", Q_NULLPTR));
        label_3->setText(QApplication::translate("Equi", "Date de fin de Garantie", Q_NULLPTR));
        lineEdit_5->clear();
        lineEdit_5->insertItems(0, QStringList()
         << QApplication::translate("Equi", "Parfait", Q_NULLPTR)
         << QApplication::translate("Equi", "Moyen", Q_NULLPTR)
         << QApplication::translate("Equi", "Mauvais", Q_NULLPTR)
         << QApplication::translate("Equi", "Perdu", Q_NULLPTR)
         << QApplication::translate("Equi", "Critique", Q_NULLPTR)
        );
        pushButton_16->setText(QString());
        label_4->setText(QString());
        pushButton_8->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Equi", "gestion des equipements", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("Equi", "votre compte", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Equi", "         Clients", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Equi", "        Vehicules", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("Equi", "  Rendez-Vous", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Equi: public Ui_Equi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUI_H
