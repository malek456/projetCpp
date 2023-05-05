#include "emp.h"
#include "ui_emp.h"
#include "menu.h"
#include "employe.h"
#include "compte.h"
#include "chat.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QChart>
#include <QVBoxLayout>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include"doorlock.h"


emp::emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emp)
{
    ui->setupUi(this);
    ui->tableView->setModel(Emp.afficher());


    //controle de saisie
    ui->lineEdit_cin->setValidator(new QIntValidator(0,99999,this));
    ui->lineEdit_num->setValidator(new QIntValidator(0,99999,this));

    QRegularExpression regExp_n("^[a-zA-Z]+$");
    QValidator *validator_n = new QRegularExpressionValidator(regExp_n, this);
    ui->lineEdit_nom->setValidator(validator_n);

    QRegularExpression regExp_p("^[a-zA-Z]+$");
    QValidator *validator_p = new QRegularExpressionValidator(regExp_p, this);
    ui->lineEdit_pre->setValidator(validator_p);

    QRegularExpression regExp_a("^[A-Za-z0-9_]+$");
    QValidator *validator_a = new QRegularExpressionValidator(regExp_a, this);
    ui->lineEdit_add->setValidator(validator_a);

    /*QRegularExpression regExp_m("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QValidator *validator_m = new QRegularExpressionValidator(regExp_m, this);
    ui->lineEdit_mail->setValidator(validator_m);*/

    QRegularExpression regExp_pass("^(?=.*[a-z])(?=.*[A-Z])(?!.*\\s).{8,}$");
    QValidator *validator_pass = new QRegularExpressionValidator(regExp_pass, this);
    ui->lineEdit_mdp->setValidator(validator_pass);


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

    ui->valider->setEnabled(false);
    ui->annuler->setEnabled(false);

    //create buttons

    QPushButton *button1 = new QPushButton("statistique", side_menu);
    QPushButton *button3 = new QPushButton("PDF", side_menu);
    QPushButton *button4 = new QPushButton("chat", side_menu);
    button1->setGeometry(50, 5, 111, 45);
    button3->setGeometry(210, 2, 111, 60);
    button4->setGeometry(330, 7, 111, 46);
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
    connect(button3,&QPushButton::clicked, this,&emp::on_pushButton_pdf);
    connect(button4,&QPushButton::clicked,this,&emp::on_pushButton_chat);
    connect(button1,&QPushButton::clicked,this,&emp::on_pushButton_stat);



}





void emp::on_pushButton_pdf()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "PDF Files (*.pdf)");

        if (fileName.isEmpty())
            return;

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);

        QPainter painter(&printer);
        painter.setRenderHint(QPainter::Antialiasing, true);

        // Dessiner le logo
        QPixmap logo(":/new/prefix1/icons/logo.png");
        int logoWidth = 60; // Largeur souhaitée pour le logo
        int logoHeight = logoWidth * logo.height() / logo.width(); // Hauteur correspondante pour conserver les proportions d'origine
        QPixmap scaledLogo = logo.scaled(logoWidth, logoHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Redimensionnement du logo
        painter.drawPixmap(20, 20, scaledLogo);
        // Dessiner le titre
        QFont titleFont("Arial", 12, QFont::Normal);
        painter.setFont(titleFont);
        painter.drawText(250, 100, "Liste des employés");

        // Dessiner le contenu du tableView
        QAbstractItemModel *model = ui->tableView->model();
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();

        for (int row = 0; row < rowCount; row++) {
            for (int column = 0; column < columnCount; column++) {
                QModelIndex index = model->index(row, column);
                QString text = model->data(index, Qt::DisplayRole).toString();
                painter.drawText(50 + column * 120, 150 + row * 20, text);
            }
        }

        painter.end();

        QMessageBox::information(this, "PDF Export", "PDF exported to " + fileName);
}

