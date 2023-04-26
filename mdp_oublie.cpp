#include "mdp_oublie.h"
#include "ui_mdp_oublie.h"
#include <QtNetwork>
#include <QDebug>
#include <QCoreApplication> 
#include <QTcpSocket>
#include <QSslSocket>



mdp_oublie::mdp_oublie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mdp_oublie)
{
    ui->setupUi(this);



}

void mdp_oublie::sendMail(QString from, QString to, QString subject, QString body)
{
    QString message = "From: " + from + "\r\n"
                          "To: " + to + "\r\n"
                          "Subject: " + subject + "\r\n"
                          "\r\n"
                          + body;

        // Create the TCP socket
        QTcpSocket socket;
        socket.connectToHost("smtp.gmail.com", 587, QIODevice::ReadWrite);

        if (!socket.waitForConnected(5000))
        {
            qDebug() << "Could not connect to the server";
            return;
        }
        else
        {

        // Initiate SSL/TLS encryption
        QSslSocket sslSocket;
        sslSocket.setProtocol(QSsl::TlsV1_2);

        sslSocket.setSocketDescriptor(socket.socketDescriptor());
        if (!sslSocket.waitForEncrypted(5000))
        {
            qDebug() << "Could not establish SSL/TLS connection";
            return;
        }

        // Send the email
        QByteArray byteArray;
        byteArray.append("EHLO localhost\r\n");
        byteArray.append("AUTH LOGIN\r\n");
        byteArray.append(QByteArray().append(from.toUtf8().toBase64()) + "\r\n");
        byteArray.append(QByteArray().append("ytkypczntyaotvzg").toBase64() + "\r\n");
        byteArray.append("MAIL FROM:<" + from + ">\r\n");
        byteArray.append("RCPT TO:<" + to + ">\r\n");
        byteArray.append("DATA\r\n");
        byteArray.append(message.toUtf8());
        byteArray.append("\r\n.\r\n");
        byteArray.append("QUIT\r\n");

        sslSocket.write(byteArray);
        sslSocket.waitForBytesWritten();
        sslSocket.waitForReadyRead();
        qDebug() << sslSocket.readAll();
        sslSocket.close();}
}

mdp_oublie::~mdp_oublie()
{
    delete ui;
}



void mdp_oublie::on_pushButton_9_clicked()
{
        QString from = ui->fromLineEdit->text();
        QString to = ui->toLineEdit->text();
        QString subject = ui->subjectLineEdit->text();
        QString body = ui->bodyTextEdit->toPlainText();

        // Call the sendMail function
        sendMail(from, to, subject, body);
}
