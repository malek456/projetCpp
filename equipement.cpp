#include "equipement.h"
#include "equi.h"
#include <QLineEdit>
#include <QComboBox>
#include <QFormLayout>
#include <QFormLayout>
#include <QDialog>
#include <QGroupBox>
#include <QLabel>
#include <QSqlQuery>
#include <QSqlError>
#include "qrcodegen.hpp"
#include <QApplication>
#include "mainwindow.h"

equipement::equipement(int a,QString b,QDate c,QDate d,QString e,QString f){
    ID_EQUI=a;
    NOM_EQUI=b;
    DATE_ACHAT=c;
    DATE_FIN_GARANTIE=d;
    ETAT=e;
    TYPE=f;

}


bool equipement::ajouter(){
    QSqlQuery query;
    QString a = QString::number(ID_EQUI);
    query.prepare("INSERT INTO GS_EQUIPEMENT (ID_EQUI,NOM_EQUI,DATE_ACHAT,DATE_FIN_GARANTIE,ETAT,TYPE) values (:ID_EQUI, :NOM_EQUI, :DATE_ACHAT, :DATE_FIN_GARANTIE, :ETAT, :TYPE)");
    query.bindValue(":ID_EQUI",a);
    query.bindValue(":NOM_EQUI",NOM_EQUI);
    query.bindValue(":DATE_ACHAT",DATE_ACHAT);
    query.bindValue(":DATE_FIN_GARANTIE",DATE_FIN_GARANTIE);
    query.bindValue(":ETAT",ETAT);
    query.bindValue(":TYPE",TYPE);
    return query.exec();

   }

QSqlQueryModel *equipement::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_EQUIPEMENT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_EQUI"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_EQUI"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("date_achat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("date_fin_garantie"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ETAT"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("TYPE"));
    return  model;
}

QSqlQueryModel *equipement::afficher_notif()
{
    QSqlQueryModel * model2=new QSqlQueryModel();
    model2->setQuery("SELECT * FROM GS_EQUIPEMENT WHERE ETAT != 'Parfait'");
    model2->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_EQUI"));
    model2->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_EQUI"));
    model2->setHeaderData(2,Qt::Horizontal,QObject::tr("date_achat"));
    model2->setHeaderData(3,Qt::Horizontal,QObject::tr("date_fin_garantie"));
    model2->setHeaderData(4,Qt::Horizontal,QObject::tr("ETAT"));
    model2->setHeaderData(5,Qt::Horizontal,QObject::tr("TYPE"));
    return  model2;
}

bool equipement::supprimer(int ID_EQUI)
{
    QSqlQuery query;
    QString id=QString::number(ID_EQUI);
    query.prepare("Delete from GS_EQUIPEMENT where ID_EQUI= :ID_EQUI");
    query.bindValue(":ID_EQUI",id);
    return  query.exec();
}

bool equipement::modifier(int ID_EQUI)
{
    QSqlQuery query;
            QString c = QString::number(ID_EQUI);
            query.prepare("SELECT * FROM GS_EQUIPEMENT WHERE ID_EQUI=:ID_EQUI");
            query.bindValue(":ID_EQUI", c);
            bool test = query.exec();

            if (test)
            {
                if (query.next())
                {
                    QString NOM_EQUI = query.value(1).toString();
                    QDate DATE_ACHAT = query.value(2).toDate();
                    QDate DATE_FIN_GARANTIE = query.value(3).toDate();
                    QString ETAT = query.value(4).toString();
                    QString TYPE = query.value(5).toString();
                    equipement e(ID_EQUI, NOM_EQUI, DATE_ACHAT, DATE_FIN_GARANTIE, ETAT, TYPE);

                    // Utilisez un formulaire pour modifier les données de l'employé
                    QDialog* form = new QDialog();

                    QFormLayout* layout = new QFormLayout(form);
                    QLineEdit* nomEdit = new QLineEdit(NOM_EQUI);
                    layout->addRow("Nom:", nomEdit);
                    QDateEdit* dateaEdit = new QDateEdit(DATE_ACHAT);
                    layout->addRow("Date d'achat:", dateaEdit);
                    QDateEdit* datefgEdit = new QDateEdit(DATE_FIN_GARANTIE);
                    layout->addRow("Date de fin de garantie:", datefgEdit);
                    QComboBox* etatEdit = new QComboBox(form);
                    etatEdit->addItem("Parfait");
                    etatEdit->addItem("Mauvais");
                    etatEdit->addItem("Moyen");
                    etatEdit->addItem("Perdu");
                    etatEdit->addItem("Critique");
                    layout->addRow("Etat:", etatEdit);
                    QLineEdit* typeEdit = new QLineEdit(TYPE);
                    layout->addRow("Type:", typeEdit);
                    QPushButton* okButton = new QPushButton("OK", form);
                    layout->addWidget(okButton);
                    QObject::connect(okButton, &QPushButton::clicked, form, &QDialog::accept);
                    QPushButton* cancelButton = new QPushButton("Annuler", form);
                    layout->addWidget(cancelButton);
                    QObject::connect(cancelButton, &QPushButton::clicked, form, &QDialog::reject);
                    if (form->exec() == QDialog::Accepted)
                    {
                        // Retrieve the modified data from the input fields
                        e.setnomequi(nomEdit->text());
                        e.setdateachat(dateaEdit->date());
                        e.setdatefingarantie(datefgEdit->date());
                        e.setetatequi(etatEdit->currentText());
                        e.settypeequi(typeEdit->text());

                    // Exécuter une requête de mise à jour pour mettre à jour les données dans la base de données
                    QSqlQuery itsaquery;
                    itsaquery.prepare("UPDATE GS_EQUIPEMENT SET NOM_EQUI = :n, DATE_ACHAT = :da, DATE_FIN_GARANTIE = :dfg, ETAT = :e, TYPE = :t  WHERE ID_EQUI = :ID_EQUI");
                    itsaquery.bindValue(":ID_EQUI", c);
                    itsaquery.bindValue(":n", e.getnomequi());
                    itsaquery.bindValue(":da", e.getdateachat());
                    itsaquery.bindValue(":dfg", e.getdatefingarantie());
                    itsaquery.bindValue(":e", e.getetatequi());
                    itsaquery.bindValue(":t", e.gettypeequi());


                    return itsaquery.exec();
                    }
                }
            }
            else{
              return false;

            }
}



