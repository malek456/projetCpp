#include "rendv.h"
#include "emp.h"
#include "ui_rendv.h"
#include "mail.h"
#include "menu.h"
#include "rendezvous.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QFormLayout>
#include <QFormLayout>
#include <QDialog>
#include <QGroupBox> 
#include <QLabel>
#include <QMessageBox>
#include <QComboBox>
#include <QPushButton>
#include <QSqlRecord>
#include <QPainter>
#include <QPdfWriter>
#include <QInputDialog>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QtCharts>
#include "smtp.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QDateEdit>


Rendv::Rendv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rendv)
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
    QPushButton *button1 = new QPushButton("e-mail", side_menu);
    QPushButton *button2 = new QPushButton("Calendrier", side_menu);
    QPushButton *button3 = new QPushButton("Statistique", side_menu);
    QPushButton *button4 = new QPushButton("Exportation PDF", side_menu);
    button1->setGeometry(100, 2, 111, 45);
    button2->setGeometry(220, 2, 111, 45);
    button3->setGeometry(340, 2, 111, 46);
    button4->setGeometry(460, 2, 111, 46);
    button1->setStyleSheet("background-color: rgb(172, 172, 172)");
    button2->setStyleSheet("background-color: rgb(172, 172, 172)");
    button3->setStyleSheet("background-color: rgb(172, 172, 172)");
    button4->setStyleSheet("background-color: rgb(172, 172, 172)");


    // Create the QPropertyAnimation object


    sideBarAnimation = new QPropertyAnimation(side_menu, "geometry");

    // Connect the menu button's clicked() signal to the toggleSideBar() slot
    connect(menuButton, &QPushButton::clicked, this, &Rendv::on_pushButton_13_clicked);
    connect(button1, &QPushButton::clicked, this, &Rendv::on_pushButton_mail);

    //affichage
    ui->tableView_2->setModel(rdv.afficher());
}

Rendv::~Rendv()
{
    delete ui;
}

void Rendv::on_pushButton_mail()
{
    mail m;
    m.setModal(true);
    m.exec();
}

void Rendv::on_pushButton_13_clicked()
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


void Rendv::on_pushButton_clicked()
{
    menu m;
    m.setModal(true);
    m.exec();
}


void Rendv::on_ajouter_clicked()
{
    //Recuperation des informations
    int id_RDV=ui->lineEdit_2->text().toInt();
    int id_employe=ui->lineEdit_3->text().toInt();
    int id_client=ui->lineEdit_5->text().toInt();
    QDate date_RDV=ui->dateEdit->date();
    QString heure=ui-> comboBox_2->currentText();
    QString service=ui->comboBox_3->currentText();
    QString mail=ui->lineEdit_6->text();


        QRegularExpression re("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionMatch match = re.match(mail);

        if (match.hasMatch())
        {

            rendezvous rdv(id_RDV,date_RDV,heure,service,mail,id_client,id_employe);


                bool test=rdv.ajouter();



                   if(test)
                   {
                        //refresh (Actualiser)
                       ui->tableView_2->setModel(rdv.afficher());

                        QMessageBox::information(nullptr, QObject::tr("OK"),
                                                 QObject::tr("Ajout effectué\n"
                                                                "Click cancel to exit."), QMessageBox::Cancel);
                        /*Smtp* smtp = new Smtp("divinpoadzola@gmail.com", "enzmanvmwpaithdu", "smtp.gmail.com", 465 , 1500000);
                               connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

                                   smtp->sendMail( "divinpoadzola@gmail.com","divinpoadzola@gmail.com", "Confirmation du rdv","to yoki");
                                   QMessageBox::information(nullptr,QObject::tr("OK"),
                                                            QObject::tr("Mail envoyé"));*/

                   }
                   else
                       QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                            QObject::tr("Ajout non effectué.\n"
                                                        "Click cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                 QObject::tr("Mail incorrect.\n"
                                             "Click cancel to exit."), QMessageBox::Cancel);
        }


      ui->lineEdit_2->clear();
      ui->dateEdit->clear();
      ui->comboBox_2->clear();
      ui->lineEdit_3->clear();
      ui->lineEdit_5->clear();
      ui->lineEdit_6->clear();
      ui->comboBox_3->clear();
      ui->lineEdit_2->setEnabled(true);
      ui->modifier->setEnabled(true);
}


