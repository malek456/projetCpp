/********************************************************************************
** Form generated from reading UI file 'mdp_oublie.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDP_OUBLIE_H
#define UI_MDP_OUBLIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mdp_oublie
{
public:
    QWidget *widget_3;
    QLabel *label_18;
    QLineEdit *toLineEdit;
    QPushButton *pushButton_9;
    QLineEdit *fromLineEdit;
    QTextEdit *bodyTextEdit;
    QLineEdit *subjectLineEdit;

    void setupUi(QDialog *mdp_oublie)
    {
        if (mdp_oublie->objectName().isEmpty())
            mdp_oublie->setObjectName(QStringLiteral("mdp_oublie"));
        mdp_oublie->resize(703, 831);
        mdp_oublie->setStyleSheet(QLatin1String("background-color: rgb(211, 211, 0);\n"
"background-color: rgb(255, 255, 127);"));
        widget_3 = new QWidget(mdp_oublie);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(140, 270, 431, 231));
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
        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 40, 211, 31));
        toLineEdit = new QLineEdit(widget_3);
        toLineEdit->setObjectName(QStringLiteral("toLineEdit"));
        toLineEdit->setGeometry(QRect(50, 80, 311, 31));
        pushButton_9 = new QPushButton(widget_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(270, 140, 91, 31));
        fromLineEdit = new QLineEdit(mdp_oublie);
        fromLineEdit->setObjectName(QStringLiteral("fromLineEdit"));
        fromLineEdit->setGeometry(QRect(170, 540, 311, 31));
        bodyTextEdit = new QTextEdit(mdp_oublie);
        bodyTextEdit->setObjectName(QStringLiteral("bodyTextEdit"));
        bodyTextEdit->setGeometry(QRect(330, 610, 104, 87));
        subjectLineEdit = new QLineEdit(mdp_oublie);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));
        subjectLineEdit->setGeometry(QRect(140, 740, 311, 31));

        retranslateUi(mdp_oublie);

        QMetaObject::connectSlotsByName(mdp_oublie);
    } // setupUi

    void retranslateUi(QDialog *mdp_oublie)
    {
        mdp_oublie->setWindowTitle(QApplication::translate("mdp_oublie", "Dialog", Q_NULLPTR));
        label_18->setText(QApplication::translate("mdp_oublie", "entrer votre adresse e-mail:", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("mdp_oublie", "confirmer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mdp_oublie: public Ui_mdp_oublie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDP_OUBLIE_H
