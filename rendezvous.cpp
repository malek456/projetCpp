#include "rendezvous.h" 
#include <QLineEdit>
#include <QFormLayout>
#include <QFormLayout>
#include <QDialog>
#include <QGroupBox>
#include <QLabel>
#include <QMessageBox>
#include <QComboBox>
#include <QPushButton>
#include <QDateEdit>
#include <QLineEdit>
#include <QSqlQuery>
#include <QtDebug>
#include <QtCharts>

rendezvous::rendezvous(int a,QDate b,QString c,QString d,QString z,int e,int f){
    id_RDV=a;
    date_RDV=b;
    heure=c;
    service=d;
    id_client=e;
    id_employe=f;
    mail=z;
}

bool rendezvous::ajouter(){
    QSqlQuery query;
    QString c = QString::number(id_RDV);
    QString d = QString::number(id_client);
    QString e = QString::number(id_employe);
    query.prepare("SELECT * FROM GS_RENDEZV WHERE DATE_RDV=:date_RDV AND HEURE=:heure");
    query.bindValue(":date_RDV",date_RDV);
    query.bindValue(":heure",heure);
    query.exec();
    if(query.next()){
        // a record with the same date_rdv and heure already exists in the database
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                QObject::tr("Date et Heure déjà reservées.\n"
                                            "Click cancel to exit"), QMessageBox::Cancel);
        return false;
    } else {
        // no record with the same date_rdv and heure exists in the database, insert a new record
        query.prepare("INSERT INTO GS_RENDEZV (ID_RDV,DATE_RDV,HEURE,SERVICE,ID_CLIENT,ID_EMPLOYÉ,MAIL)" "values (:id_RDV, :date_RDV, :heure, :service, :id_client, :id_employe, :mail)");
        query.bindValue(":id_RDV",c);
        query.bindValue(":date_RDV",date_RDV);
        query.bindValue(":heure",heure);
        query.bindValue(":service",service);
        query.bindValue(":id_client",d);
        query.bindValue(":id_employe",e);
        query.bindValue(":mail",mail);
        return query.exec();
    }
}

bool rendezvous::modifier(int ID_RDV)
{
    QSqlQuery query;
            QString c = QString::number(ID_RDV);
            query.prepare("SELECT * FROM GS_RENDEZV WHERE ID_RDV=:ID_RDV");
            query.bindValue(":ID_RDV", c);
            bool test = query.exec();

            if (test)
            {
                if (query.next())
                {
                    QDate date_RDV = query.value(1).toDate();
                    QString heure = query.value(2).toString();
                    QString service = query.value(3).toString();
                    int id_client = query.value(4).toString().toInt();
                    int id_employe = query.value(5).toString().toInt();
                    QString mail = query.value(6).toString();
                    rendezvous rdv(ID_RDV, date_RDV, heure, service, mail, id_client, id_employe);

                    // Utilisez un formulaire pour modifier les données de l'employé
                    QDialog* form = new QDialog();

                    QFormLayout* layout = new QFormLayout(form);
                                     QLineEdit* lineEdit_3 = new QLineEdit(QString::number(id_employe));
                                     layout->addRow("id Employe:", lineEdit_3);
                                     QLineEdit* lineEdit_5 = new QLineEdit(QString::number(id_client));
                                     layout->addRow("id_client:", lineEdit_5);
                                     QLineEdit* lineEdit_6 = new QLineEdit(mail);
                                     layout->addRow("Mail:", lineEdit_6);
                                     //QWidget* parentWidget = new QWidget();  // create a new QWidget as the parent widget
                                     QDateEdit* dateEdit = new QDateEdit(date_RDV);
                                     layout->addRow("Date du rendez-vous:", dateEdit);
                                     QComboBox* comboBox_2 = new QComboBox(form);
                                     comboBox_2->addItem("07:10");
                                     comboBox_2->addItem("09:00");
                                     comboBox_2->addItem("10:00");
                                     comboBox_2->addItem("11:00");
                                     comboBox_2->addItem("13:00");
                                     comboBox_2->addItem("14:00");
                                     comboBox_2->addItem("15:00");
                                     layout->addRow("Heure:", comboBox_2);
                                     QComboBox* comboBox_3 = new QComboBox(form);
                                     comboBox_3->addItem("Lavage");
                                     comboBox_3->addItem("Vidange");
                                     comboBox_3->addItem("Nettoyage");
                                     layout->addRow("service:", comboBox_3);
                                     QPushButton* okButton = new QPushButton("OK", form);
                                     layout->addWidget(okButton);
                                     QObject::connect(okButton, &QPushButton::clicked, form, &QDialog::accept);
                                     QPushButton* cancelButton = new
                                             QPushButton("Annuler", form);
                                                                 layout->addWidget(cancelButton);
                                                                 QObject::connect(cancelButton, &QPushButton::clicked, form, &QDialog::reject);
                                                                 if (form->exec() == QDialog::Accepted)
                                                                 {
                                                                     // Retrieve the modified data from the input fields
                                                                     QDate selected_date = dateEdit->date(); // retrieve selected date from QDateEdit
                                                                     QString date_str = selected_date.toString("dd-MM-  yyyy"); // convert QDate to QString

                                                                     rdv.setdate_RDV(selected_date);
                                                                     rdv.setheure(comboBox_2->currentText());
                                                                     rdv.setservice(comboBox_3->currentText());
                                                                     rdv.setid_client(lineEdit_5->text().toInt());
                                                                     rdv.setid_employe(lineEdit_3->text().toInt());
                                                                     rdv.setmail(lineEdit_6->text());

                                                                     // Exécuter une requête de mise à jour pour mettre à jour les données dans la base de données
                                                                     QSqlQuery itsaquery;
                                                                     itsaquery.prepare("UPDATE GS_RENDEZV SET DATE_RDV=:DATE_RDV, HEURE=:HEURE, SERVICE=:SERVICE, ID_CLIENT=:ID_CLIENT, ID_EMPLOYÉ=:ID_EMPLOYÉ, MAIL=:MAIL  WHERE ID_RDV=:ID_RDV");
                                                                     itsaquery.bindValue(":ID_RDV", c);
                                                                     itsaquery.bindValue(":DATE_RDV", date_str); // bind converted QString to query
                                                                     itsaquery.bindValue(":HEURE", rdv.getheure());
                                                                     itsaquery.bindValue(":SERVICE", rdv.getservice());
                                                                     itsaquery.bindValue(":ID_CLIENT", rdv.getid_client());
                                                                     itsaquery.bindValue(":ID_EMPLOYÉ", rdv.getid_employe());
                                                                     itsaquery.bindValue(":MAIL", rdv.getmail());

                                                                     return itsaquery.exec();
                                                                 }










                                                                 }
                                                             }
                                                             else{
                                                               return false;

                                                             }
                                                 }


