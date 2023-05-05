/********************************************************************************
** Form generated from reading UI file 'histo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTO_H
#define UI_HISTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_histo
{
public:
    QWidget *widget;
    QTableView *tableView_2;
    QLabel *options_2;
    QPushButton *supprimer_2;
    QPushButton *ajouter_2;
    QLineEdit *lineEdit_16;
    QPushButton *ajouter_3;
    QDateEdit *lineEdit_17;
    QLabel *form_2;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_18;
    QPushButton *ajouter_4;
    QLabel *label_2;
    QWidget *top_widget;
    QLabel *label;

    void setupUi(QDialog *histo)
    {
        if (histo->objectName().isEmpty())
            histo->setObjectName(QStringLiteral("histo"));
        histo->setEnabled(true);
        histo->resize(1900, 980);
        histo->setStyleSheet(QLatin1String("QWidget {	\n"
"	border:1px solid #dfdfdf;\n"
"	border-radius: 5px;\n"
"	background-color: #ffffff;\n"
"}\n"
"\n"
"QPushButton{\n"
"	\n"
"	border-raduis:5px\n"
"}\n"
"#side_menu{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"#top_widget{\n"
"\n"
"	background-color: rgb(0,0,0);\n"
"}\n"
"#form{\n"
"	\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"border-top-left-radius: 50px;\n"
"}\n"
"\n"
"#widget QLineEdit{\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgb(0,0,0);\n"
"padding-bottom:7px\n"
"\n"
"}\n"
"#widget{\n"
"	\n"
"	/* background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"	/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"    background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4aafdb, stop: 1 #090763);\n"
"}\n"
"#options_2{\n"
"background-color:  rgb(0,0,0);\n"
"bo"
                        "rder-bottom-right-radius: 50px;\n"
"\n"
"}\n"
"#widget #recherche_2{\n"
"	\n"
"	background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"\n"
"#ajouter{\n"
" color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
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
"    background-color: rgb(185, 185, 185);\n"
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
"  color: rgb(0,0,0);\n"
"    background-color: rgb(185, 185, 185);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 30px;\n"
"    padding: 3px;\n"
" "
                        "   font-size: 12px;\n"
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
"#top_widget #label\n"
"{\n"
"	\n"
"	font: 75 14pt \"Segoe Print\";\n"
"}\n"
"\n"
"#pdf{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#stat{\n"
"	\n"
"	background-color: #071e26;\n"
"border:0px ;\n"
"}\n"
"#widget_2 QLineEdit {\n"
"		background-color: rgb(204, 204, 204);\n"
"	border:1px solid rgb(0,0,0);\n"
""
                        "\n"
"}\n"
"#widget_2{\n"
"	\n"
"	border-radius: 20px;\n"
"	background-color:  rgb(0,0,0);\n"
"\n"
"}\n"
"QPushButton{\n"
"	background-color: rgb(204, 204, 204);\n"
"}"));
        widget = new QWidget(histo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 110, 1851, 850));
        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(900, 40, 901, 741));
        tableView_2->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        options_2 = new QLabel(widget);
        options_2->setObjectName(QStringLiteral("options_2"));
        options_2->setGeometry(QRect(620, 40, 181, 731));
        options_2->setStyleSheet(QLatin1String("\n"
"background-color:rgb(0,0,0);\n"
"\n"
"\n"
""));
        supprimer_2 = new QPushButton(widget);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(670, 340, 91, 61));
        ajouter_2 = new QPushButton(widget);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(670, 130, 91, 61));
        ajouter_2->setStyleSheet(QLatin1String("border-radius:50px;\n"
""));
        lineEdit_16 = new QLineEdit(widget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(190, 110, 231, 51));
        ajouter_3 = new QPushButton(widget);
        ajouter_3->setObjectName(QStringLiteral("ajouter_3"));
        ajouter_3->setGeometry(QRect(670, 240, 91, 61));
        lineEdit_17 = new QDateEdit(widget);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(440, 130, 161, 41));
        form_2 = new QLabel(widget);
        form_2->setObjectName(QStringLiteral("form_2"));
        form_2->setGeometry(QRect(60, 40, 561, 731));
        form_2->setStyleSheet(QStringLiteral(""));
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(930, 80, 851, 671));
        lineEdit_18 = new QLineEdit(widget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(190, 200, 231, 51));
        ajouter_4 = new QPushButton(widget);
        ajouter_4->setObjectName(QStringLiteral("ajouter_4"));
        ajouter_4->setGeometry(QRect(670, 450, 91, 61));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1851, 851));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/Untitled-1.png")));
        label_2->raise();
        form_2->raise();
        tableView_2->raise();
        options_2->raise();
        supprimer_2->raise();
        ajouter_2->raise();
        lineEdit_16->raise();
        ajouter_3->raise();
        lineEdit_17->raise();
        plainTextEdit->raise();
        lineEdit_18->raise();
        ajouter_4->raise();
        top_widget = new QWidget(histo);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(30, 9, 1851, 91));
        top_widget->setStyleSheet(QLatin1String("#top_widget\n"
"{\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton \n"
"{\n"
"border-radius: 10px\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(top_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(670, 20, 481, 51));
        top_widget->raise();
        widget->raise();

        retranslateUi(histo);

        QMetaObject::connectSlotsByName(histo);
    } // setupUi

    void retranslateUi(QDialog *histo)
    {
        histo->setWindowTitle(QApplication::translate("histo", "Dialog", Q_NULLPTR));
        options_2->setText(QString());
        supprimer_2->setText(QApplication::translate("histo", "supprimer", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("histo", "ecrire", Q_NULLPTR));
        lineEdit_16->setText(QString());
        lineEdit_16->setPlaceholderText(QApplication::translate("histo", "saisir fichier.txt", Q_NULLPTR));
        ajouter_3->setText(QApplication::translate("histo", "ouvrir", Q_NULLPTR));
        form_2->setText(QString());
        lineEdit_18->setText(QString());
        lineEdit_18->setPlaceholderText(QApplication::translate("histo", "saisir fichier.txt", Q_NULLPTR));
        ajouter_4->setText(QApplication::translate("histo", "ouvrir2", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("histo", "                   Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class histo: public Ui_histo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTO_H
