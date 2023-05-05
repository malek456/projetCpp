#include "equi.h" 
#include "ui_equi.h"

Equi::Equi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Equi)
{
    ui->setupUi(this);
}

Equi::~Equi()
{
    delete ui;
}
