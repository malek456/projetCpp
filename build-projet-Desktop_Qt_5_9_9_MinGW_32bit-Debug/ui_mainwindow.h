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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_3;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_mdp;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_9;
    QPushButton *icone;
    QCheckBox *checkBox;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1900, 980);
        MainWindow->setStyleSheet(QStringLiteral("background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(720, 170, 431, 591));
        widget_3->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background-color: #0f0f0f;\n"
"	color: #fff;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	font-weight: bold;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"#icone{\n"
"     background-color: #ffffff;\n"
"	color: #fff;\n"
"	font-weight: bold;\n"
"	border: 1px solid #d10000;  \n"
"	border-radius: 2px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"QPushButton\n"
"{\n"
"	background-color: #d10000;\n"
"	color: #fff;\n"
"	font-weight: bold;\n"
"	border: 1px solid #d10000;  \n"
"	border-radius: 2px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #ad0000;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #e00000;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton\n"
"{\n"
"	background-color: transparent;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
""
                        "	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	background-color: #d10000;\n"
"	color: #000000;\n"
"	border-radius: 15px;\n"
"	border-color: #d10000;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #d10000;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-width: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit{\n"
"	background-color: #4d4d4d;\n"
"	color: #fff;\n"
"	font-weight: bold;\n"
"	border-style: solid;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #b9b9bb;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #00111d;\n"
"    border: 1px solid #d10000;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\"); /*To replace*/\n"
"	background-colo"
                        "r: #d10000;\n"
"    border: 1px solid #d10000;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #ff0000;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
""));
        lineEdit_nom = new QLineEdit(widget_3);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(60, 220, 311, 31));
        lineEdit_mdp = new QLineEdit(widget_3);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));
        lineEdit_mdp->setGeometry(QRect(60, 300, 311, 31));
        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 190, 161, 31));
        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 270, 161, 31));
        pushButton_9 = new QPushButton(widget_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(70, 400, 291, 41));
        icone = new QPushButton(widget_3);
        icone->setObjectName(QStringLiteral("icone"));
        icone->setGeometry(QRect(170, 30, 101, 111));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        icone->setIcon(icon);
        icone->setIconSize(QSize(120, 150));
        icone->setCheckable(false);
        checkBox = new QCheckBox(widget_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 340, 191, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 1951, 991));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        widget_3->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "nom :", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "mot de passe :", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "login", Q_NULLPTR));
        icone->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "afficher mot de passe", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
