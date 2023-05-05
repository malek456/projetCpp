#include "vehicule.h"
#include "ui_vehicule.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include "QDebug"
#include <QSqlError>
#include <QStackedWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QtCharts>
#include<QChartView>
#include<QPieSeries>
#include<QSqlRecord>
#include "controle.h"
#include "mainwindow.h"

vehicule::vehicule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vehicule)
{
    ui->setupUi(this);

    // Create and set up the menu button


    QSqlQuery countQuery("SELECT COUNT(*) FROM GS_IMAGE");
    countQuery.next();
    int imageCount = countQuery.value(0).toInt();

    // Set the row count of the table widget based on the number of images
    ui->tableWidget->setRowCount(imageCount);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0, 400);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Image" << "Name" <<"matricule");

    QSize iconSize(128, 128);
    ui->tableWidget->setIconSize(iconSize);


    // Display images in the table widget
    QSqlQuery query("SELECT  image ,name, matricule FROM GS_IMAGE");
    int row = 0;
    while (query.next()) {
        // Get image data and name
        QByteArray imageData = query.value(0).toByteArray();
        QString imageName = query.value(1).toString();
        QString matricule = query.value(2).toString();

        // Display image in table
        QTableWidgetItem *imageItem = new QTableWidgetItem();
        QPixmap pixmap;
        pixmap.loadFromData(imageData);
        imageItem->setIcon(QIcon(pixmap));

        ui->tableWidget->setItem(row, 0, imageItem);

        int rowHeight = pixmap.height() + 3; // Add some extra space for padding
        ui->tableWidget->setRowHeight(row, rowHeight);


        // Display name in table
        QTableWidgetItem *nameItem = new QTableWidgetItem(imageName);
        ui->tableWidget->setItem(row, 1, nameItem);

        QTableWidgetItem *matItem = new QTableWidgetItem(matricule);
        ui->tableWidget->setItem(row, 2, matItem);

        // Increment row counter
        row++;
    }

    // Create the QPropertyAnimation object




    // Connect the menu button's clicked() signal to the toggleSideBar() slot

    ui->tableView->setModel(v.afficher());
    ui->tableView_2->setModel(v.afficher());
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

void vehicule::on_modifier_clicked()
{
    ui->tableView->setModel(v.afficher());
    ui->tableView_2->setModel(v.afficher());
}

void vehicule::on_supprimer_clicked()
{QString f;

    QSqlQuery query;

             // Prepare the insert statement




           bool test;
           QString MATRICULE = ui->lineEdit_8->text();
           QString MARQUE = ui->lineEdit_11->text();
           QString MODELE = ui->lineEdit_13->text();
           QString ID_CLIENT  = ui->lineEdit_9->text();
           QString DESCRIPTION = ui->lineEdit_14->text();
           QString ANNEE_FABRICATION = ui->lineEdit_10->text();
           QString TYPE_CARBURANT = ui->lineEdit_12->text();
           int TAILLEPNEUX=ui->lineEditm->text().toInt();
           int POIDVOITURE=ui->lineEdit_4->text().toInt();
           int LONGEURVOITURE=ui->lineEdit_2->text().toInt();





           QIntValidator validator;
           int pos = 0;
           QValidator::State state =validator.validate(ID_CLIENT,pos);

           if(MATRICULE.isEmpty() || MARQUE.isEmpty() || MODELE.isEmpty() || ID_CLIENT.isEmpty() || DESCRIPTION.isEmpty() || ANNEE_FABRICATION.isEmpty() || TYPE_CARBURANT.isEmpty())
           {
             QMessageBox::information(nullptr, "error", "remplir tout les champs");
           }
           else if(state == QValidator::Invalid)
           {
               QMessageBox::information(nullptr, "error", "id client doit etre un entier");
           }
           else
           {
               int val = ID_CLIENT.toInt();
               //f=on_pushButton_clicked();
               qDebug () << f;



                       vehiculeE v(MATRICULE,MARQUE, MODELE,DESCRIPTION,ANNEE_FABRICATION, TYPE_CARBURANT,val,"PHOTO",TAILLEPNEUX,POIDVOITURE,LONGEURVOITURE);



               test=v.ajouter();
               ui->tableView->setModel(v.afficher());
               ui->tableView_2->setModel(v.afficher());

                  if (test) {
                        qDebug() << "Data inserted successfully";
                        QMessageBox::information(nullptr, "Success", "Voiture ajoutée avec succées!");



                    } else {
                        qDebug() << "Data insertion failed: " << query.lastError().text();
                        QMessageBox::information(nullptr, "failed", "Data insertion failed!");
                    }


}

               }