QSqlQueryModel *rendezvous::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_RENDEZV");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_client"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("mail"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("id_employe"));
    return  model;
}


bool rendezvous::supprimer(int id_RDV)
{
    QSqlQuery query;
    QString c=QString::number(id_RDV);
    query.prepare("Delete from GS_RENDEZV where ID_RDV= :id_RDV");
    query.bindValue(":id_RDV",c);
    return  query.exec();
}


QSqlQueryModel *rendezvous::trie(QString s,QString f)
{
    QSqlQueryModel * model=new QSqlQueryModel();


 model->setQuery("select * from GS_RENDEZV ORDER BY "+s+" "+f+" ");

 model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));


 model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
 model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
 model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
 model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_client"));
 model->setHeaderData(6,Qt::Horizontal,QObject::tr("mail"));
 model->setHeaderData(7,Qt::Horizontal,QObject::tr("id_employe"));

    return  model;
}

QSqlQueryModel *rendezvous::chercher(QString n)
{
    QSqlQuery query;
       QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * FROM GS_RENDEZV WHERE  ID_RDV LIKE '%"+n+"%' ");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));

        model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_client"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("mail"));
        model->setHeaderData(7,Qt::Horizontal,QObject::tr("id_employe"));
       return model;

}
QSqlQueryModel* rendezvous::calendrier(const QDate& date)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM GS_RENDEZV WHERE date_RDV = :date");
    query.bindValue(":date", date);
    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_RDV"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_RDV"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("service"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("id_client"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("mail"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("id_employe"));
    }
    return model;
}
/*
int rendezvous::calculNettoyage()
 {


     QSqlQuery query;
     QSqlQuery query2;
         int count2=0;
         int count=0;
         query2.prepare("SELECT COUNT(ID_RDV) FROM  GS_RENDEZV ");
         query2.exec();
         while (query2.next()) {
              count2 =query2.value(0).toInt();

         }

         query.prepare("SELECT COUNT (SERVICE) FROM  GS_RENDEZVT where  SERVICE=:SEVICE");
         query.bindValue(":SERVICE","nettoyage");
          query.exec();

             // Récupération du résultat
             while (query.next()) {
                  count = query.value(0).toInt();

             }

             return (count*100)/count2;

}
int rendezvous::calculLavage()
 {


     QSqlQuery query;
     QSqlQuery query2;

         int count2=0;
         int count=0;
         query2.prepare("SELECT COUNT(ID_RDV) FROM  GS_RENDEZV ");
         query2.exec();
         while (query2.next()) {
              count2 =query2.value(0).toInt();

         }

         query.prepare("SELECT COUNT (SERVICE) FROM  GS_RENDEZVT where  SERVICE=:SEVICE");
         query.bindValue(":SERVICE","Lavage");
          query.exec();

             // Récupération du résultat
             while (query.next()) {
                  count = query.value(0).toInt();

             }

             return (count*100)/count2;
}
int rendezvous::calculVidange()
 {


     QSqlQuery query;
     QSqlQuery query2;

         int count2=0;
         int count=0;
         query2.prepare("SELECT COUNT(ID_RDV) FROM  GS_RENDEZV ");
         query2.exec();
         while (query2.next()) {
              count2 =query2.value(0).toInt();

         }

         query.prepare("SELECT COUNT (SERVICE) FROM  GS_RENDEZVT where  SERVICE=:SEVICE");
         query.bindValue(":SERVICE","Vidange");
          query.exec();

             // Récupération du résultat
             while (query.next()) {
                  count = query.value(0).toInt();

             }

             return (count*100)/count2;
}

*/









