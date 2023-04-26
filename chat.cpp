#include "chat.h"
#include "ui_chat.h"
#include <QTcpSocket>
#include <QDataStream>
#include <QSqlQuery>
#include <QDateTime>
#include <QSqlError>
#include <QMessageBox>
#include "global.h"

chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)

{
    m_pEmployeeSocket = new QTcpSocket(this);
    ui->setupUi(this);

}

chat::~chat()
{
    delete ui;
}

void chat::debug(const QString& message) {
    qDebug() << "DEBUG: " << message;
}


void chat::on_pushButton_connect_clicked()
{
    QString password = g_loginInfo.password;
    qWarning() << "testtttttt" << password;

    qWarning() << "we're here";

    // Query the database for the user's information
    QSqlQuery query;
    query.prepare("SELECT cin,nom FROM GS_EMPLOYÉ WHERE mot_de_passe = :password");
    query.bindValue(":password", password);
    if (!query.exec()) {
        qWarning() << "Failed to execute query:" << query.lastError().text();
        return;
    }
    if (!query.next()) {
        qWarning() << "No matching record found";
        return;
    }
    QString employeeId = query.value(0).toString();
    QString employeeName = query.value(1).toString();
    qWarning() << "id" << employeeId;
    qWarning() << "name" << employeeName;
    QString color = "red";
    QString message = "<span style=\"color:" + color + "\">" + employeeId + "::" + employeeName + " joined the chat" + "</span>";


    m_pEmployeeSocket->connectToHost(ui->textEdit_adress->toPlainText(), quint16(ui->textEdit_port->toPlainText().toInt()));
    m_pEmployeeSocket->write(QString(message + "\n").toUtf8());
    connect(m_pEmployeeSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));
}


void chat::displayError(QAbstractSocket::SocketError socketError)
{
    QString errorMessage;
       switch (socketError) {
           case QAbstractSocket::RemoteHostClosedError:
               break;
           case QAbstractSocket::HostNotFoundError:
               QMessageBox::information(this, tr("Fortune Employee"),
                                        tr("the host was not found. Please check the"
                                           "host name and port settings"));
               break;
           case QAbstractSocket::ConnectionRefusedError:
               QMessageBox::information( this, tr("Fortune Employee"),
                                         tr("the connection was refused by the peer."
                                            "Make sure the fortune server is running,"
                                            "and check that the host name and port"
                                            "settings are connected"));
               break;
           default:
               QMessageBox::information(this, tr("Fortune Employee"),
                                        tr("the following error occured: %1.")
                                        .arg(m_pEmployeeSocket->errorString()));
       }

}

void chat::on_pushButton_send_clicked()
{
    QString password = g_loginInfo.password;

    QSqlQuery query;
    query.prepare("SELECT nom FROM GS_EMPLOYÉ WHERE mot_de_passe = :password");
    query.bindValue(":password", password);
    if (!query.exec()) {
        qWarning() << "Failed to execute query:" << query.lastError().text();
        return;
    }
    if (!query.next()) {
        qWarning() << "No matching record found";
        return;
    }

    QString employeeName = query.value(0).toString();

    QString message = ui->textEdit_message->toPlainText().trimmed();

    QString message1= employeeName + "::" + message;

    if(!message1.isEmpty())
    {
        m_pEmployeeSocket->write(QString(message1 + "\n").toUtf8());
        ui->textEdit_message->append(message);

    }
    ui->textEdit_message->clear();

    ui->textEdit_message->setFocus();
}
