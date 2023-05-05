/********************************************************************************
** Form generated from reading UI file 'rendv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDV_H
#define UI_RENDV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
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

class Ui_Rendv
{
public:
    QWidget *widget_2;
    QLabel *form_2;
    QLabel *options_2;
    QPushButton *ajouter;
    QPushButton *modifier;
    QPushButton *supprimer;
    QLineEdit *lineEdit_3;
    QTableView *tableView_2;
    QWidget *widget;
    QLineEdit *recherche_2;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QPushButton *imp_2;
    QPushButton *imp;
    QDateEdit *dateEdit;
    QComboBox *comboBox_3;
    QPushButton *imp_3;
    QLineEdit *lineEdit_6;
    QWidget *widget_3;
    QCalendarWidget *calendarWidget;
    QTableView *tableView_3;
    QWidget *top_widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pb_excel;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QWidget *side_menu;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;

    void setupUi(QDialog *Rendv)
    {
        if (Rendv->objectName().isEmpty())
            Rendv->setObjectName(QStringLiteral("Rendv"));
        Rendv->resize(1900, 980);
        Rendv->setStyleSheet(QLatin1String("QClient{\n"
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
"	background-color: rgb(0,0,0);\n"
"}\n"
"#top_widget{\n"
"\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"#form_2{\n"
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
"   background-color:QLinearGradi"
                        "ent( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"#options_2{\n"
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
" color: rgb(0,0,0);\n"
"    background-color: rgb(181, 181, 181);\n"
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
"color: rgb(0,0,0);\n"
"    background-color: rgb(181, 181, 181);\n"
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
" color: rgb(0,0,0);\n"
"    background-color: rgb(181, 181, 181);\n"
"    borde"
                        "r-width: 1px;\n"
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
"#pdf_3{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#stat_3{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#widget QLineEdit{\n"
"background-color: rgb(204, 204, 20"
                        "4);\n"
"border:1px solid rgb(0,0,0);\n"
"\n"
"}\n"
"#widget\n"
"{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
""));
        widget_2 = new QWidget(Rendv);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(220, 120, 1641, 831));
        form_2 = new QLabel(widget_2);
        form_2->setObjectName(QStringLiteral("form_2"));
        form_2->setGeometry(QRect(60, 100, 371, 681));
        form_2->setStyleSheet(QStringLiteral(""));
        options_2 = new QLabel(widget_2);
        options_2->setObjectName(QStringLiteral("options_2"));
        options_2->setGeometry(QRect(430, 100, 161, 681));
        ajouter = new QPushButton(widget_2);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(470, 150, 91, 61));
        modifier = new QPushButton(widget_2);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(470, 240, 91, 61));
        supprimer = new QPushButton(widget_2);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(470, 330, 91, 61));
        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 250, 251, 51));
        tableView_2 = new QTableView(widget_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(640, 140, 981, 381));
        tableView_2->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(650, 40, 961, 91));
        recherche_2 = new QLineEdit(widget);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(10, 10, 921, 31));
        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 50, 461, 31));
        comboBox_5 = new QComboBox(widget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(480, 50, 451, 31));
        lineEdit_5 = new QLineEdit(widget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 340, 261, 51));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1641, 841));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 160, 251, 51));
        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 590, 241, 31));
        comboBox_2->setDuplicatesEnabled(false);
        comboBox_2->setFrame(true);
        imp_2 = new QPushButton(widget_2);
        imp_2->setObjectName(QStringLiteral("imp_2"));
        imp_2->setGeometry(QRect(470, 540, 91, 61));
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
        imp = new QPushButton(widget_2);
        imp->setObjectName(QStringLiteral("imp"));
        imp->setGeometry(QRect(470, 450, 91, 61));
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
        dateEdit = new QDateEdit(widget_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(110, 520, 241, 31));
        dateEdit->setTimeSpec(Qt::LocalTime);
        comboBox_3 = new QComboBox(widget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(110, 670, 231, 41));
        comboBox_3->setDuplicatesEnabled(false);
        comboBox_3->setFrame(true);
        imp_3 = new QPushButton(widget_2);
        imp_3->setObjectName(QStringLiteral("imp_3"));
        imp_3->setGeometry(QRect(470, 630, 91, 61));
        imp_3->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;"));
        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 420, 261, 51));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(640, 530, 391, 281));
        calendarWidget = new QCalendarWidget(widget_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(1060, 530, 561, 281));
        tableView_3 = new QTableView(widget_2);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(100, 50, 1071, 661));
        tableView_3->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        tableView_3->raise();
        label->raise();
        form_2->raise();
        options_2->raise();
        ajouter->raise();
        modifier->raise();
        supprimer->raise();
        lineEdit_3->raise();
        tableView_2->raise();
        widget->raise();
        lineEdit_5->raise();
        lineEdit_2->raise();
        comboBox_2->raise();
        imp_2->raise();
        imp->raise();
        dateEdit->raise();
        comboBox_3->raise();
        imp_3->raise();
        lineEdit_6->raise();
        widget_3->raise();
        calendarWidget->raise();
        top_widget = new QWidget(Rendv);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(10, 20, 1851, 80));
        pushButton = new QPushButton(top_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1780, 20, 51, 41));
        pushButton->setStyleSheet(QStringLiteral("border-radius: 160px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/retour2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(55, 40));
        pushButton_2 = new QPushButton(top_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1350, 20, 241, 41));
        pushButton_2->setStyleSheet(QStringLiteral("font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/etat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        pb_excel = new QPushButton(top_widget);
        pb_excel->setObjectName(QStringLiteral("pb_excel"));
        pb_excel->setGeometry(QRect(10, 20, 141, 41));
        pb_excel->setStyleSheet(QLatin1String("\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_excel->setIcon(icon2);
        pb_excel->setIconSize(QSize(50, 50));
        pushButton_3 = new QPushButton(top_widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(640, 10, 461, 51));
        pushButton_3->setStyleSheet(QLatin1String("font: 16pt \"MV Boli\";\n"
"border-radius:20px;"));
        pushButton_4 = new QPushButton(top_widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1060, 10, 61, 51));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/rend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(50, 50));
        pushButton_8 = new QPushButton(top_widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1610, 20, 161, 41));
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: italic 14pt \"Monotype Corsiva\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon4);
        pushButton_8->setIconSize(QSize(45, 45));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        side_menu = new QWidget(Rendv);
        side_menu->setObjectName(QStringLiteral("side_menu"));
        side_menu->setGeometry(QRect(10, 120, 191, 831));
        pushButton_16 = new QPushButton(side_menu);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 130, 161, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/equi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_16->setIcon(icon5);
        pushButton_16->setIconSize(QSize(50, 50));
        pushButton_16->setCheckable(true);
        pushButton_16->setAutoExclusive(true);
        pushButton_18 = new QPushButton(side_menu);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 80, 161, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_18->setIcon(icon6);
        pushButton_18->setIconSize(QSize(50, 50));
        pushButton_19 = new QPushButton(side_menu);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(10, 30, 161, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_19->setIcon(icon7);
        pushButton_19->setIconSize(QSize(45, 45));
        pushButton_19->setCheckable(true);
        pushButton_19->setAutoExclusive(true);
        top_widget->raise();
        widget_2->raise();
        side_menu->raise();

        retranslateUi(Rendv);

        QMetaObject::connectSlotsByName(Rendv);
    } // setupUi

    void retranslateUi(QDialog *Rendv)
    {
        Rendv->setWindowTitle(QApplication::translate("Rendv", "Dialog", Q_NULLPTR));
        form_2->setText(QString());
        options_2->setText(QString());
        ajouter->setText(QApplication::translate("Rendv", "ajouter", Q_NULLPTR));
        modifier->setText(QApplication::translate("Rendv", "modifier", Q_NULLPTR));
        supprimer->setText(QApplication::translate("Rendv", "supprimer", Q_NULLPTR));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("Rendv", "Identifiant de l'Employ\303\251", Q_NULLPTR));
        recherche_2->setPlaceholderText(QApplication::translate("Rendv", "  recherche", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Rendv", "ID_RDV", Q_NULLPTR)
         << QApplication::translate("Rendv", "DATE_RDV", Q_NULLPTR)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Rendv", "ASC", Q_NULLPTR)
         << QApplication::translate("Rendv", "DESC", Q_NULLPTR)
        );
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QApplication::translate("Rendv", "Identifiant du Client", Q_NULLPTR));
        label->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Rendv", "Identifiant du Rendez-vous", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Rendv", "07:10", Q_NULLPTR)
         << QApplication::translate("Rendv", "09:00", Q_NULLPTR)
         << QApplication::translate("Rendv", "11:00", Q_NULLPTR)
         << QApplication::translate("Rendv", "13:00", Q_NULLPTR)
         << QApplication::translate("Rendv", "14:00", Q_NULLPTR)
         << QApplication::translate("Rendv", "15:00", Q_NULLPTR)
        );
        imp_2->setText(QApplication::translate("Rendv", "trie", Q_NULLPTR));
        imp->setText(QApplication::translate("Rendv", "PDF", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Rendv", "CONTROLER VOS LUMI\303\210RES", Q_NULLPTR)
         << QApplication::translate("Rendv", "CONTROLER VOTRE VITRAGE", Q_NULLPTR)
         << QApplication::translate("Rendv", "CONTROLER VOTRE MOTEUR", Q_NULLPTR)
         << QApplication::translate("Rendv", "CONTROLER VOTRE FREINAGE", Q_NULLPTR)
         << QApplication::translate("Rendv", "CONTROLER VOTRE SUSPENSION ET VOS PNEUS", Q_NULLPTR)
        );
        imp_3->setText(QApplication::translate("Rendv", "Graphe", Q_NULLPTR));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("Rendv", "Email@gmail.com", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Rendv", "Etat du Rendez-vous", Q_NULLPTR));
        pb_excel->setText(QApplication::translate("Rendv", "    Excel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Rendv", "gestion des rendez-vous", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_8->setText(QApplication::translate("Rendv", "votre compte", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("Rendv", "Equipements", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("Rendv", "         Clients", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("Rendv", "        Vehicules", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Rendv: public Ui_Rendv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDV_H
