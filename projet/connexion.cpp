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
