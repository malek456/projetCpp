#include "doorlock.h"
#include "ui_doorlock.h"
#include <QMovie>
#include<QDebug>
#include "arduino.h"
#include <QSqlQuery>

DoorLock::DoorLock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoorLock)
{
    ui->setupUi(this);

    //ui->gifLabel->setGeometry(0, 0, 200, 200); // Set the size and position of the label

        // Load the GIF
        QMovie* gif = new QMovie(":/new/prefix1/icons/lock.gif");
        gif->setScaledSize(ui->gifLabel->size());
        ui->gifLabel->setMovie(gif);

        // Start the GIF animation
        gif->start();


    int ret=A.connectArduino();
    switch (ret) {
    case(0):qWarning()<<"arduino is available and connected to :"<<A.getarduino_port_name();
        break;
    case(1):qWarning()<<"arduino is availabe but not connected to : "<<A.getarduino_port_name();
        break;
    case (-1):qWarning()<<"arduino is not available";
        break;
    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
}

void DoorLock::update_label()
{
    QPixmap pixamp(":/new/prefix1/icons/unlocked.png");
    QPixmap pixamp1(":/new/prefix1/icons/locked.png");
    QByteArray data = A.read_from_arduino().trimmed(); // Remove leading and trailing whitespace

    QString dataString(data);

    QSqlQuery query;
    query.prepare("SELECT ID_A FROM GS_LOCKDOOR WHERE ID=:data");
    query.bindValue(":data", dataString);

    qWarning() << "data from arduino: " << dataString;
    qWarning() << "query.exec(): " << query.exec();

    if (query.next()) {
        QString id_a = query.value(0).toString();
        qWarning() << "id_a: " << id_a;

        // Rest of your code
        if (id_a == dataString) {
            ui->label->setText("accés autorisé");
            ui->label_2->setPixmap(pixamp);
        }

    } else {
        ui->label->setText("accés refusé");
        ui->label_2->setPixmap(pixamp1);
    }



}

DoorLock::~DoorLock()
{
    delete ui;
}

void DoorLock::on_pushButton_2_clicked()
{
    A.write_to_arduino("1");
}

void DoorLock::on_pushButton_clicked()
{
    A.write_to_arduino("2");
}
