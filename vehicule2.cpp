#include "vehicule2.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QDebug>
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


vehiculeE::vehiculeE()
{

      MATRICULE="";
      MARQUE="";
      MODELE="";
      DESCRIPTION="";
      ANNEE_FABRICATION="";
      TYPE_CARBURANT="";
      ID_CLIENT=0;
      PHOTO="";
      TAILLEPNEUX=0;
      POIDVOITURE=0;
      LONGEURVOITURE=0;

}

vehiculeE::vehiculeE(QString MATRICULE,QString MARQUE,QString  MODELE,QString DESCRIPTION,QString  ANNEE_FABRICATION,QString TYPE_CARBURANT, int  ID_CLIENT,QString PHOTO,int TAILLEPNEUX, int POIDVOITURE, int LONGEURVOITURE)

{
    this->MATRICULE=MATRICULE;
    this->MARQUE=MARQUE;
    this-> MODELE= MODELE;
    this->DESCRIPTION=DESCRIPTION;
    this-> ANNEE_FABRICATION= ANNEE_FABRICATION;
    this->TYPE_CARBURANT=TYPE_CARBURANT;
    this->ID_CLIENT=ID_CLIENT;
    this->PHOTO=PHOTO;
    this->TAILLEPNEUX=TAILLEPNEUX;
    this->POIDVOITURE=POIDVOITURE;
    this->LONGEURVOITURE=LONGEURVOITURE;

}

vehiculeE::vehiculeE(QString MATRICULE, int  ID_CLIENT,int TAILLEPNEUX, int POIDVOITURE, int LONGEURVOITURE)

{
    this->MATRICULE=MATRICULE;
    this->ID_CLIENT=ID_CLIENT;
    this->TAILLEPNEUX=TAILLEPNEUX;
    this->POIDVOITURE=POIDVOITURE;
    this->LONGEURVOITURE=LONGEURVOITURE;

}

vehiculeE::vehiculeE(QString MATRICULE,QString MARQUE,QString  MODELE,QString DESCRIPTION,QString  ANNEE_FABRICATION,QString TYPE_CARBURANT, int  ID_CLIENT,QString PHOTO)

{
    this->MATRICULE=MATRICULE;
    this->MARQUE=MARQUE;
    this-> MODELE= MODELE;
    this->DESCRIPTION=DESCRIPTION;
    this-> ANNEE_FABRICATION= ANNEE_FABRICATION;
    this->TYPE_CARBURANT=TYPE_CARBURANT;
    this->ID_CLIENT=ID_CLIENT;
    this->PHOTO=PHOTO;


}

QSqlQueryModel * vehiculeE:: afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM GS_VEHICULE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("MATRICULE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("MODELE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ANNEE_FABRICATION"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("TYPE_CARBURANT"));
   // model->setHeaderData(6,Qt::Horizontal,QObject::tr("ID_CLIENT"));
   // model->setHeaderData(7,Qt::Horizontal,QObject::tr("TAILLEPNEUX"));
   // model->setHeaderData(8,Qt::Horizontal,QObject::tr("POIDVOITURE"));
   // model->setHeaderData(9,Qt::Horizontal,QObject::tr("LONGEURVOITURE"));


          return model;
}


bool vehiculeE::ajouter()
{


    QSqlQuery query;

    //QString value1 = QString::number(MATRICULE);

    QString value4 = QString::number(ID_CLIENT);
    QString value5= QString::number(TAILLEPNEUX);
    QString value6 = QString::number(POIDVOITURE);
    QString value7 = QString::number(LONGEURVOITURE);
    //qDebug () << PHOTO.size();
    qDebug () << value5 ;

   query.prepare("INSERT INTO GS_VEHICULE (MATRICULE,MARQUE,MODELE,DESCRIPTION,ANNEE_FABRICATION,TYPE_CARBURANT,ID_CLIENT,TAILLEPNEUX,POIDVOITURE,LONGEURVOITURE)" "VALUES (:MATRICULE, :MARQUE, :MODELE,:DESCRIPTION, :ANNEE_FABRICATION, :TYPE_CARBURANT, :ID_CLIENT, :TAILLEPNEUX, :POIDVOITURE, :LONGEURVOITURE)");

   query.bindValue(":MATRICULE",MATRICULE);
   query.bindValue(":MARQUE",MARQUE);
   query.bindValue(":MODELE",MODELE);

   query.bindValue(":DESCRIPTION",DESCRIPTION);
   query.bindValue(":ANNEE_FABRICATION",ANNEE_FABRICATION);
   query.bindValue(":TYPE_CARBURANT",TYPE_CARBURANT);
   query.bindValue(":ID_CLIENT",value4);
   query.bindValue(":TAILLEPNEUX",value5);
   query.bindValue(":POIDVOITURE",value6);
   query.bindValue(":LONGEURVOITURE",value7);
   qDebug() << "Reached query code";
   return query.exec();
}

