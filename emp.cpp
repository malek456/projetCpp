#include "emp.h"
#include "ui_emp.h"
#include "menu.h"
#include "employe.h"
#include <QMessageBox>
#include <QInputDialog>


emp::emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emp)
{
    ui->setupUi(this);
    ui->tableView->setModel(Emp.afficher());

    //controle de saisie
    ui->lineEdit_cin->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_num->setValidator(new QIntValidator(0,99999999,this));

    QRegularExpression regExp_n("^[a-zA-Z]+$");
    QValidator *validator_n = new QRegularExpressionValidator(regExp_n, this);
    ui->lineEdit_nom->setValidator(validator_n);

    QRegularExpression regExp_p("^[a-zA-Z]+$");
    QValidator *validator_p = new QRegularExpressionValidator(regExp_p, this);
    ui->lineEdit_pre->setValidator(validator_p);

    QRegularExpression regExp_a("^[A-Za-z0-9_]+$");
    QValidator *validator_a = new QRegularExpressionValidator(regExp_a, this);
    ui->lineEdit_pre->setValidator(validator_a);

    QRegularExpression regExp_m("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QValidator *validator_m = new QRegularExpressionValidator(regExp_m, this);
    ui->lineEdit_mail->setValidator(validator_m);

    QRegularExpression regExp_pass("^(?=.*[a-z])(?=.*[A-Z])(?!.*\\s).{8,}$");
    QValidator *validator_pass = new QRegularExpressionValidator(regExp_pass, this);
    ui->lineEdit_mail->setValidator(validator_pass);


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

void emp::tester( QSqlQueryModel * model)
{

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
}




void emp::on_ajouter_clicked()
{
    // Get the data for the new employee from the user interface
    int CIN = ui->lineEdit_cin->text().toInt();
    int num= ui->lineEdit_num->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_pre->text();
    QString adresse= ui->lineEdit_add->text();
    QString mail= ui->lineEdit_mail->text();
    QString fonction= ui->lineEdit_fct->text();
    QString mdp= ui->lineEdit_mdp->text();

    // Create a new employee object and add it to the database
    employe e(CIN, nom, prenom, num, adresse, mail, fonction, mdp);
    bool test = e.ajouter();

    if(test)
    {
        // Update the table view with the new data and action buttons
        QSqlQueryModel *model = Emp.afficher();
        QTableView *tableView = ui->tableView;
        tableView->setModel(model);

        ui->lineEdit_cin->clear();
        ui->lineEdit_num->clear();
        ui->lineEdit_nom->clear();
        ui->lineEdit_pre->clear();
        ui->lineEdit_add->clear();
        ui->lineEdit_mail->clear();
        ui->lineEdit_fct->clear();
        ui->lineEdit_mdp->clear();

        /*for (int row = 0; row < model->rowCount(); row++)
        {
            QPushButton *button = new QPushButton("", tableView);
            button->setFixedSize(30, 30); // Set the size of the button to 50x50 pixels

            QIcon icon_d(":/new/prefix1/icons/delete.png");
            button->setIcon(icon_d);
            button->setIconSize(QSize(30, 30));

            QModelIndex index = model->index(row, model->columnCount() - 1);
            tableView->setIndexWidget(index, button);
        }

        // Adjust the column width to make the button visible
        tableView->horizontalHeader()->setSectionResizeMode(model->columnCount() - 1, QHeaderView::Fixed);
        tableView->setColumnWidth(model->columnCount() - 1, 60); // Increase the column width to 60 pixels*/

        // Show a success message box
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("ajout effectué.\n"
                                             "Click cancel to exit"),QMessageBox::Cancel);
    }
    else
    {
        // Show an error message box
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                               QObject::tr("ajout non effectué.\n"
                              "Click  cancel to exit"),QMessageBox::Cancel);
    }
}



void emp::on_supprimer_clicked()
{

    bool ok;
    QString id = QInputDialog::getText(this, tr("Enter ID"),
                                        tr("ID of row to delete:"), QLineEdit::Normal,
                                        "", &ok);
    if (!ok || id.isEmpty())
    {
        return;
    }
    int cin = id.toInt();


    bool test = Emp.supprimer(cin);
    if (test)
    {
        ui->tableView->setModel(Emp.afficher());
        QMessageBox::information(nullptr, tr("OK"), tr("Suppression effectuée."));
    }
    else
    {
        QMessageBox::critical(nullptr, tr("Erreur"), tr("Suppression non effectuée."));
    }
}






void emp::on_modifier_clicked()
{
    bool ok;
        int CIN = QInputDialog::getInt(this, tr("Modifier employé"),
                                        tr("ID de l'employé:"), 0, 0, 100000, 1, &ok);
        if (ok)
        {

            bool test = Emp.modifier(CIN);
            if (ok) {



                // retrieve the model from the table view
                           QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView->model());
                           if (model)
                           {
                               // update the data in the model
                               model->setQuery("SELECT * FROM GS_EMPLOYÉ");
                           }

            }
            if (test)
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                                         QObject::tr("Modification effectuée.\n"
                                                     "Click cancel to exit"), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                        QObject::tr("Modification non effectuée.\n"
                                                    "Click cancel to exit"), QMessageBox::Cancel);
            }
        }
}