void equipement::searchEqui(QSqlTableModel *model, QLineEdit *lineEdit)
{
        QString searchTerm = lineEdit->text().trimmed();


        QString queryText = "1=1";
        if (!searchTerm.isEmpty()) {

                queryText += QString(" AND NOM_EQUI LIKE '%%1%' ").arg(searchTerm);

        }

        model->setFilter(queryText);
        model->select();
}

void equipement::sortEmployee(QSqlQueryModel *model, QComboBox *comboBox, QComboBox *comboBox_2)
{
    QString sortField = comboBox->currentText();
        QString sortOrder = comboBox_2->currentText();

        QString orderClause = "";
        if (sortField == "date_achat") {
            orderClause += "date_achat";
        } else if (sortField == "date_fin_garantie") {
            orderClause += "date_fin_garantie";
        }

        if (sortOrder == "croissant") {
            orderClause += " DESC";
        } else if (sortOrder == "décroissant") {
            orderClause += " ASC";
        }

        QString queryText = model->query().lastQuery();
        int orderPos = queryText.lastIndexOf("ORDER BY");
        if (orderPos != -1) {
            queryText = queryText.left(orderPos);
        }

        model->setQuery(queryText + " ORDER BY " + orderClause);
}

void equipement::generateQRCode(QString NomEqui,QString etat,QString type,int idEqui)
{
    const QString data = QString("%1\n%2\n%3\n%4 \n").arg(NomEqui).arg(etat).arg(type).arg(idEqui);
    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(data.toUtf8().constData(), qrcodegen::QrCode::Ecc::HIGH);
      const int border = 10;
         const int scale = 15;
         int s = qr.getSize() * scale + border * 2;
         QImage img(s, s, QImage::Format_ARGB32_Premultiplied);
         img.fill(Qt::white);
         QPainter painter(&img);
         painter.setPen(Qt::NoPen);
         painter.setBrush(Qt::black);
         for (int x = 0; x < qr.getSize(); x++) {
             for (int y = 0; y < qr.getSize(); y++) {
                 if (qr.getModule(x, y)) {
                     QRectF r((x * scale) + border, (y * scale) + border, scale, scale);
                     painter.drawRects(&r, 1);
                 }
             }
         }
         const QString fileName = "C:/Users/BOUZIDI MALEK/Downloads\\" + NomEqui + ".png";
    img.save(fileName, "PNG");

    if (img.save(fileName, "PNG")) {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("File Saved.\n"
                                             "The QR code image has been saved to C:/Users/BOUZIDI MALEK/Downloads"),QMessageBox::Cancel);
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray imageData = file.readAll();
        file.close();

        // Update the row in the database with the image data for the specified idEquipement value
        QSqlQuery query;
        query.prepare("UPDATE GS_EQUIPEMENT SET image = ? WHERE id_equi = ?");
        query.addBindValue(imageData);
        query.addBindValue(idEquipement);
        query.exec();

    } else {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Error.\n"
                                             "Failed to save the QR code image"),QMessageBox::Cancel);
    }
}