void vehicule::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
        QString s;
          QSqlQuery qry;
          qry.prepare("SELECT * FROM GS_VEHICULE WHERE MATRICULE='"+val+"'");
          if(qry.exec())
          {
              while (qry.next()) {

                  ui->lineEdit_8->setText(qry.value(0).toString());
                  ui->lineEdit_11->setText(qry.value(1).toString());
                  ui->lineEdit_13->setText(qry.value(2).toString());
                  ui->lineEdit_14->setText(qry.value(3).toString());
                  ui->lineEdit_10->setText(qry.value(4).toString());
                  ui->lineEdit_12->setText(qry.value(5).toString());
                  ui->lineEdit_9->setText(qry.value(6).toString());

              }

          } else
               QMessageBox::information(nullptr, "failed", " failed!");
}

void vehicule::on_ajouter_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
    if (!selectedIndexes.isEmpty()) {
        QModelIndex firstIndex = selectedIndexes.at(0);
        QString mat = firstIndex.data(Qt::DisplayRole).toString();
        qDebug() << "Selected QString:" << mat;
       QMessageBox msgBox;
       msgBox.setText("Do you want to remove  user ?");
       msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
       int ret = msgBox.exec();
       switch (ret) {
         case QMessageBox::Ok:
       {
           QSqlQuery query;
           query.prepare("DELETE FROM GS_VEHICULE WHERE MATRICULE = :mat");
           query.bindValue(":mat", mat);

           // Execute the query
           if (!query.exec()) {
               qDebug() << "Error: " << query.lastError().text();
               QMessageBox::information(nullptr, "failed", "Delete failed!");
           }
           else {
               qDebug() << "Delete successfully";
               QMessageBox::information(nullptr, "Success", "Suppression effectuer avec succée!");

             }
            ui->tableView->setModel(v.afficher());
            ui->tableView_2->setModel(v.afficher());

   }
             break;

         case QMessageBox::Cancel:
             // Cancel was clicked
             break;
         default:
             // should never be reached
             break;
       }
    }
}

void vehicule::on_ajouter_2_clicked()
{

    bool test;
        QString MATRICULE = ui->lineEdit_8->text();
        QString MARQUE = ui->lineEdit_11->text();
        QString MODELE = ui->lineEdit_13->text();
        QString ID_CLIENT  = ui->lineEdit_9->text();

        QString DESCRIPTION = ui->lineEdit_14->text();
        QString ANNEE_FABRICATION = ui->lineEdit_10->text();
        QString TYPE_CARBURANT = ui->lineEdit_12->text();




        QIntValidator validator;
        int pos = 0;
        QValidator::State state =validator.validate(ID_CLIENT,pos);

        if(MATRICULE.isEmpty() || MARQUE.isEmpty() || MODELE.isEmpty() || ID_CLIENT.isEmpty() || DESCRIPTION.isEmpty() || ANNEE_FABRICATION.isEmpty() || TYPE_CARBURANT.isEmpty())
        {
          QMessageBox::information(nullptr, "error", "Il faut remplir tout les champs");
        }
        else if(state == QValidator::Invalid)
        {
            QMessageBox::information(nullptr, "error", "L'id client doit étre un entier");
        }
        else
        {

            int val = ID_CLIENT.toInt();
            vehiculeE v(MATRICULE,MARQUE, MODELE,DESCRIPTION,ANNEE_FABRICATION, TYPE_CARBURANT,val,"PHOTO");
        qDebug() <<"***********************"<< MARQUE;
        test=v.modifier();


        if (test) {
              qDebug() << "Data inserted successfully";
              QMessageBox::information(nullptr, "Success", "Modification effectuer avec succée!");
               ui->tableView->setModel(v.afficher());
               ui->tableView_2->setModel(v.afficher());


          } else {
             ui->tableView->setModel(v.afficher());
             ui->tableView_2->setModel(v.afficher());
              qDebug() << "Data insertion failed: ";
              QMessageBox::information(nullptr, "failed", "La modification a echouee!");
          }
        }

}

