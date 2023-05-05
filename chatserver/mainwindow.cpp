
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlTableModel>
#include <QInputDialog>
#include "chatserver.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView->setModel(afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

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
}
