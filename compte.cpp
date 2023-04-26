#include "compte.h"
#include "ui_compte.h"
#include <QSqlQuery>
#include <QString>
#include "global.h"
 
Compte::Compte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Compte)
{
    ui->setupUi(this);

       QString username = g_loginInfo.username;
       QString password = g_loginInfo.password;

       // Query the database for the user's information
       QSqlQuery query;
       query.prepare("SELECT nom, prenom, mail, num_tel, cin FROM GS_EMPLOYÉ WHERE nom = :username AND mot_de_passe = :password");
       query.bindValue(":username", username);
       query.bindValue(":password", password);
       query.exec();

       if (query.next()) {
           QString nom = query.value(0).toString();
           QString prenom = query.value(1).toString();
           QString mail = query.value(2).toString();
           QString numero_tel = query.value(3).toString();
           QString cin = query.value(4).toString();

           // Display the user's information in the UI
           ui->label_nom->setText(nom);
           ui->label_prenom->setText(prenom);
           ui->label_mail->setText(mail);
           ui->label_numero->setText(numero_tel);
           ui->label_cin->setText(cin);
       }
}

Compte::~Compte()
{
    delete ui;
}
