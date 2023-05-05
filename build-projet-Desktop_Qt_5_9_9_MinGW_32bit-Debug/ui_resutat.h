/********************************************************************************
** Form generated from reading UI file 'resutat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESUTAT_H
#define UI_RESUTAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_resutat
{
public:
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *resutat)
    {
        if (resutat->objectName().isEmpty())
            resutat->setObjectName(QStringLiteral("resutat"));
        resutat->resize(1072, 649);
        resutat->setStyleSheet(QLatin1String("\n"
"background-color: rgb(157, 229, 255);"));
        label = new QLabel(resutat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 70, 791, 91));
        label->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 24pt \"MV Boli\";\n"
"border-radius:20px;\n"
"background-color: rgb(189, 85, 85);"));
        progressBar = new QProgressBar(resutat);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(320, 220, 541, 71));
        progressBar->setValue(24);
        label_2 = new QLabel(resutat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 340, 111, 101));
        label_2->setStyleSheet(QStringLiteral("font: 22pt \"MV Boli\";"));
        label_3 = new QLabel(resutat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 340, 61, 101));
        label_3->setStyleSheet(QStringLiteral("font: 22pt \"MV Boli\";"));

        retranslateUi(resutat);

        QMetaObject::connectSlotsByName(resutat);
    } // setupUi

    void retranslateUi(QDialog *resutat)
    {
        resutat->setWindowTitle(QApplication::translate("resutat", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("resutat", " resultat du test de controle technique", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("resutat", "%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class resutat: public Ui_resutat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESUTAT_H
