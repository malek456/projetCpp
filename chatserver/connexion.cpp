#include "connexion.h"

connexion::connexion()
{

}

bool connexion::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
    db.setDatabaseName("test-bd");
    db.setUserName("Divin");
    db.setPassword("Divin1020");
    if(db.open())
        test=true;
    return test;
}

void connexion::closeConnection()
{
    db.close();
}