void vehicule::on_ajouter_3_clicked()
{
    QSqlQuery query;
        query.prepare("SELECT TYPE_CARBURANT, COUNT(*) as nombre   FROM GS_VEHICULE GROUP BY TYPE_CARBURANT ;");

        if (!query.exec()) {
            qDebug() << "Erreur lors de l'exécution de la requête.";

            return;
        }

        // Création de la série de données pour le graphique en secteurs
        QPieSeries *series = new QPieSeries();
        series->setLabelsVisible(true);
        series->setLabelsPosition(QPieSlice::LabelInsideHorizontal);

        while (query.next()) {
            QString categorie = query.value(0).toString();
            int count = query.value(1).toInt();
            series->append(categorie, count);


        }

        foreach(QPieSlice *slice, series->slices()) {
                QString label = QString("%1 (%2%)")
                    .arg(slice->label())
                    .arg(100 * slice->percentage(), 0, 'f', 1);
                slice->setLabel(label);

            }



        // Création du graphique et ajout de la série de données
        QChart *chart = new QChart();


       // series->setPercentageVisible(true);
        chart->addSeries(series);
        chart->setTitle("statistiques du type carburant");

        // Configuration du graphique
        chart->legend()->setAlignment(Qt::AlignRight);
        chart->setAnimationOptions(QChart::AllAnimations);

        // Affichage du graphique
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);
        chartView->setMinimumSize(640, 480);
    //chartView->setGeometry(100, 100, 800, 600);
        chartView->show();
}

void vehicule::on_recherche_textEdited(const QString &arg1)
{
    ui->tableView->setModel(v.afficher_search(arg1));
}

void vehicule::on_ajouter_4_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

                  // execute a query to get the table data
                  QSqlQuery query("SELECT * FROM GS_VEHICULE ");

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
                    int margin = 10;
                    int cellWidth = (writer.width() - margin *2) / query.record().count();
                    int cellHeight = 50;

                    // draw the table header
                    painter.drawText(margin, margin, "MATRICULE");
                  painter.drawText(margin + cellWidth, margin, "MARQUE");
                    painter.drawText(margin + cellWidth * 2, margin, "MODELE");
                    painter.drawText(margin + cellWidth * 3, margin, "DESCRIPTION");
                    painter.drawText(margin + cellWidth * 4, margin, "ANNEE_FABRICATION");
                    painter.drawText(margin + cellWidth * 5, margin, "TYPE_CARBURANT");
                    painter.drawText(margin + cellWidth * 6, margin, "ID_CLIENT");


                    // draw the table data
                    int row = 1;
                    while (query.next()) {
                        painter.drawText(margin, margin + cellHeight * row * 8, query.value(0).toString());
                        painter.drawText(margin + cellWidth, margin + cellHeight * row * 8, query.value(1).toString());
                        painter.drawText(margin + cellWidth * 2, margin + cellHeight * row * 8, query.value(2).toString());
                        painter.drawText(margin + cellWidth *  3, margin + cellHeight * row * 8, query.value(3).toString());
                        painter.drawText(margin + cellWidth * 4, margin + cellHeight * row * 8, query.value(4).toString());
                        painter.drawText(margin + cellWidth * 5, margin + cellHeight * row * 8, query.value(5).toString());





                        // start a new page for every 10 rows
                        if (row % 12 == 0) {
                            writer.newPage();
                            painter.drawText(margin, margin, "MATRICULE");
                          painter.drawText(margin + cellWidth, margin, "MARQUE");
                            painter.drawText(margin + cellWidth * 2, margin, "MODELE");
                            painter.drawText(margin + cellWidth * 3, margin, "DESCRIPTION");
                            painter.drawText(margin + cellWidth * 4, margin, "ANNEE_FABRICATION");
                            painter.drawText(margin + cellWidth * 5, margin, "TYPE_CARBURANT");
                            painter.drawText(margin + cellWidth * 6, margin, "ID_CLIENT");

                            row = 1;
                        }

                        row++;
                    }

                    // end painting
                    painter.end();

}

void vehicule::on_comboBox_2_activated(const QString &arg1)
{
    if(arg1=="Marque")
       {
           ui->tableView->setModel(v.affichertrie("MARQUE"));

       } else if(arg1=="Par Défaut")
       {
          ui->tableView->setModel(v.afficher());
          ui->tableView_2->setModel(v.afficher());
       } else if(arg1=="Modéle")
       {
      ui->tableView->setModel(v.affichertrie("MODELE"));
    }else if(arg1=="Type Carburant")
       {
      ui->tableView->setModel(v.affichertrie("TYPE_CARBURANT"));
}
}

QImage vehicule::on_pushButton_clicked()
{
    /*QString filename = QFileDialog::getOpenFileName(this, tr("Select Image"), "", tr("Images (*.png *.jpg *.jpeg *.bmp)"));

        if (filename.isEmpty()) {
            qDebug () << "erreur";
        }

        // Read the contents of the image file and convert it to a byte array
        QFile file(filename);
        QImage image(filename);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("Error"), tr("Could not open file."));
           qDebug () << "erreur";
        }
        return image;*/

    QString fileName = QFileDialog::getOpenFileName(nullptr, "Ouvrir une image", QDir::homePath(), "Images (*.png *.xpm *.jpg *.bmp)");
        if (!fileName.isEmpty()) {
            QPixmap pixmap(fileName);
            if (!pixmap.isNull()) {
                //ui->label->setPixmap(pixmap);
                //ui->label->setScaledContents(true);
            }
        }
}

