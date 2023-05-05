#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "emp.h"
#include "employe.h"
#include "QMessageBox"
#include "global.h"
#include "mdp_oublie.h"

QString idEquipement;

QString myGlobalVariable;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validateEmployee(QString name, QString password) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM GS_EMPLOYÉ WHERE nom = ? AND mot_de_passe = ?");
    query.addBindValue(name);
    query.addBindValue(password);
    query.exec();

    if (query.next()) {
        int count = query.value(0).toInt();
        if (count == 1) {
            return true;
        }
    }
    return false;
}


void MainWindow::on_pushButton_9_clicked()
{

     QString name = ui->lineEdit_nom->text();
     QString password = ui->lineEdit_mdp->text();
     g_loginInfo.username = ui->lineEdit_nom->text();
     g_loginInfo.password = ui->lineEdit_mdp->text();
     if (validateEmployee(name, password))
     {
          menu m;
          m.setModal(true);
          m.exec();
            // Allow access to the application
     } else
     {
          QMessageBox::warning(this, "Error", "Invalid name or password.");
            // Deny access to the application
     }

}

void MainWindow::on_pushButton_8_clicked()
{
    mdp_oublie e;
    e.setModal(true);
    e.exec();
}

void MainWindow::on_checkBox_stateChanged(int state)
{
    if (state == Qt::Checked) {
            ui->lineEdit_mdp->setEchoMode(QLineEdit::Normal);
        } else {
            ui->lineEdit_mdp->setEchoMode(QLineEdit::Password);
        }
}
