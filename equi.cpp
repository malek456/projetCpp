#include "equi.h"
#include "ui_equi.h" 
#include "menu.h"
#include "equipement.h"
#include <QDate>
#include <QMessageBox>
#include <QInputDialog>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include <QLabel>
#include <QChart>
#include <QVBoxLayout>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QSqlTableModel>
#include <QTableView>
#include "mainwindow.h"



Equi::Equi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Equi)
{
    ui->setupUi(this);
    ui->tableView->setModel(eq.afficher());



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
    QPushButton *button1 = new QPushButton("Notification", side_menu);
    QPushButton *button2 = new QPushButton("Code QR", side_menu);
    QPushButton *button3 = new QPushButton("Statistique", side_menu);
    QPushButton *button4 = new QPushButton("Exportation PDF", side_menu);
    button1->setGeometry(100, 2, 111, 45);
    button2->setGeometry(220, 2, 111, 45);
    button3->setGeometry(340, 2, 111, 46);
    button4->setGeometry(460, 2, 111, 46);
    button1->setStyleSheet("background-color: rgb(172, 172, 172);");
    button2->setStyleSheet("background-color: rgb(172, 172, 172);");
    button3->setStyleSheet("background-color: rgb(172, 172, 172);");
    button4->setStyleSheet("background-color: rgb(172, 172, 172);");


    // Create the QPropertyAnimation object


    sideBarAnimation = new QPropertyAnimation(side_menu, "geometry");

    // Connect the menu button's clicked() signal to the toggleSideBar() slot
    connect(menuButton, &QPushButton::clicked, this, &Equi::on_pushButton_13_clicked);
    connect(button4,&QPushButton::clicked, this, &Equi::on_pushButton_pdf_clicked);
    connect(button1,&QPushButton::clicked, this, &Equi::on_pushButton_notif_clicked);
    connect(button3,&QPushButton::clicked, this, &Equi::on_pushButton_stat_clicked);
    connect(button2,&QPushButton::clicked, this, &Equi::on_pushButton_QRcode_clicked);


}

Equi::~Equi()
{
    delete ui;
}


void Equi::on_pushButton_notif_clicked(){

    QDialog *dialog = new QDialog();
    dialog->setWindowTitle("Notification");

    // Create a table view
    QTableView *tableView = new QTableView();


    tableView->setModel(eq.afficher_notif());

    // Create a standard item model to hold the data


    // Set the model on the table view


    // Set the table view to resize columns to contents
    tableView->resizeColumnsToContents();

    // Add the table view to the dialog
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(tableView);
    dialog->setLayout(layout);

    // Set the background color of the table view
    tableView->setStyleSheet("background-color: black; color: white;");

    dialog->move(180, 150);
    // Show the dialog
    dialog->exec();

    /* if (ui->tableView_2 == ui->label->parentWidget()->children().last()){
        ui->label->lower();
        ui->tableView_2->lower();
    }else{
        ui->label->raise();
        ui->tableView_2->raise();

    }*/
}


void Equi::on_pushButton_13_clicked()
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

void Equi::on_pushButton_clicked()
{
    menu m;
    m.setModal(true);
    m.exec();
}

