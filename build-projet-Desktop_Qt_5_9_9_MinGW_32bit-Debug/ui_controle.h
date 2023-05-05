/********************************************************************************
** Form generated from reading UI file 'controle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLE_H
#define UI_CONTROLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_controle
{
public:
    QWidget *widget;
    QLabel *gifLabel;
    QLabel *label;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QCheckBox *checkBox4;
    QCheckBox *checkBox5;
    QLabel *label_2;
    QCheckBox *checkBox6;
    QCheckBox *checkBox7;
    QCheckBox *checkBox8;
    QCheckBox *checkBox9;
    QCheckBox *checkBox10;
    QCheckBox *checkBox11;
    QCheckBox *checkBox12;
    QCheckBox *checkBox13;
    QCheckBox *checkBox14;
    QPushButton *pushButton;

    void setupUi(QDialog *controle)
    {
        if (controle->objectName().isEmpty())
            controle->setObjectName(QStringLiteral("controle"));
        controle->resize(1525, 890);
        widget = new QWidget(controle);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-1, -1, 1531, 891));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gifLabel = new QLabel(widget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(0, 0, 511, 311));
        gifLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 100, 541, 71));
        label->setStyleSheet(QStringLiteral("font: 35pt \"MV Boli\";"));
        checkBox1 = new QCheckBox(widget);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));
        checkBox1->setGeometry(QRect(120, 420, 311, 51));
        checkBox2 = new QCheckBox(widget);
        checkBox2->setObjectName(QStringLiteral("checkBox2"));
        checkBox2->setGeometry(QRect(120, 510, 211, 20));
        checkBox3 = new QCheckBox(widget);
        checkBox3->setObjectName(QStringLiteral("checkBox3"));
        checkBox3->setGeometry(QRect(120, 580, 221, 20));
        checkBox4 = new QCheckBox(widget);
        checkBox4->setObjectName(QStringLiteral("checkBox4"));
        checkBox4->setGeometry(QRect(120, 650, 311, 20));
        checkBox5 = new QCheckBox(widget);
        checkBox5->setObjectName(QStringLiteral("checkBox5"));
        checkBox5->setGeometry(QRect(730, 470, 291, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 430, 161, 16));
        checkBox6 = new QCheckBox(widget);
        checkBox6->setObjectName(QStringLiteral("checkBox6"));
        checkBox6->setGeometry(QRect(730, 510, 291, 20));
        checkBox7 = new QCheckBox(widget);
        checkBox7->setObjectName(QStringLiteral("checkBox7"));
        checkBox7->setGeometry(QRect(730, 550, 291, 20));
        checkBox8 = new QCheckBox(widget);
        checkBox8->setObjectName(QStringLiteral("checkBox8"));
        checkBox8->setGeometry(QRect(730, 590, 201, 20));
        checkBox9 = new QCheckBox(widget);
        checkBox9->setObjectName(QStringLiteral("checkBox9"));
        checkBox9->setGeometry(QRect(730, 630, 221, 20));
        checkBox10 = new QCheckBox(widget);
        checkBox10->setObjectName(QStringLiteral("checkBox10"));
        checkBox10->setGeometry(QRect(730, 670, 83, 20));
        checkBox11 = new QCheckBox(widget);
        checkBox11->setObjectName(QStringLiteral("checkBox11"));
        checkBox11->setGeometry(QRect(1170, 440, 301, 20));
        checkBox12 = new QCheckBox(widget);
        checkBox12->setObjectName(QStringLiteral("checkBox12"));
        checkBox12->setGeometry(QRect(1170, 510, 261, 20));
        checkBox13 = new QCheckBox(widget);
        checkBox13->setObjectName(QStringLiteral("checkBox13"));
        checkBox13->setGeometry(QRect(1170, 580, 241, 20));
        checkBox14 = new QCheckBox(widget);
        checkBox14->setObjectName(QStringLiteral("checkBox14"));
        checkBox14->setGeometry(QRect(1170, 650, 471, 20));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1310, 760, 141, 41));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 0);\n"
"border-radius:10px;\n"
"font: 14pt \"MV Boli\";"));

        retranslateUi(controle);

        QMetaObject::connectSlotsByName(controle);
    } // setupUi

    void retranslateUi(QDialog *controle)
    {
        controle->setWindowTitle(QApplication::translate("controle", "Dialog", Q_NULLPTR));
        gifLabel->setText(QString());
        label->setText(QApplication::translate("controle", "controle technique", Q_NULLPTR));
        checkBox1->setText(QApplication::translate("controle", "Contr\303\264le de l'\303\251clairage et de la signalisation", Q_NULLPTR));
        checkBox2->setText(QApplication::translate("controle", "Contr\303\264le des freins ", Q_NULLPTR));
        checkBox3->setText(QApplication::translate("controle", "Contr\303\264le de la direction", Q_NULLPTR));
        checkBox4->setText(QApplication::translate("controle", "Contr\303\264le de l'\303\251mission de polluants ", Q_NULLPTR));
        checkBox5->setText(QApplication::translate("controle", "presence de ceintures de securit\303\251", Q_NULLPTR));
        label_2->setText(QApplication::translate("controle", "controle de securit\303\251 :", Q_NULLPTR));
        checkBox6->setText(QApplication::translate("controle", "pr\303\251sence d'airbags", Q_NULLPTR));
        checkBox7->setText(QApplication::translate("controle", "presence de syst\303\251mes de retenue pour enfants", Q_NULLPTR));
        checkBox8->setText(QApplication::translate("controle", "Phares et feux", Q_NULLPTR));
        checkBox9->setText(QApplication::translate("controle", "Essuie-glaces et lave-glace", Q_NULLPTR));
        checkBox10->setText(QApplication::translate("controle", "Klaxon", Q_NULLPTR));
        checkBox11->setText(QApplication::translate("controle", "controle de la plaque d'immatriculation", Q_NULLPTR));
        checkBox12->setText(QApplication::translate("controle", "controle de r\303\251troviseurs", Q_NULLPTR));
        checkBox13->setText(QApplication::translate("controle", "controle des  vitres", Q_NULLPTR));
        checkBox14->setText(QApplication::translate("controle", "passer Les essais de conduite", Q_NULLPTR));
        pushButton->setText(QApplication::translate("controle", "tester", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class controle: public Ui_controle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLE_H
