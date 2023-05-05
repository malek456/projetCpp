#include "connexion.h"

connexion::connexion()
{

}

bool connexion::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
    db.setDatabaseName("projet");
    db.setUserName("projet");
    db.setPassword("projet");
    if(db.open())
        test=true;
    return test;
}

void connexion::closeConnection()
{
    db.close();
}