void Rendv::on_supprimer_clicked()
{
    int id_RDV=ui->lineEdit_2->text().toInt();
    bool test=rdv.supprimer(id_RDV);
    if(test)
    {
         ui->tableView_2->setModel(rdv.afficher());
         QMessageBox::information(nullptr, QObject::tr("OK"),
                                  QObject::tr("Suppression effectué\n"
                                              "Click cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                             QObject::tr("Suppression non effectué.\n"
                                         "Click cancel to exit."), QMessageBox::Cancel);
    ui->lineEdit_2->clear();
    ui->dateEdit->clear();
    ui->comboBox_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->comboBox_3->clear();
    ui->lineEdit_2->setEnabled(true);
    ui->modifier->setEnabled(true);

}

void Rendv::on_modifier_clicked()
{
    bool ok;
            int id_rdv = QInputDialog::getInt(this, tr("Modifier le rendezvous"),
                                            tr("ID du Rendez-vous:"), 0, 0, 100000, 1, &ok);
            if (ok)
            {

                bool test = rdv.modifier(id_rdv);
                if (ok) {



                    // retrieve the model from the table view
                               QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());
                               if (model)
                               {
                                   // update the data in the model
                                   model->setQuery("SELECT * FROM GS_RENDEZV");
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


/*
void Rendv::on_valider_clicked()
{
    //int cin= on_modifier_clicked();
        QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Validation de modification", "Êtes-vous sûr de vouloir modifier ce rendez-vous ?",
                                            QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes) {

                int id_rdv = ui->lineEdit_2->text().toInt();
                 QDate date = ui->dateEdit->date();
                 QString heure = ui->comboBox_2->currentText();
                 QString service = ui->comboBox_3->currentText();
                 int id_cl = ui->lineEdit_5->text().toInt();
                int id_emp = ui->lineEdit_3->text().toInt();
                QString  mail= ui->lineEdit_6->text();




                if (rdv.modifier(id_rdv, date, heure, service,mail, id_cl, id_emp))
                {
                    QMessageBox::information(this,"Modification réussie","Les données du rendez-vous ont été modifiées avec succès");
                    ui->valider->setEnabled(false);
                    ui->annuler->setEnabled(false);
                    ui->modifier->setEnabled(true);
                    ui->tableView_2->setModel(rdv.afficher());

                    //on_afficher_employe_clicked();
                }
                else
                {
                    QMessageBox::warning(this,"Modification échouée","Une erreur est survenue lors de la modification des données du rendz-vous");
                }
            } else {
                ui->valider->setEnabled(false);
                ui->annuler->setEnabled(false);
                ui->modifier->setEnabled(true);

            }
            ui->lineEdit_2->clear();
            ui->dateEdit->clear();
            ui->comboBox_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_5->clear();
            ui->lineEdit_6->clear();
            ui->comboBox_3->clear();
            ui->lineEdit_2->setEnabled(true);
            ui->modifier->setEnabled(true);
}
*/
void Rendv::on_imp_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "PDF Files (*.pdf)");

            if (fileName.isEmpty())
                return;

            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName(fileName);

            QPainter painter(&printer);
            painter.setRenderHint(QPainter::Antialiasing, true);

            QAbstractItemModel *model = ui->tableView_2->model();
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

void Rendv::on_recherche_2_cursorPositionChanged(int arg1, int arg2)
{
    rendezvous v;
    ui->tableView_2->setModel(v.chercher(ui->recherche_2->text()));
}

void Rendv::on_imp_2_clicked()
{
    rendezvous v;
    ui->tableView_2->setModel(v.trie(ui->comboBox_4->currentText(),ui->comboBox_5->currentText()));
}

void Rendv::on_imp_3_clicked()
{
    QChartView *chartView = new QChartView();

       // Show the statistics in the existing widget
       showStatistics(ui->widget_3, chartView);

       // Set the chart view as the central widget of the existing widget
       QVBoxLayout *layout = new QVBoxLayout(ui->widget_3);
       layout->addWidget(chartView);

}
void Rendv::showStatistics(QWidget *parent, QChartView *chartView)
{
    QSqlQuery query("SELECT service, COUNT(*) FROM GS_RENDEZV GROUP BY service");
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



/*void Rendv::on_toolButton_clicked()
{
    QNetworkAccessManager manager;

        // Set up the email parameters
        QString from = "divinpoadzola@gmail.com";
        QString to = "divinpoadzola@gmail.com";
        QString subject = "Test email";
        QString body = "This is a test email.";

        // Construct the email message
        QString message = "From: " + from + "\n"
                          "To: " + to + "\n"
                          "Subject: " + subject + "\n"
                          "\n"
                          + body;

        // Set up the network request
        QNetworkRequest request;
        request.setUrl(QUrl("smtp://smtp.gmail.com:587"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "text/plain");
        request.setRawHeader("Content-Length", QByteArray::number(message.size()));

        QString username = "divinpoadzola@gmail.com";
        QString password = "enzmanvmwpaithdu";
        QString auth = "LOGIN " + QByteArray().append(username).toBase64() + " " + QByteArray().append(password).toBase64();
           request.setRawHeader("Authorization", auth.toUtf8());

        // Send the email
        QNetworkReply *reply = manager.post(request, message.toUtf8());
        QObject::connect(reply, &QNetworkReply::finished, [&]() {
            qDebug() << "Email sent!";
            //app.quit();
        });

        //return app.exec();
}*/

/*void Rendv::on_pushButton_7_clicked()
{

    ui->tableView_2->setModel(rdv.calendrier());
}*/


void Rendv::on_calendarWidget_activated(const QDate &date)
{
    /* QCalendarWidget *calendarWidget = new QCalendarWidget(); // création du widget de calendrier
     QDate selectedDate = calendarWidget->selectedDate(); // récupération de la date sélectionnée
     qDebug() << "La date sélectionnée est : " << selectedDate.toString("dd-yyyy-MM"); // affichage de la date sélectionnée dans la console*/
     if (ui->tableView_3 == ui->label->parentWidget()->children().last()){
             ui->label->lower();
             ui->tableView_3->lower();
         }else{
             ui->label->raise();
             ui->calendarWidget->raise();
             ui->tableView_3->raise();
             ui->tableView_3->setModel(rdv.calendrier(date));
qDebug() << "La date sélectionnée est : " << date.toString("dd-MM-yyyy");
         }
}