bool vehiculeE::supprimer(int MAT)
{
    QSqlQuery query;
    query.prepare("DELETE FROM GS_VEHICULE WHERE MATRICULE = (:id)");
    query.bindValue(":id", MAT);

    return query.exec();

}

bool vehiculeE::modifier()
{
    QSqlQuery query;

    QString value4 = QString::number(ID_CLIENT);
    QString value5= QString::number(TAILLEPNEUX);
    QString value6 = QString::number(POIDVOITURE);
    QString value7 = QString::number(LONGEURVOITURE);
    query.prepare("UPDATE GS_VEHICULE SET MARQUE = :MARQUE, MODELE = :MODELE,DESCRIPTION = :DESCRIPTION, ANNEE_FABRICATION = :ANNEE_FABRICATION, TYPE_CARBURANT = :TYPE_CARBURANT, ID_CLIENT = :ID_CLIENT, TAILLEPNEUX = :TAILLEPNEUX, POIDVOITURE = :POIDVOITURE, LONGEURVOITURE = :LONGEURVOITURE  where MATRICULE = :MATRICULE");

   query.bindValue(":MARQUE",MARQUE);
   query.bindValue(":MODELE",MODELE);

   query.bindValue(":DESCRIPTION",DESCRIPTION);
   query.bindValue(":ANNEE_FABRICATION",ANNEE_FABRICATION);
   query.bindValue(":TYPE_CARBURANT",TYPE_CARBURANT);
   query.bindValue(":ID_CLIENT",value4);
   query.bindValue(":MATRICULE",MATRICULE);
   query.bindValue(":TAILLEPNEUX",value5);
   query.bindValue(":POIDVOITURE",value6);
   query.bindValue(":LONGEURVOITURE",value7);

qDebug() << MARQUE;

    return query.exec();
}

bool vehiculeE::modifier2()
{
    QSqlQuery query;


    QString value5= QString::number(TAILLEPNEUX);
    QString value6 = QString::number(POIDVOITURE);
    QString value7 = QString::number(LONGEURVOITURE);
    query.prepare("UPDATE GS_VEHICULE SET TAILLEPNEUX = :TAILLEPNEUX, POIDVOITURE = :POIDVOITURE, LONGEURVOITURE = :LONGEURVOITURE  where MATRICULE = :MATRICULE");


    query.bindValue(":MATRICULE",MATRICULE);
    query.bindValue(":TAILLEPNEUX",value5);
    query.bindValue(":POIDVOITURE",value6);
    query.bindValue(":LONGEURVOITURE",value7);

qDebug() << MARQUE;

    return query.exec();
}

QSqlQueryModel *vehiculeE::afficher_search(QString ch) {
    QSqlQueryModel * model=new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("SELECT * FROM GS_VEHICULE WHERE MARQUE LIKE ? OR MATRICULE LIKE ? ORDER BY MARQUE");
        query.addBindValue(ch+ "%");
        query.addBindValue(ch+ "%");
        query.exec();
        model->setQuery(query);

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("MATRICULE"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("MARQUE"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("MODELE"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("DESCRIPTION"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("ANNEE_FABRICATION"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("TYPE_CARBURANT"));
        //model->setHeaderData(5,Qt::Horizontal,QObject::tr("ID_CLIENT"));

              return model;
}
QSqlQueryModel * vehiculeE:: affichertrie(QString ch)
{    QSqlQuery query;
     QSqlQueryModel * model=new QSqlQueryModel();
     query.prepare("SELECT * FROM GS_VEHICULE ORDER BY " + ch);
     query.exec();
     model->setQuery(query);
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("MATRICULE"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("MARQUE"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("MODELE"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("DESCRIPTION"));
     model->setHeaderData(4,Qt::Horizontal,QObject::tr("ANNEE_FABRICATION"));
     model->setHeaderData(5,Qt::Horizontal,QObject::tr("TYPE_CARBURANT"));
     //model->setHeaderData(5,Qt::Horizontal,QObject::tr("ID_CLIENT"));

          return model;
}