void vehicule::on_ajouter_5_clicked()
{

    bool ok;
        QString matricule = QInputDialog::getText(this, "entrer la matricule", "matricule:", QLineEdit::Normal, "", &ok);
        if (!ok || matricule.isEmpty()) {
            return;
        }
        //QString id = idText;
        myGlobalVariable=matricule;
        qWarning()<<"matricule"<<myGlobalVariable;
        // Check if ID exists in database
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT matricule FROM GS_VEHICULE WHERE matricule = ?");
        checkQuery.addBindValue(matricule);
        if (!checkQuery.exec()) {
            qDebug() << checkQuery.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to check if ID exists in database");
            return;
        }
        if (checkQuery.next()){

            QSqlQuery query;
            query.prepare("INSERT INTO GS_CONTROLE (matricule) VALUES (?)");
            query.addBindValue(matricule);
            if (!query.exec())
            {
                qDebug() << query.lastError().text();
                QMessageBox::critical(this, "Error", "Failed to store matricule in database");
                return;
            }
            controle c;
            c.setModal(true);
            c.exec();

}

   /* if (ui->tableView_2 == ui->label_2->parentWidget()->children().last()){
        ui->label_2->lower();
        ui->lineEditm->lower();
        ui->lineEdit_4->lower();
        ui->ajouter_6->lower();
        ui->lineEdit_2->lower();
        ui->tableView_2->lower();
    }else{
        ui->label_2->raise();
        ui->lineEditm->raise();
        ui->lineEdit_4->raise();
        ui->ajouter_6->raise();
        ui->lineEdit_2->raise();
        ui->tableView_2->raise();

    }*/
}

void vehicule::on_ajouter_6_clicked()
{
    bool test;
        QString MATRICULE = ui->lineEdit_8->text();

        QString ID_CLIENT  = ui->lineEdit_9->text();


        int TAILLEPNEUX=ui->lineEditm->text().toInt();
        int POIDVOITURE=ui->lineEdit_4->text().toInt();
        int LONGEURVOITURE=ui->lineEdit_2->text().toInt();

        //

        QIntValidator validator;
        int pos = 0;
        QValidator::State state =validator.validate(ID_CLIENT,pos);

        if(MATRICULE.isEmpty() || ID_CLIENT.isEmpty())
        {
          QMessageBox::information(nullptr, "error", "Il faut remplir tout les champs");
        }
        else if(state == QValidator::Invalid)
        {
            QMessageBox::information(nullptr, "error", "L'id client doit étre un entier");
        }
        else
        {
            if(TAILLEPNEUX>3)
               QMessageBox::information(nullptr, "error", "Taille de pneux doit etre inferieur a 3 ");
              else if (POIDVOITURE>1000)
                QMessageBox::information(nullptr, "error", "Le poid de pneux doit etre inferieur a 1000 ");
            else if (LONGEURVOITURE>10)
              QMessageBox::information(nullptr, "error", "La longeure de pneux doit etre inferieur a 10 ");
            else
            {
            int val = ID_CLIENT.toInt();
            vehiculeE v(MATRICULE,val,TAILLEPNEUX,POIDVOITURE,LONGEURVOITURE);
        test=v.modifier2();


        if (test) {
              qDebug() << "Data inserted successfully";
              QMessageBox::information(nullptr, "Success", "Modification effectuer avec succée!");
               ui->tableView->setModel(v.afficher());
               ui->tableView_2->setModel(v.afficher());


          } else {
             ui->tableView->setModel(v.afficher());
             ui->tableView_2->setModel(v.afficher());
              qDebug() << "Data insertion failed: ";
              QMessageBox::information(nullptr, "failed", "La modification a echouee!");
          }
        }
        }
}

