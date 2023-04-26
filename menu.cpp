#include "menu.h"
#include "ui_menu.h"
/*#include "client.h"
#include "vehicule.h"
#include "equi.h"
#include "rendv.h"*/
#include "emp.h"
#include "equi.h"
#include "global.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);

    QString username = g_loginInfo.username;
    QString password = g_loginInfo.password;

        // Query the database for the user's information
        QSqlQuery query;
        query.prepare("SELECT fonction FROM GS_EMPLOYÉ WHERE nom = :username AND mot_de_passe = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.exec();

        if (query.next()) {

            QString fonction = query.value(0).toString();

            if(fonction=="Inspecteur")
            {
                ui->pushButton_emp->setEnabled(false);
                ui->pushButton_cl->setEnabled(false);
                ui->pushButton_eq->setEnabled(false);
                ui->pushButton_rdv->setEnabled(false);
                ui->pushButton_veh->setEnabled(true);

            }
            if(fonction=="Technicien")
            {
                ui->pushButton_emp->setEnabled(false);
                ui->pushButton_cl->setEnabled(false);
                ui->pushButton_eq->setEnabled(true);
                ui->pushButton_rdv->setEnabled(false);
                ui->pushButton_veh->setEnabled(true);
            }
            if(fonction=="Receptionniste")
            {
                ui->pushButton_emp->setEnabled(true);
                ui->pushButton_cl->setEnabled(true);
                ui->pushButton_eq->setEnabled(false);
                ui->pushButton_rdv->setEnabled(true);
                ui->pushButton_veh->setEnabled(false);
            }
            if(fonction=="PersonnelAdmin")
            {
                ui->pushButton_emp->setEnabled(true);
                ui->pushButton_cl->setEnabled(false);
                ui->pushButton_eq->setEnabled(true);
                ui->pushButton_rdv->setEnabled(false);
                ui->pushButton_veh->setEnabled(false);
            }
            }
}

menu::~menu()
{
    delete ui;
}




void menu::on_pushButton_emp_clicked()
{
    emp e;
    e.setModal(true);
    e.exec();
    e.hide();
}

void menu::on_pushButton_cl_clicked()
{
    emp e;
    e.setModal(true);
    e.exec();
}

void menu::on_pushButton_eq_clicked()
{
    Equi e;
    e.setModal(true);
    e.exec();
    e.hide();

}

void menu::on_pushButton_rdv_clicked()
{
    Equi e;
    e.setModal(true);
    e.exec();

}

void menu::on_pushButton_veh_clicked()
{
    Equi e;
    e.setModal(true);
    e.exec();

}
