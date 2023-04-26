#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <map>
#include <QTcpServer>
#include <QTcpSocket>

class Chatserver: public QObject
{
     Q_OBJECT
public:
    Chatserver(QObject *parent = nullptr);
    void start();
private slots:
    void onNewConnection();
    void onReadyRead();
    void onDisconnected();
    void newMessageReceived(QString sender, QString recipient, QString message);
private:
    QTcpServer m_server;
    std::map<QString, QTcpSocket*> m_employees;
};

#endif // CHATSERVER_H
