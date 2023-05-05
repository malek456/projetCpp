<<<<<<< HEAD

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlTableModel>
#include <QInputDialog>
#include "chatserver.h"
=======
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

>>>>>>> ef6cff13084a63205f2f068ae3f07fd6316c0c84

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
<<<<<<< HEAD

    ui->setupUi(this);
    ui->tableView->setModel(afficher());

=======
    ui->setupUi(this);
    ui->lineEdit_mdp->setEchoMode(QLineEdit::Password);
>>>>>>> ef6cff13084a63205f2f068ae3f07fd6316c0c84
}

MainWindow::~MainWindow()
{
    delete ui;
}

<<<<<<< HEAD
void MainWindow::addMessage(QString Msg)
{
    ui->textEditStatus->append(Msg);
}

void MainWindow::addLine(QString Msg)
{
    ui->textEdit->append(Msg);
}


void MainWindow::on_pushButtonStart_clicked()
{
    m_pBoxServer = new chatserver(this);
    bool success = m_pBoxServer->listen(QHostAddress::Any,quint16(ui->textEditPort->toPlainText().toInt()));
    if(!success)
    {
        addMessage("Server failed...");
    }
    else
    {
        addMessage("Server Started...");
    }
}

QSqlQueryModel* MainWindow::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select CIN,NOM from GS_EMPLOYÉ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));

        return  model;
=======
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
>>>>>>> ef6cff13084a63205f2f068ae3f07fd6316c0c84
}
