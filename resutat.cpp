#include "resutat.h"
#include "ui_resutat.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <mainwindow.h>

resutat::resutat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resutat)
{
    ui->setupUi(this);


    qWarning() << "myGlobalVariable" << myGlobalVariable;
    QSqlQuery query;
    query.prepare( "SELECT SUM(CHECKBOX1), SUM(CHECKBOX2), SUM(CHECKBOX3), SUM(CHECKBOX4), SUM(CHECKBOX5), SUM(CHECKBOX6), SUM(CHECKBOX7), SUM(CHECKBOX8), SUM(CHECKBOX9), SUM(CHECKBOX10), SUM(CHECKBOX11), SUM(CHECKBOX12), SUM(CHECKBOX13), SUM(CHECKBOX14) FROM GS_CONTROLE WHERE MATRICULE=:myGlobalVariable");
    query.bindValue(":myGlobalVariable", myGlobalVariable);
    if (!query.exec()) {
        qDebug() << query.lastError().text();
        QMessageBox::critical(this, "Error", "Failed to execute query");
        return;
    }

    if (query.next()) {
        int totalCount = 0;
        for (int i = 0; i < 14; i++) {
            int columnCount = query.value(i).toInt();
            totalCount += columnCount;
        }

        // Calculate the percentage of checkboxes that are checked
        double percentage = (static_cast<double>(totalCount) / 14.0) * 100.0;
        qDebug() << "Total checked boxes: " << totalCount;
        qDebug() << "Percentage: " << percentage << "%";
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(14);
        ui->progressBar->setValue(totalCount);
        ui->progressBar->setFormat(QString("%1%").arg(percentage));
        ui->label_2->setText(QString::number(percentage, 'f', 2));
    }
}

resutat::~resutat()
{
    delete ui;
}