void Equi::on_ajouter_clicked()
{
    int id = ui->lineEdit->text().toInt();
    QString nom= ui->lineEdit_2->text();
    QDate date_a= ui->lineEdit_3->date();
    QDate date_g= ui->lineEdit_4->date();
    QString etat= ui->lineEdit_5->currentText();
    QString type= ui->lineEdit_6->text();

    equipement e(id,nom,date_a,date_g,etat,type);
    bool test=e.ajouter();
    if(test)
    {

        ui->tableView->setModel(eq.afficher());

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

void Equi::on_supprimer_clicked()
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


        bool test = eq.supprimer(cin);
        if (test)
        {
            ui->tableView->setModel(eq.afficher());
            QMessageBox::information(nullptr, tr("OK"), tr("Suppression effectuée."));
        }
        else
        {
            QMessageBox::critical(nullptr, tr("Erreur"), tr("Suppression non effectuée."));
        }
}

void Equi::on_modifier_clicked()
{
    bool ok;
            int ID_EQUI = QInputDialog::getInt(this, tr("Modifier équipement"),
                                            tr("ID de l'équipement:"), 0, 0, 100000, 1, &ok);
            if (ok)
            {

                bool test = eq.modifier(ID_EQUI);
                if (ok) {



                    // retrieve the model from the table view
                               QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView->model());
                               if (model)
                               {
                                   // update the data in the model
                                   model->setQuery("SELECT * FROM GS_EQUIPEMENT");
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

void Equi::on_pushButton_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "PDF Files (*.pdf)");

            if (fileName.isEmpty())
                return;

            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName(fileName);

            QPainter painter(&printer);
            painter.setRenderHint(QPainter::Antialiasing, true);

            QAbstractItemModel *model = ui->tableView->model();
            int rowCount = model->rowCount();
            int columnCount = model->columnCount();

            // Loop through the rows and columns of the tableView and export the data
            for (int row = 0; row < rowCount; row++) {
                for (int column = 0; column < columnCount; column++) {
                    QModelIndex index = model->index(row, column);
                    QString text = model->data(index, Qt::DisplayRole).toString();
                    painter.drawText(50 + column * 120, 50 + row * 20, text);
                }
            }

            painter.end();

            QMessageBox::information(this, "PDF Export", "PDF exported to " + fileName);
}

void Equi::on_pushButton_pdf_clicked()
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
        painter.drawText(250, 100, "Liste des equipements");

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

void Equi::on_pushButton_stat_clicked()
{
    QChartView *chartView = new QChartView();

    // Show the statistics in the existing widget
    updateChart(chartView);
    showStatistics(ui->widget_3, chartView);

    // Set the chart view as the central widget of the existing widget
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_3);
    layout->addWidget(chartView);
    updateChart(chartView);
}

void Equi::showStatistics(QWidget *parent, QChartView *chartView)
{
    QSqlQuery query("SELECT etat, COUNT(*) FROM GS_EQUIPEMENT GROUP BY etat");
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

void Equi::updateChart(QChartView *chartView)
{
    QSqlQuery query("SELECT etat, COUNT(*) FROM GS_EQUIPEMENT GROUP BY etat");
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
        chartView->chart()->setTitle("Statistics by Functionn");
}

void Equi::on_recherche_2_textChanged(const QString &arg1)
{
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("GS_EQUIPEMENT");
    eq.searchEqui(model, ui->recherche_2);
    ui->tableView->setModel(model);
}


void Equi::on_comboBox_currentTextChanged(const QString &arg1)
{
     eq.sortEmployee(qobject_cast<QSqlQueryModel*>(ui->tableView->model()), ui->sort_by, ui->order_sort);
}

void Equi::on_order_sort_currentTextChanged(const QString &arg1)
{
    eq.sortEmployee(qobject_cast<QSqlQueryModel*>(ui->tableView->model()), ui->sort_by, ui->order_sort);
}

void Equi::on_pushButton_QRcode_clicked()
{
    bool ok;
    QString id = QInputDialog::getText(this, tr("Enter ID"),
                                        tr("ID of row to change:"), QLineEdit::Normal,
                                        "", &ok);
    idEquipement=id;

    QSqlQuery query;
    query.prepare("SELECT nom_equi,etat,type FROM GS_EQUIPEMENT WHERE id_equi = :id ");
    query.bindValue(":id", id);
    query.exec();

    if (query.next()) {
        QString nomequi = query.value(0).toString();
        QString etat = query.value(1).toString();
        QString type = query.value(2).toString();

        int idInt = id.toInt(); // Convert id to an integer value

        qWarning()<<"nomequi"<<nomequi;
        qWarning()<<"etat"<<etat;
        qWarning()<<"type"<<type;
        qWarning()<<"idInt"<<idInt;
        eq.generateQRCode(nomequi, etat, type, idInt);

        QSqlQuery query1;
        query1.prepare("SELECT IMAGE FROM GS_EQUIPEMENT WHERE ID_EQUI=:idInt");
        query1.bindValue(":idInt", idInt);
        qWarning()<<"idequi"<<idInt;
        qWarning()<<"testImage"<<query1.exec();
        qWarning()<<"testImage1"<<query1.next();
        if (query1.exec() && query1.next()) {
            QByteArray imageData = query1.value(0).toByteArray();
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            ui->label_4->setPixmap(pixmap);
            ui->label_4->setScaledContents(true); // this ensures the image is scaled to fit the label
        }

    } else {
        qWarning()<<"No record found with id ="<<id;
    }

}

void Equi::on_pushButton_16_clicked()
{
    QChartView *chartView = ui->widget_3->findChild<QChartView *>();

   // Update the chart view with the new data
   updateChart(chartView);
}
