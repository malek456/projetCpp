#include "controle.h"
#include "ui_controle.h"
#include <QMovie>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "controle.h"
#include "mainwindow.h"
#include "resutat.h"



controle::controle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controle)
{
    ui->setupUi(this);

    //ui->gifLabel->setGeometry(0, 0, 200, 200); // Set the size and position of the label

    // Load the GIF
    QMovie* gif = new QMovie(":/new/prefix1/icons/car.gif"); // Replace ":/images/car.gif" with the path to your GIF file
    gif->setScaledSize(ui->gifLabel->size()); // Scale the GIF to fit the label
    ui->gifLabel->setMovie(gif);

    // Start the GIF animation
    gif->start();

}

controle::~controle()
{
    delete ui;
}

void controle::on_pushButton_clicked()
{
    QCheckBox* checkboxes[] = {ui->checkBox1, ui->checkBox2, ui->checkBox3, ui->checkBox4,  ui->checkBox5,  ui->checkBox6,  ui->checkBox7,  ui->checkBox8,  ui->checkBox9,  ui->checkBox10,  ui->checkBox11,  ui->checkBox12,  ui->checkBox13,  ui->checkBox14};
    int numCheckboxes = 14;

    QStringList columnNames;
    QVariantList values;

    for (int i = 0; i < numCheckboxes; i++) {
        QCheckBox* checkbox = checkboxes[i];
        QString checkboxName = checkbox->objectName(); // Get the name of the checkbox
        int value = checkbox->isChecked() ? 1 : 0; // Get the value of the checkbox (1 if checked, 0 if not)

        columnNames << checkboxName;
        values << value;
    }

    // Construct the SET clause for the UPDATE statement
    QStringList setClause;
    for (int i = 0; i < columnNames.size(); i++) {
        setClause << columnNames[i] + " = " + QString::number(values[i].toInt());
    }

    // Execute the UPDATE statement
    QSqlQuery query;
    QString queryStr = "UPDATE gs_controle SET " + setClause.join(", ") + " WHERE matricule = ?";
    query.prepare(queryStr);
    qWarning()<<"mat"<<myGlobalVariable;
    query.addBindValue(myGlobalVariable);
    //qWarning()<<"myGlobalVariable"<<myGlobalVariable;
    query.exec();

    resutat r;
    r.setModal(true);
    r.exec();

    // Check for errors
    if (query.lastError().type() != QSqlError::NoError) {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}
