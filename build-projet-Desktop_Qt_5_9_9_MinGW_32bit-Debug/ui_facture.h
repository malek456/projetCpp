/********************************************************************************
** Form generated from reading UI file 'facture.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURE_H
#define UI_FACTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_facture
{
public:
    QWidget *widget;
    QTableView *tableView_2;
    QLabel *form_2;
    QLabel *options_2;
    QPushButton *supprimer_2;
    QLineEdit *lineEdit_12;
    QPushButton *ajouter_2;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_18;
    QComboBox *comboBox_4;
    QPushButton *ajouter_3;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QDateEdit *lineEdit_17;
    QLabel *label_2;
    QWidget *top_widget;
    QLabel *label;

    void setupUi(QDialog *facture)
    {
        if (facture->objectName().isEmpty())
            facture->setObjectName(QStringLiteral("facture"));
        facture->resize(1900, 980);
        facture->setStyleSheet(QLatin1String("QWidget {	\n"
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
        widget = new QWidget(facture);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 120, 1841, 851));
        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(1060, 70, 731, 671));
        tableView_2->setStyleSheet(QStringLiteral("border-raduis:5px;"));
        form_2 = new QLabel(widget);
        form_2->setObjectName(QStringLiteral("form_2"));
        form_2->setGeometry(QRect(120, 70, 641, 681));
        form_2->setStyleSheet(QStringLiteral(""));
        options_2 = new QLabel(widget);
        options_2->setObjectName(QStringLiteral("options_2"));
        options_2->setGeometry(QRect(760, 70, 171, 681));
        options_2->setStyleSheet(QStringLiteral("background-color:rgb(0,0,0);"));
        supprimer_2 = new QPushButton(widget);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(800, 410, 91, 61));
        lineEdit_12 = new QLineEdit(widget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(150, 130, 231, 51));
        ajouter_2 = new QPushButton(widget);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(800, 160, 91, 61));
        lineEdit_13 = new QLineEdit(widget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(150, 230, 231, 51));
        lineEdit_16 = new QLineEdit(widget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(480, 230, 251, 51));
        lineEdit_18 = new QLineEdit(widget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(150, 330, 231, 41));
        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(480, 330, 261, 41));
        ajouter_3 = new QPushButton(widget);
        ajouter_3->setObjectName(QStringLiteral("ajouter_3"));
        ajouter_3->setGeometry(QRect(800, 280, 91, 61));
        comboBox_5 = new QComboBox(widget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(480, 400, 261, 41));
        lineEdit_19 = new QLineEdit(widget);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(140, 600, 201, 51));
        lineEdit_20 = new QLineEdit(widget);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(360, 600, 201, 51));
        lineEdit_21 = new QLineEdit(widget);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(580, 600, 171, 51));
        lineEdit_17 = new QDateEdit(widget);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(480, 120, 261, 41));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1841, 861));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/icons/Untitled-22.png")));
        label_2->raise();
        tableView_2->raise();
        form_2->raise();
        options_2->raise();
        supprimer_2->raise();
        lineEdit_12->raise();
        ajouter_2->raise();
        lineEdit_13->raise();
        lineEdit_16->raise();
        lineEdit_18->raise();
        comboBox_4->raise();
        ajouter_3->raise();
        comboBox_5->raise();
        lineEdit_19->raise();
        lineEdit_20->raise();
        lineEdit_21->raise();
        lineEdit_17->raise();
        top_widget = new QWidget(facture);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setGeometry(QRect(30, 10, 1841, 91));
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
        label->setGeometry(QRect(780, 20, 351, 51));

        retranslateUi(facture);

        QMetaObject::connectSlotsByName(facture);
    } // setupUi

    void retranslateUi(QDialog *facture)
    {
        facture->setWindowTitle(QApplication::translate("facture", "Dialog", Q_NULLPTR));
        form_2->setText(QString());
        options_2->setText(QString());
        supprimer_2->setText(QApplication::translate("facture", "supprimer", Q_NULLPTR));
        lineEdit_12->setText(QString());
        lineEdit_12->setPlaceholderText(QApplication::translate("facture", " CIN", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("facture", "ajouter", Q_NULLPTR));
        lineEdit_13->setText(QString());
        lineEdit_13->setPlaceholderText(QApplication::translate("facture", "  TVA %", Q_NULLPTR));
        lineEdit_16->setText(QString());
        lineEdit_16->setPlaceholderText(QApplication::translate("facture", " prix DT", Q_NULLPTR));
        lineEdit_18->setText(QString());
        lineEdit_18->setPlaceholderText(QApplication::translate("facture", "NB", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("facture", "espae", Q_NULLPTR)
         << QApplication::translate("facture", "Cheque", Q_NULLPTR)
         << QApplication::translate("facture", "Versement", Q_NULLPTR)
         << QApplication::translate("facture", "Virement", Q_NULLPTR)
        );
        ajouter_3->setText(QApplication::translate("facture", "imprimer", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("facture", "1", Q_NULLPTR)
         << QApplication::translate("facture", "2", Q_NULLPTR)
         << QApplication::translate("facture", "3", Q_NULLPTR)
         << QString()
        );
        comboBox_5->setCurrentText(QApplication::translate("facture", "1", Q_NULLPTR));
        lineEdit_19->setText(QString());
        lineEdit_19->setPlaceholderText(QApplication::translate("facture", "voiture n1 ", Q_NULLPTR));
        lineEdit_20->setText(QString());
        lineEdit_20->setPlaceholderText(QApplication::translate("facture", "voiture n2", Q_NULLPTR));
        lineEdit_21->setText(QString());
        lineEdit_21->setPlaceholderText(QApplication::translate("facture", "voiture n3", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("facture", "            Facturation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class facture: public Ui_facture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURE_H
