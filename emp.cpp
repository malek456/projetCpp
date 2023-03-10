#include "emp.h"
#include "ui_emp.h"
#include "menu.h"
#include "employe.h"
#include <QMessageBox>


emp::emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emp)
{
    ui->setupUi(this);
    ui->tableView->setModel(Emp.afficher());


    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from GS_EMPLOYÉ");



    model->insertColumn(model->columnCount());
    model->setHeaderData(model->columnCount() - 1, Qt::Horizontal, QObject::tr("ACTION"));

        // Add the delete button to each row



    //QPushButton *button = new QPushButton("supp");
    // Create and set up the menu button
    menuButton = new QPushButton("", this);
    menuButton->setGeometry(20, 31, 71, 41);
    QIcon icon(":/new/prefix1/icons/menu.png");
    menuButton->setIcon(icon);

    // resize the icon to fit the button
    menuButton->setIconSize(QSize(40, 40));

    // Create and set up the side bar
    side_menu = new QWidget(this);
    side_menu->setGeometry(120, 20, 0, 60);
    side_menu->setStyleSheet(" background-color: rgb(0,0,0); border:1px solid rgb(0,0,0);");

    //create buttons

    QPushButton *button1 = new QPushButton("statistique", side_menu);
    QPushButton *button3 = new QPushButton("PDF", side_menu);
    QPushButton *button4 = new QPushButton("chat", side_menu);
    button1->setGeometry(600, 5, 111, 45);
    button3->setGeometry(760, 2, 111, 60);
    button4->setGeometry(880, 7, 111, 46);
    button1->setStyleSheet("background-color:  rgb(0, 0, 0); color:rgb(255,255,255)");
    button3->setStyleSheet("background-color:  rgb(0, 0, 0); color:rgb(255,255,255)");
    button4->setStyleSheet("background-color:  rgb(0, 0, 0); color:rgb(255,255,255)");

    QIcon icon_b4(":/new/prefix1/icons/chat.png");
    button4->setIcon(icon_b4);
    button4->setIconSize(QSize(60, 40));

    QIcon icon_b1(":/new/prefix1/icons/stat.png");
    button1->setIcon(icon_b1);
    button1->setIconSize(QSize(60, 40));

    QIcon icon_b3(":/new/prefix1/icons/pdf1.png");
    button3->setIcon(icon_b3);
    button3->setIconSize(QSize(50, 50));



    // Create the QPropertyAnimation object


    sideBarAnimation = new QPropertyAnimation(side_menu, "geometry");

    // Connect the menu button's clicked() signal to the toggleSideBar() slot
    connect(menuButton, &QPushButton::clicked, this, &emp::on_pushButton_13_clicked);
}

void emp::on_pushButton_13_clicked()
{
    if (side_menu->width() < 1 ) {
        // If the side bar is currently hidden, animate it into view
        sideBarAnimation->setDuration(500);
        sideBarAnimation->setEasingCurve(QEasingCurve::OutQuad);
        sideBarAnimation->setEndValue(QRect(120, 20, 1000, 60));
        sideBarAnimation->start();
    } else {
        // If the side bar is currently visible, animate it out of view
        sideBarAnimation->setDuration(500);
        sideBarAnimation->setEasingCurve(QEasingCurve::OutQuad);
        sideBarAnimation->setEndValue(QRect(120, 20, 0, 60));
        sideBarAnimation->start();
    }
}

emp::~emp()
{
    delete ui;
}


void emp::on_pushButton_5_clicked()
{
   menu m;
   m.setModal(true);
   m.exec();
}



void emp::on_ajouter_clicked()
{

    int CIN = ui->lineEdit_cin->text().toInt();
    int num= ui->lineEdit_num->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_pre->text();
    QString adresse= ui->lineEdit_add->text();
    QString mail= ui->lineEdit_mail->text();
    QString fonction= ui->lineEdit_fct->text();
    QString mdp= ui->lineEdit_mdp->text();
    employe e(CIN,nom,prenom,num,adresse,mail,fonction,mdp);
    bool test=e.ajouter();
    if(test)
    {

        ui->tableView->setModel(Emp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("ajout effectué.\n"
                                             "Click cancel to exit"),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                               QObject::tr("ajout non effectué.\n"
                              "Click  cancel to exit"),QMessageBox::Cancel);
    }

}

void emp::on_supprimer_clicked()
{

    int CIN=ui->lineEdit_cin->text().toInt();
    bool test=Emp.supprimer(CIN);
    if(test)
    {

        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("suppression effectué.\n"
                                             "Click cancel to exit"),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                               QObject::tr("suppression non effectué.\n"
                              "Click  cancel to exit"),QMessageBox::Cancel);
    }
}




emp::emp(int cin, QString nom, QString pre, int num,  QString add, QString mail, QString fctn, QString mdp)
{
    this->CIN=cin;
    this->nom = nom;
    this->prenom = pre;
    this->num = num;
    this->adresse = add;
    this->mail = mail;
    this->fonction = fctn;
    this->mdp = mdp;

}

bool emp::ajouter()
{
   QSqlQuery query;
   QString c = QString::number(CIN);
   QString n = QString::number(num);
   query.prepare("INSERT INTO GS_EMPLOYÉ (CIN,NOM,PRENOM,NUM_TEL,ADRESSE,MAIL,FONCTION,MOT_DE_PASSE)" "values (:CIN, :nom, :prenom, :num, :adresse, :mail, :fonction, :mdp)");
   query.bindValue(":CIN",c);
   query.bindValue(":nom",nom);
   query.bindValue(":prenom",prenom);
   query.bindValue(":num",num);
   query.bindValue(":adresse",adresse);
   query.bindValue(":mail",mail);
   query.bindValue(":fonction",fonction);
   query.bindValue(":mdp",mdp);
   return query.exec();

}

QSqlQueryModel *emp::afficher()
{


    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_EMPLOYÉ");
    model->insertColumn(model->columnCount());
    model->setHeaderData(model->columnCount() - 1, Qt::Horizontal, QObject::tr("ACTION"));

    for (int row = 0; row < model->rowCount(); ++row)
    {
        QPushButton* deleteButton = new QPushButton("Delete");
        connect(deleteButton, &QPushButton::clicked, [=](){
            int cin = model->data(model->index(row, 0)).toInt();
            employe  e;
            e.supprimer(cin);
            model->setQuery("select * from GS_EMPLOYÉ");
        });

        ui->tableView->setIndexWidget(model->index(row, model->columnCount() - 1), deleteButton);
    }


    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("NUM_TEL"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ADRESSE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("MAIL"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("MOT_DE_PASSE"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("FONCTION"));
   // model->setHeaderData(8,Qt::Horizontal,QObject::tr("ACTION"));
    return  model;
}

bool employe::supprimer(int cin)
{
    QSqlQuery query;
    QString c=QString::number(cin);
    query.prepare("Delete from GS_EMPLOYÉ where CIN= :cin");
    query.bindValue(":cin",c);
    return  query.exec();
}