void vehicule::on_ajouter_7_clicked()
{
    
    
    bool ok;
        QString matricule = QInputDialog::getText(this, "entrer la matricule", "matricule:", QLineEdit::Normal, "", &ok);
        if (!ok || matricule.isEmpty()) {
            return;
        }

        //QString id = idText;
    
        // Check if ID exists in database
        QSqlQuery checkQuery;
        checkQuery.prepare("SELECT matricule FROM GS_VEHICULE WHERE matricule = ?");
        checkQuery.addBindValue(matricule);
        //myGlobalVariable = matricule;
        if (!checkQuery.exec()) {
            qDebug() <<"++++++++++++++"<< checkQuery.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to check if ID exists in database");
            return;
        }
        if (checkQuery.next()) {


    
        // Prompt user to select image file
        QString imagePath = QFileDialog::getOpenFileName(this, "Select Image", ".", "Images (*.png *.xpm *.jpg)");
        if (imagePath.isEmpty()) {
            return;
        }
    
        // Read image data from file
        QFile file(imagePath);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, "Error", "Failed to read image file");
            return;
        }
        QByteArray imageData = file.readAll();
    
        // Store image in database
        QSqlQuery query;
        query.prepare("INSERT INTO GS_IMAGE (matricule, name, image) VALUES (?, ?, ?)");
        query.addBindValue(matricule);
        query.addBindValue(QFileInfo(imagePath).fileName());
        query.addBindValue(imageData);
        if (!query.exec()) {
            qDebug() <<"--------------------------"<< query.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to store image in database");
            return;
        }
    
        // Find the first empty cell in the last row
        int lastRow = ui->tableWidget->rowCount() - 1;
        int lastColumn = ui->tableWidget->columnCount() - 1;
        int column = 0;
        while (column <= lastColumn && ui->tableWidget->item(lastRow, column) != nullptr) {
            column++;
        }
    
        // If the last row is full, add a new row
        if (column > lastColumn) {
            ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
            lastRow++;
            column = 0;
        }
    
        // Display uploaded image, its name, and ID in table
        QTableWidgetItem *idItem = new QTableWidgetItem(QString(matricule));
        ui->tableWidget->setItem(lastRow, column +2, idItem);
    
        QTableWidgetItem *imageItem = new QTableWidgetItem();
        QPixmap pixmap;
        pixmap.loadFromData(imageData);
        QPixmap scaledPixmap = pixmap.scaled(QSize(100, 100), Qt::KeepAspectRatio);
        imageItem->setIcon(QIcon(scaledPixmap));
        imageItem->setSizeHint(QSize(100, 100));
        imageItem->setIcon(QIcon(pixmap));
        ui->tableWidget->setItem(lastRow, column , imageItem);
    
        int rowHeight = pixmap.height() + 3; // Add some extra space for padding
        ui->tableWidget->setRowHeight(lastRow, rowHeight);
    
        QTableWidgetItem *nameItem = new QTableWidgetItem(QFileInfo(imagePath).fileName());
        ui->tableWidget->setItem(lastRow, column + 1, nameItem);
    
        ui->tableWidget->setColumnWidth(0, 400);
        ui->tableWidget->setColumnWidth(1, 100);
    }
    
    
    /*QString imagePath = QFileDialog::getOpenFileName(this, "Select Image", ".", "Images (*.png *.xpm *.jpg)");
        if (imagePath.isEmpty()) {
            return;
        }

        // Read image data from file
        QFile file(imagePath);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, "Error", "Failed to read image file");
            return;
        }
        QByteArray imageData = file.readAll();

        // Store image in database
        QSqlQuery query;
        query.prepare("INSERT INTO GS_IMAGE (name, image) VALUES (?, ?)");
        query.addBindValue(QFileInfo(imagePath).fileName());
        query.addBindValue(imageData);
        if (!query.exec()) {
            qDebug() << query.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to store image in database");
            return;
        }

        // Find the first empty cell in the last row
        int lastRow = ui->tableWidget->rowCount() - 1;
        int lastColumn = ui->tableWidget->columnCount() - 1;
        int column = 0;
        while (column <= lastColumn && ui->tableWidget->item(lastRow, column) != nullptr) {
            column++;
        }

        // If the last row is full, add a new row
        if (column > lastColumn) {
            ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
            lastRow++;
            column = 0;
        }

        // Display uploaded image and its name in table
        QTableWidgetItem *imageItem = new QTableWidgetItem();
        QPixmap pixmap;
        pixmap.loadFromData(imageData);
        QPixmap scaledPixmap = pixmap.scaled(QSize(100, 100), Qt::KeepAspectRatio);
        imageItem->setIcon(QIcon(scaledPixmap));
        imageItem->setSizeHint(QSize(100, 100));
        imageItem->setIcon(QIcon(pixmap));
        ui->tableWidget->setItem(lastRow, column, imageItem);

        int rowHeight = pixmap.height() + 3; // Add some extra space for padding
        ui->tableWidget->setRowHeight(lastRow, rowHeight);

        QTableWidgetItem *nameItem = new QTableWidgetItem(QFileInfo(imagePath).fileName());
        ui->tableWidget->setItem(lastRow, column + 1, nameItem);

        ui->tableWidget->setColumnWidth(0, 400);*/
}
