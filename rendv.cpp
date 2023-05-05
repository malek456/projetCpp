#include "rendv.h"
#include "emp.h"
#include "ui_rendv.h"
//#include "mail.h"
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
//#include "smtp.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QDateEdit>
//#include "interfacea.h"
#include "excel.h"
#include <QAxObject>


Rendv::Rendv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rendv)
{
    ui->setupUi(this);

    ui->tableView_2->setModel(rdv.afficher());
}

Rendv::~Rendv()
{
    delete ui;
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
    int mdp = ( rand () % (9999 - 0001 +1)) + 0001;


        QRegularExpression re("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionMatch match = re.match(mail);

        if (match.hasMatch())
        {

            rendezvous rdv(id_RDV,date_RDV,heure,service,mail,id_client,id_employe,mdp);


                bool test=rdv.ajouter();



                   if(test)
                   {
                        //refresh (Actualiser)
                       ui->tableView_2->setModel(rdv.afficher());

                        QMessageBox::information(nullptr, QObject::tr("OK"),
                                                 QObject::tr("Ajout effectué\n"
                                                                "Click cancel to exit."), QMessageBox::Cancel);


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
      //ui->dateEdit->clear();
      //ui->comboBox_2->clear();
      ui->lineEdit_3->clear();
      ui->lineEdit_5->clear();
      ui->lineEdit_6->clear();
      //ui->comboBox_3->clear();
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
    bool test;
    int id_RDV = ui->lineEdit_2->text().toInt();
    int id_employe = ui->lineEdit_3->text().toInt();
    int id_client = ui->lineEdit_5->text().toInt();
    QDate date_RDV = ui->dateEdit->date();
    QString heure = ui->comboBox_2->currentText();
    QString service = ui->comboBox_3->currentText();
    QString mail = ui->lineEdit_6->text();
    int mdp = ( rand () % (9999 - 0001 +1)) + 0001;

    QIntValidator validator;
    int pos = 0;
    QValidator::State state = validator.validate(service, pos);

    if (id_RDV == 0 || date_RDV.isNull() || heure.isEmpty() || service.isEmpty() || id_client == 0 || id_employe == 0 || mail.isEmpty())
    {
        QMessageBox::information(nullptr, "error", "remplir tout les champs");
    }
    else if (state == QValidator::Invalid)
    {
        QMessageBox::information(nullptr, "error", "id client doit etre un entier");
    }
    else
    {
        rendezvous rdv(id_RDV, date_RDV, heure, service, mail, id_client, id_employe,mdp);
        qDebug() << id_RDV;
        test = rdv.modifier();

        if (test) {
            qDebug() << "Data inserted successfully";
            QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
            ui->tableView_2->setModel(rdv.afficher());
        }
        else {
            ui->tableView_2->setModel(rdv.afficher());
            qDebug() << "Data insertion failed: ";
            QMessageBox::information(nullptr, "failed", "Data insertion failed!");
        }
    }
}




void Rendv::on_imp_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

                  // execute a query to get the table data
                  QSqlQuery query("SELECT * FROM GS_RENDEZV ");

                  // create a PDF writer object and set document properties
                  QString fileName = QFileDialog::getSaveFileName(this, tr("Save PDF"), QString(), "*.pdf");
                  if (fileName.isEmpty())
                      return;

                  QPdfWriter writer(fileName);
                  writer.setTitle("Table Report");
                  writer.setCreator("My Application");
                  writer.setPageSize(QPagedPaintDevice::A4);

                  // create a QPainter object for painting the PDF
                     QPainter painter(&writer);
                     painter.setRenderHint(QPainter::Antialiasing);

                     // set the font and font size
                     QFont font("Segoe UI", 8);
                     painter.setFont(font);
                   // set the margin and cell size
                    int margin = 30;
                    int cellWidth = (writer.width() - margin *2) / query.record().count();
                    int cellHeight = 80;

                    // draw the table header
                    painter.drawText(margin, margin, "ID_RDV");
                    painter.drawText(margin + cellWidth, margin, "DATE_RDV");
                    painter.drawText(margin + cellWidth * 2, margin, "HEURE");
                    painter.drawText(margin + cellWidth * 3, margin, "SERVICE");
                    painter.drawText(margin + cellWidth * 4, margin, "ID_CLIENT");
                    painter.drawText(margin + cellWidth * 5, margin, "ID_EMPLOYÉ");
                    painter.drawText(margin + cellWidth * 6, margin, "MAIL");
                    painter.drawText(margin + cellWidth * 6, margin, "Mot de passe");
                     painter.drawText(margin + cellWidth * 6, margin, "Etat du rendez-vous");


                    // draw the table data
                    int row = 1;
                    while (query.next()) {
                        painter.drawText(margin, margin + cellHeight * row * 8, query.value(0).toString());
                        painter.drawText(margin + cellWidth, margin + cellHeight * row * 8, query.value(1).toString());
                        painter.drawText(margin + cellWidth * 2, margin + cellHeight * row * 8, query.value(2).toString());
                        painter.drawText(margin + cellWidth *  3, margin + cellHeight * row * 8, query.value(3).toString());
                        painter.drawText(margin + cellWidth * 4, margin + cellHeight * row * 8, query.value(4).toString());
                        painter.drawText(margin + cellWidth * 5, margin + cellHeight * row * 8, query.value(5).toString());
                        painter.drawText(margin + cellWidth * 6, margin + cellHeight * row * 8, query.value(6).toString());
                          painter.drawText(margin + cellWidth * 7, margin + cellHeight * row * 8, query.value(7).toString());
                          painter.drawText(margin + cellWidth * 8, margin + cellHeight * row * 8, query.value(8).toString());





                        // start a new page for every 10 rows
                        if (row % 12 == 0) {
                            writer.newPage();
                            painter.drawText(margin, margin, "ID_RDV");
                           painter.drawText(margin + cellWidth, margin, "DATE_RDV");
                            painter.drawText(margin + cellWidth * 2, margin, "HEURE");
                            painter.drawText(margin + cellWidth * 3, margin, "SERVICE");
                            painter.drawText(margin + cellWidth * 4, margin, "ID_CLIENT");
                            painter.drawText(margin + cellWidth * 5, margin, "ID_EMPLOYÉ");
                            painter.drawText(margin + cellWidth * 6, margin, "MAIL");
                            painter.drawText(margin + cellWidth * 6, margin, "Mot de passe");
                            painter.drawText(margin + cellWidth * 7, margin, "Etat du rendez-vous");

                            row = 1;
                        }

                        row++;
                    }

                    // end painting
                    painter.end();


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






void Rendv::on_calendarWidget_activated(const QDate &date)
{

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


void Rendv::on_pushButton_2_clicked()
{
    /*interfaceA a;
    a.setModal(true);
    a.exec();*/
}



void Rendv::on_pb_excel_clicked()
{
    /*QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                                     tr("Excel Files (*.xls)"));
                     if (fileName.isEmpty())
                         return;

                     ExportExcelObject obj(fileName, "mydata", ui->tableView_2);

                     obj.addField(0, "id rendez-vous", "char(50)");
                     obj.addField(1, "Date RDV", "char(50)");
                     obj.addField(2, "Heure", "char(50)");
                     obj.addField(3, "Type de Service", "char(50)");
                     obj.addField(4, "Identifiant Client", "char(50)");
                     obj.addField(5, "Identifiant Employé", "char(50)");
                     obj.addField(6, "Mail", "char(50)");
                     obj.addField(7, "Mot de passe", "char(50)");
                     obj.addField(8, "Etat rendez-vous", "char(50)");

                     int retVal = obj.export2Excel();

                     if( retVal > 0)
                     {
                         QMessageBox::information(this, tr("Done"),
                                                  QString(tr("%1 records exported!")).arg(retVal)
                                                  );
                     }*/

        QSqlQuery query;
        query.prepare("SELECT * FROM GS_RENDEZV ");

        if (!query.exec()) {
            qDebug() << "Erreur lors de l'extraction des données de la base de données";
            return;
        }

    QAxObject excel("Excel.Application");
       excel.setProperty("Visible", true); // affiche Excel
       QAxObject *workbooks = excel.querySubObject("Workbooks");
       QAxObject *workbook = workbooks->querySubObject("Add()");
       QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1); // première feuille de calcul
       worksheet->setProperty("Name", "Revenus par emplacement"); // renomme la feuille de calcul
       worksheet->querySubObject("Range(const QString&)", "A1")->setProperty("Value", "ID_RDV");
       worksheet->querySubObject("Range(const QString&)", "B1")->setProperty("Value", "DATE_RDV");
       worksheet->querySubObject("Range(const QString&)", "C1")->setProperty("Value", "HEURE");
       worksheet->querySubObject("Range(const QString&)", "D1")->setProperty("Value", "SERVICE");
       worksheet->querySubObject("Range(const QString&)", "E1")->setProperty("Value", "ID_CLIENT");
       worksheet->querySubObject("Range(const QString&)", "F1")->setProperty("Value", "ID_EMPLOYE");
       worksheet->querySubObject("Range(const QString&)", "G1")->setProperty("Value", "MAIL");
       worksheet->querySubObject("Range(const QString&)", "H1")->setProperty("Value", "MDP");
       worksheet->querySubObject("Range(const QString&)", "I1")->setProperty("Value", "ETAT");

       QMap<QString, int> sumByEmplacement; // somme des revenus pour chaque emplacement
       int rowIndex = 2;
       while (query.next()) {
           QString id_rdv = query.value(0).toString();
           QString date_rdv = query.value(1).toString();
           QString heure = query.value(2).toString();
           QString service = query.value(3).toString();
           QString id_client = query.value(4).toString();
           QString id_employe = query.value(5).toString();
           QString mail = query.value(6).toString();
           QString mdp = query.value(7).toString();
           QString etat = query.value(8).toString();


           //umByEmplacement[emplacement] += revenus;
           worksheet->querySubObject("Range(const QString&)", QString("A%1").arg(rowIndex))->setProperty("Value", QVariant(id_rdv));
           worksheet->querySubObject("Range(const QString&)", QString("B%1").arg(rowIndex))->setProperty("Value", QVariant(date_rdv));
           worksheet->querySubObject("Range(const QString&)", QString("C%1").arg(rowIndex))->setProperty("Value", QVariant(heure));
           worksheet->querySubObject("Range(const QString&)", QString("D%1").arg(rowIndex))->setProperty("Value", QVariant(service));
           worksheet->querySubObject("Range(const QString&)", QString("E%1").arg(rowIndex))->setProperty("Value", QVariant(id_client));
           worksheet->querySubObject("Range(const QString&)", QString("F%1").arg(rowIndex))->setProperty("Value", QVariant(id_employe));
           worksheet->querySubObject("Range(const QString&)", QString("G%1").arg(rowIndex))->setProperty("Value", QVariant(mail));
           worksheet->querySubObject("Range(const QString&)", QString("H%1").arg(rowIndex))->setProperty("Value", QVariant(mdp));
           worksheet->querySubObject("Range(const QString&)", QString("i%1").arg(rowIndex))->setProperty("Value", QVariant(etat));

           rowIndex++;
       }

}


