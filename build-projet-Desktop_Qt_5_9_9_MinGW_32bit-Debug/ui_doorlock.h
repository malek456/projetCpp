/********************************************************************************
** Form generated from reading UI file 'doorlock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOORLOCK_H
#define UI_DOORLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoorLock
{
public:
    QWidget *widget;
    QLabel *gifLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *DoorLock)
    {
        if (DoorLock->objectName().isEmpty())
            DoorLock->setObjectName(QStringLiteral("DoorLock"));
        DoorLock->resize(1403, 895);
        DoorLock->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));
        widget = new QWidget(DoorLock);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 70, 1181, 751));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gifLabel = new QLabel(widget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(450, 20, 301, 191));
        gifLabel->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 310, 211, 61));
        pushButton->setStyleSheet(QStringLiteral("font: 14pt \"MV Boli\";"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 400, 211, 61));
        pushButton_2->setStyleSheet(QStringLiteral("font: 14pt \"MV Boli\";"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(790, 320, 201, 51));
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 127);\n"
"font: 14pt \"MV Boli\";\n"
"border-radius:5px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(470, 250, 291, 291));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:50px;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/locked.png")));

        retranslateUi(DoorLock);

        QMetaObject::connectSlotsByName(DoorLock);
    } // setupUi

    void retranslateUi(QDialog *DoorLock)
    {
        DoorLock->setWindowTitle(QApplication::translate("DoorLock", "Dialog", Q_NULLPTR));
        gifLabel->setText(QString());
        pushButton->setText(QApplication::translate("DoorLock", "fermer porte", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DoorLock", "ouvrir porte", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoorLock: public Ui_DoorLock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOORLOCK_H
