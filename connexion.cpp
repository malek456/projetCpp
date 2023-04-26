#include "connexion.h"
#include "ui_connexion.h"

connexion::connexion(QWidget *parent) : 
    QDialog(parent),
    ui(new Ui::connexion)
{
    ui->setupUi(this);
}

connexion::~connexion()
{
    delete ui;
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