void emp::on_pushButton_13_clicked()
{
    if (side_menu->width() < 1 ) {
        // If the side bar is currently hidden, animate it into view
        sideBarAnimation->setDuration(500);
        sideBarAnimation->setEasingCurve(QEasingCurve::OutQuad);
        sideBarAnimation->setEndValue(QRect(120, 20, 500, 60));
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
    QString fonction= ui->lineEdit_fct->currentText();
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
        //ui->lineEdit_fct->clear();
        ui->lineEdit_mdp->clear();


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
        int cin = QInputDialog::getInt(this, tr("Modifier employé"),
                                        tr("ID de l'employé:"), 0, 0, 100000, 1, &ok);
        if (ok)
        {
            ui->lineEdit_cin->setText(QString::number(cin));
            QSqlQuery query;
            query.prepare("SELECT NOM, PRENOM, NUM_TEL, ADRESSE, MAIL, FONCTION, MOT_DE_PASSE FROM GS_EMPLOYÉ WHERE CIN = :CIN");
            query.bindValue(":CIN", cin);
            if (query.exec() && query.next()) {
                ui->lineEdit_nom->setText(query.value(0).toString());
                ui->lineEdit_pre->setText(query.value(1).toString());
                ui->lineEdit_num->setText(query.value(2).toString());
                ui->lineEdit_add->setText(query.value(3).toString());
                ui->lineEdit_mail->setText(query.value(4).toString());
                ui->lineEdit_fct->setCurrentText(query.value(5).toString());
                ui->lineEdit_mdp->setText(query.value(6).toString());

                ui->valider->setEnabled(true);
                ui->annuler->setEnabled(true);
                ui->modifier->setEnabled(false);
                ui->lineEdit_cin->setEnabled(false);
            }
            else {
                QMessageBox::warning(this, tr("Modification échouée"),
                                     tr("L'employé avec CIN %1 n'existe pas.").arg(cin));
            }
        }

}

void emp::on_valider_clicked()
{
    //int cin= on_modifier_clicked();
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Validation de modification", "Êtes-vous sûr de vouloir modifier cet employé ?",
                                        QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {

            int cin = ui->lineEdit_cin->text().toInt();
            QString nom = ui->lineEdit_nom->text();
            QString prenom = ui->lineEdit_pre->text();
            int num = ui->lineEdit_num->text().toInt();
            QString adresse = ui->lineEdit_add->text();
            QString mail = ui->lineEdit_mail->text();
            QString fonction = ui->lineEdit_fct->currentText();
            QString mdp = ui->lineEdit_mdp->text();

            if (Emp.modifier(cin, nom, prenom, num, adresse, mail, fonction, mdp))
            {
                QMessageBox::information(this,"Modification réussie","Les données de l'employé ont été modifiées avec succès");
                ui->valider->setEnabled(false);
                ui->annuler->setEnabled(false);
                ui->modifier->setEnabled(true);
                ui->tableView->setModel(Emp.afficher());

                //on_afficher_employe_clicked();
            }
            else
            {
                QMessageBox::warning(this,"Modification échouée","Une erreur est survenue lors de la modification des données de l'employé");
            }
        } else {
            ui->valider->setEnabled(false);
            ui->annuler->setEnabled(false);
            ui->modifier->setEnabled(true);

        }
        ui->lineEdit_nom->clear();
        ui->lineEdit_pre->clear();
        ui->lineEdit_num->clear();
        ui->lineEdit_add->clear();
        ui->lineEdit_mail->clear();
        //ui->lineEdit_fct->clear();
        ui->lineEdit_mdp->clear();
        ui->lineEdit_cin->clear();
        ui->lineEdit_cin->setEnabled(true);

}

void emp::on_recherche_2_textChanged()
{
        QSqlTableModel *model = new QSqlTableModel(this);
        model->setTable("GS_EMPLOYÉ");
        Emp.searchEmployee(model, ui->comboBox_search_by, ui->recherche_2);
        ui->tableView->setModel(model);
}


void emp::on_comboBox_order_sort_currentTextChanged()
{
    Emp.sortEmployee(qobject_cast<QSqlQueryModel*>(ui->tableView->model()), ui->comboBox_sort_by, ui->comboBox_order_sort);
}



void emp::on_pushButton_chat()
{

    //bool ok;
    //QString id = QInputDialog::getText(this, tr("Enter ID"),
      //                                  tr("ID of row to chat:"), QLineEdit::Normal,
        //                                "", &ok);
   // if (ok)
    //{
        m_chatWindow.setModal(true);
        m_chatWindow.exec();
    //}



}

void emp::showStatistics(QWidget *parent, QChartView *chartView)
{
    QSqlQuery query("SELECT fonction, COUNT(*) FROM GS_EMPLOYÉ GROUP BY fonction");
        QMap<QString, int> data;
        while (query.next()) {
            QString fonction = query.value(0).toString();
            int count = query.value(1).toInt();
            data[fonction] = count;
        }

        // Create a pie series with the data
        QPieSeries *series = new QPieSeries();
        for (auto it = data.begin(); it != data.end(); ++it) {
            series->append(it.key(), it.value());
        }

        // Create a chart and add the series
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistics by Function");

        // Set the chart as the central widget of the chart view
        chartView->setChart(chart);

        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->setFixedSize(350, 300); // set fixed size

        QVBoxLayout *layout = new QVBoxLayout(parent);
        layout->addWidget(chartView);



}

void emp::on_pushButton_stat()
{
   QChartView *chartView = new QChartView();

   // Show the statistics in the existing widget
   showStatistics(ui->widget_3, chartView);

   // Set the chart view as the central widget of the existing widget
   QVBoxLayout *layout = new QVBoxLayout(ui->widget_3);
   layout->addWidget(chartView);

}


void emp::updateChart(QChartView *chartView)
{
    QSqlQuery query("SELECT fonction, COUNT(*) FROM GS_EMPLOYÉ GROUP BY fonction");
        QMap<QString, int> data;
        while (query.next()) {
            QString fonction = query.value(0).toString();
            int count = query.value(1).toInt();
            data[fonction] = count;
        }

        // Update the pie series with the new data
        QPieSeries *series = new QPieSeries();
        for (auto it = data.begin(); it != data.end(); ++it) {
            series->append(it.key(), it.value());
        }

        // Update the chart with the new series
        chartView->chart()->removeAllSeries();
        chartView->chart()->addSeries(series);
        chartView->chart()->setTitle("Statistics by Function");
}


void emp::on_pushButton_2_clicked()
{
    QChartView *chartView = ui->widget_3->findChild<QChartView *>();

   // Update the chart view with the new data
   updateChart(chartView);
}

void emp::on_refresh_clicked()
{
    QChartView *chartView = ui->widget_3->findChild<QChartView *>();

   // Update the chart view with the new data
   updateChart(chartView);
}

void emp::on_pushButton_7_clicked()
{
    Compte c;
    c.setModal(true);
    c.exec();
}

void emp::on_pushButton_8_clicked()
{
    Compte c;
    c.setModal(true);
    c.exec();
}

void emp::on_pushButton_16_clicked()
{
    DoorLock d;
    d.setModal(true);
    d.exec();
}
