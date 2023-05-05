#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "emp.h"
#include "controle.h"

QString myGlobalVariable;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_9_clicked()
{
    menu m;
    m.setModal(true);
    m.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    emp e;
    e.setModal(true);
    e.exec();
}
