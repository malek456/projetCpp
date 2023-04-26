#include "chatserver.h"
#include <QDataStream>
#include <QUuid>
#include "employe.h" 
#include <QDateTime>

Chatserver::Chatserver(QObject *parent)
    : QObject(parent)
{
    connect(&m_server, &QTcpServer::newConnection, this, &Chatserver::onNewConnection);
}

void Chatserver::start()
{
    if (!m_server.listen(QHostAddress::Any, 1234)) {
        qDebug() << "Failed to start server:" << m_server.errorString();
    } else {
        qDebug() << "Server started";
    }
}

void Chatserver::onNewConnection()
{
    QTcpSocket *employee = m_server.nextPendingConnection();
    QString empId = QUuid::createUuid().toString();
    m_employees[empId] = employee;
    connect(employee, &QTcpSocket::readyRead, this, &Chatserver::onReadyRead);
    connect(employee, &QTcpSocket::disconnected, this, &Chatserver::onDisconnected);
    qDebug() << "Client connected:" << empId;
}

void Chatserver::onReadyRead()
{
    QTcpSocket *client = static_cast<QTcpSocket*>(sender());
    QString clientId = "";
    for (auto it = m_employees.begin(); it != m_employees.end(); ++it) {
        if (it->second == client) {
            clientId = it->first;
            break;
        }
    }
    QByteArray data = client->readAll();
    QDataStream stream(data);
    QString recipient;
    QString message;
    stream >> recipient >> message;
    qDebug() << "Received message from" << clientId << "to" << recipient << ":" << message;
    if (m_employees.count(recipient) > 0) {
        m_employees[recipient]->write(data);
    }
}

void Chatserver::onDisconnected()
{
    QTcpSocket *client = static_cast<QTcpSocket*>(sender());
    QString clientId = "";
    for (auto it = m_employees.begin(); it != m_employees.end(); ++it) {
        if (it->second == client) {
            clientId = it->first;
            break;
        }
    }
    m_employees.erase(clientId);
    qDebug() << "Client disconnected:" << clientId;
}

void Chatserver::newMessageReceived(QString sender, QString recipient, QString message)
{
    // Search for the recipient in the client list
    /*for (auto employee : m_employees) {
        if (employe->getNom() == recipient) {
            // If the recipient is found, send the message to them
            employee->sendMessage(sender, message);
            return;
        }
    }

    // If the recipient is not found, store the message in the database
    QSqlQuery query;
    query.prepare("INSERT INTO messages (sender, recipient, message, timestamp) "
                  "VALUES (:sender, :recipient, :message, :timestamp)");
    query.bindValue(":sender", sender);
    query.bindValue(":recipient", recipient);
    query.bindValue(":message", message);
    query.bindValue(":timestamp", QDateTime::currentDateTime().toMSecsSinceEpoch());
    if (!query.exec()) {
        qWarning() << "Error: Could not store message in database";
    }*/
}

