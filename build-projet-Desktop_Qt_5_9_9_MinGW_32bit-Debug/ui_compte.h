/********************************************************************************
** Form generated from reading UI file 'compte.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPTE_H
#define UI_COMPTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Compte
{
public:
    QLabel *label_2;
    QLabel *options_2;
    QPushButton *pushButton_2;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_mail;
    QLabel *label_numero;
    QLabel *label_cin;
    QPushButton *pushButton_8;

    void setupUi(QDialog *Compte)
    {
        if (Compte->objectName().isEmpty())
            Compte->setObjectName(QStringLiteral("Compte"));
        Compte->resize(1420, 980);
        label_2 = new QLabel(Compte);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 1381, 871));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/blue2.png")));
        options_2 = new QLabel(Compte);
        options_2->setObjectName(QStringLiteral("options_2"));
        options_2->setGeometry(QRect(500, 280, 591, 621));
        options_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(135, 135, 135);"));
        pushButton_2 = new QPushButton(Compte);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 170, 141, 141));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius : 50px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/emp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(200, 120));
        label_nom = new QLabel(Compte);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(680, 350, 201, 51));
        label_nom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"MV Boli\";"));
        label_prenom = new QLabel(Compte);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(680, 440, 201, 51));
        label_prenom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"MV Boli\";"));
        label_mail = new QLabel(Compte);
        label_mail->setObjectName(QStringLiteral("label_mail"));
        label_mail->setGeometry(QRect(680, 540, 201, 51));
        label_mail->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"MV Boli\";"));
        label_numero = new QLabel(Compte);
        label_numero->setObjectName(QStringLiteral("label_numero"));
        label_numero->setGeometry(QRect(680, 640, 201, 51));
        label_numero->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"MV Boli\";"));
        label_cin = new QLabel(Compte);
        label_cin->setObjectName(QStringLiteral("label_cin"));
        label_cin->setGeometry(QRect(680, 740, 201, 51));
        label_cin->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"MV Boli\";"));
        pushButton_8 = new QPushButton(Compte);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(580, 40, 441, 81));
        pushButton_8->setStyleSheet(QStringLiteral("font: 20pt \"MV Boli\";"));
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);

        retranslateUi(Compte);

        QMetaObject::connectSlotsByName(Compte);
    } // setupUi

    void retranslateUi(QDialog *Compte)
    {
        Compte->setWindowTitle(QApplication::translate("Compte", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        options_2->setText(QString());
        pushButton_2->setText(QString());
        label_nom->setText(QApplication::translate("Compte", "TextLabel", Q_NULLPTR));
        label_prenom->setText(QApplication::translate("Compte", "TextLabel", Q_NULLPTR));
        label_mail->setText(QApplication::translate("Compte", "TextLabel", Q_NULLPTR));
        label_numero->setText(QApplication::translate("Compte", "TextLabel", Q_NULLPTR));
        label_cin->setText(QApplication::translate("Compte", "TextLabel", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Compte", "votre compte", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Compte: public Ui_Compte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPTE_H
