#include "vehicule.h"
#include "ui_vehicule.h"
#include "menu.h"

vehicule::vehicule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vehicule)
{
    ui->setupUi(this);

    // Create and set up the menu button
    menuButton = new QPushButton("", this);
    menuButton->setGeometry(20, 43, 71, 41);
    QIcon icon(":/new/prefix1/icons/menu.png");
    menuButton->setIcon(icon);

    // resize the icon to fit the button
    menuButton->setIconSize(QSize(40, 40));

    // Create and set up the side bar
    side_menu = new QWidget(this);
    side_menu->setGeometry(120, 40, 0, 50);
    side_menu->setStyleSheet(" background-color: rgb(0,0,0); border:1px solid rgb(0,0,0);");

    //create buttons
    QPushButton *button1 = new QPushButton("controle technique", side_menu);
    QPushButton *button2 = new QPushButton("importation image", side_menu);
    QPushButton *button3 = new QPushButton("statistique", side_menu);
    QPushButton *button4 = new QPushButton("exportation PDF", side_menu);
    button1->setGeometry(100, 2, 111, 45);
    button2->setGeometry(220, 2, 111, 45);
    button3->setGeometry(340, 2, 111, 46);
    button4->setGeometry(460, 2, 111, 46);
    button1->setStyleSheet("background-color:  rgb(172, 172, 172)");
    button2->setStyleSheet("background-color:  rgb(172, 172, 172);");
    button3->setStyleSheet("background-color:  rgb(172, 172, 172);");
    button4->setStyleSheet("background-color:  rgb(172, 172, 172);");


    // Create the QPropertyAnimation object


    sideBarAnimation = new QPropertyAnimation(side_menu, "geometry");

    // Connect the menu button's clicked() signal to the toggleSideBar() slot
    connect(menuButton, &QPushButton::clicked, this, &vehicule::on_pushButton_13_clicked);
}

vehicule::~vehicule()
{
    delete ui;
}

void vehicule::on_pushButton_13_clicked()
{
    if (side_menu->width() < 1 ) {
        // If the side bar is currently hidden, animate it into view
        sideBarAnimation->setDuration(500);
        sideBarAnimation->setEasingCurve(QEasingCurve::OutQuad);
        sideBarAnimation->setEndValue(QRect(120, 40, 821, 50));
        sideBarAnimation->start();
    } else {
        // If the side bar is currently visible, animate it out of view
        sideBarAnimation->setDuration(500);
        sideBarAnimation->setEasingCurve(QEasingCurve::OutQuad);
        sideBarAnimation->setEndValue(QRect(120, 40, 0, 50));
        sideBarAnimation->start();
    }
}

void vehicule::on_pushButton_clicked()
{
    menu m;
    m.setModal(true);
    m.exec();
}
