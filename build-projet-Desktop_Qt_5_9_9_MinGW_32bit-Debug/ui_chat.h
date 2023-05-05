/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_connect;
    QTextEdit *textEdit_adress;
    QTextEdit *textEdit_port;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QTextEdit *textEdit_message;
    QPushButton *pushButton_send;
    QLabel *label_5;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(719, 752);
        label = new QLabel(chat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 671, 671));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/interf_chat.png")));
        label_2 = new QLabel(chat);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, -20, 671, 181));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/interf_chat.png")));
        pushButton_connect = new QPushButton(chat);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(140, 200, 93, 28));
        pushButton_connect->setStyleSheet(QLatin1String("color: rgb(0, 170, 0);\n"
"font: italic 12pt \"Monotype Corsiva\";"));
        textEdit_adress = new QTextEdit(chat);
        textEdit_adress->setObjectName(QStringLiteral("textEdit_adress"));
        textEdit_adress->setGeometry(QRect(140, 80, 471, 41));
        textEdit_port = new QTextEdit(chat);
        textEdit_port->setObjectName(QStringLiteral("textEdit_port"));
        textEdit_port->setGeometry(QRect(140, 140, 471, 41));
        label_3 = new QLabel(chat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 80, 91, 31));
        label_3->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
"background-color: rgb(255, 255, 127);\n"
"background-color: rgb(170, 170, 255);"));
        label_4 = new QLabel(chat);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 140, 91, 31));
        label_4->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
"background-color: rgb(255, 255, 127);\n"
"background-color: rgb(170, 170, 255);"));
        widget = new QWidget(chat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 640, 641, 81));
        widget->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"background-color: rgb(74, 74, 223);"));
        textEdit_message = new QTextEdit(widget);
        textEdit_message->setObjectName(QStringLiteral("textEdit_message"));
        textEdit_message->setGeometry(QRect(20, 20, 481, 41));
        textEdit_message->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_send = new QPushButton(widget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(520, 30, 81, 31));
        pushButton_send->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(chat);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 30, 631, 221));
        label_5->setStyleSheet(QLatin1String("background-color: rgb(218, 0, 0);\n"
"\n"
"background-color: rgb(157, 236, 236);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/Untitled3.png")));
        label->raise();
        label_2->raise();
        widget->raise();
        label_5->raise();
        textEdit_port->raise();
        textEdit_adress->raise();
        label_3->raise();
        label_4->raise();
        pushButton_connect->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_connect->setText(QApplication::translate("chat", "connect", Q_NULLPTR));
        label_3->setText(QApplication::translate("chat", "IP adress:", Q_NULLPTR));
        label_4->setText(QApplication::translate("chat", "Port:", Q_NULLPTR));
        textEdit_message->setHtml(QApplication::translate("chat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("chat", "send", Q_NULLPTR));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
