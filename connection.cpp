#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("youssra");//inserer nom de l'utilisateur
db.setPassword("esprit12");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}


void Connection::closeconnection()
{db.close();}
