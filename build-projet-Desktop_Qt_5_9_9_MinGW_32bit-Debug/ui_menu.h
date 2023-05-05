/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *menu_2;
    QPushButton *pushButton_veh;
    QPushButton *pushButton_rdv;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;
    QPushButton *pushButton_emp;
    QPushButton *pushButton_cl;
    QPushButton *pushButton_eq;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(1900, 980);
        menu->setStyleSheet(QLatin1String("QDialog{\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0  #435cff, stop: 1 #00007f);*/\n"
"background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"/*background-color:QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0#8a76f9 , stop: 1 #4bfceb);*/\n"
"}\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"background-color: #ffffff;\n"
"   /* background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);*/\n"
"\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 50px;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
" /*   background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);*/\n"
"	backgro"
                        "und-color: rgb(179, 179, 179);\n"
"}\n"
"#menu #menu_2{\n"
"border: 2px solid black;\n"
"     /*background-color: #ffa02f;*/\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"     padding: 1px;\n"
"     border-radius: 50px;\n"
"     opacity: 100;\n"
"\n"
"}\n"
"#menu QLabel{\n"
"	font: 16pt \"Segoe Print\";\n"
"\n"
"}"));
        menu_2 = new QLabel(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_2->setGeometry(QRect(490, 110, 921, 711));
        pushButton_veh = new QPushButton(menu);
        pushButton_veh->setObjectName(QStringLiteral("pushButton_veh"));
        pushButton_veh->setGeometry(QRect(830, 180, 241, 211));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/vehi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_veh->setIcon(icon);
        pushButton_veh->setIconSize(QSize(200, 200));
        pushButton_rdv = new QPushButton(menu);
        pushButton_rdv->setObjectName(QStringLiteral("pushButton_rdv"));
        pushButton_rdv->setGeometry(QRect(980, 480, 231, 221));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/rend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_rdv->setIcon(icon1);
        pushButton_rdv->setIconSize(QSize(200, 200));
        label_2 = new QLabel(menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 410, 56, 16));
        label_3 = new QLabel(menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 400, 111, 31));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(880, 400, 141, 31));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1170, 400, 191, 31));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(menu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1020, 710, 201, 31));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(menu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(740, 700, 201, 51));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1901, 981));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        pushButton_emp = new QPushButton(menu);
        pushButton_emp->setObjectName(QStringLiteral("pushButton_emp"));
        pushButton_emp->setGeometry(QRect(680, 480, 241, 221));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_emp->setIcon(icon2);
        pushButton_emp->setIconSize(QSize(200, 200));
        pushButton_cl = new QPushButton(menu);
        pushButton_cl->setObjectName(QStringLiteral("pushButton_cl"));
        pushButton_cl->setGeometry(QRect(520, 180, 241, 211));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/cli.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cl->setIcon(icon3);
        pushButton_cl->setIconSize(QSize(200, 200));
        pushButton_eq = new QPushButton(menu);
        pushButton_eq->setObjectName(QStringLiteral("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(1130, 180, 241, 211));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/equi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eq->setIcon(icon4);
        pushButton_eq->setIconSize(QSize(200, 200));
        label->raise();
        menu_2->raise();
        pushButton_veh->raise();
        pushButton_rdv->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_7->raise();
        label_8->raise();
        pushButton_emp->raise();
        pushButton_cl->raise();
        pushButton_eq->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", Q_NULLPTR));
        menu_2->setText(QString());
        pushButton_veh->setText(QString());
        pushButton_rdv->setText(QString());
        label_2->setText(QApplication::translate("menu", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("menu", "Clients", Q_NULLPTR));
        label_4->setText(QApplication::translate("menu", "V\303\251hicules", Q_NULLPTR));
        label_5->setText(QApplication::translate("menu", "Equipements", Q_NULLPTR));
        label_7->setText(QApplication::translate("menu", "Rendez-Vous", Q_NULLPTR));
        label_8->setText(QApplication::translate("menu", "Employ\303\251s", Q_NULLPTR));
        label->setText(QString());
        pushButton_emp->setText(QString());
        pushButton_cl->setText(QString());
        pushButton_eq->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
