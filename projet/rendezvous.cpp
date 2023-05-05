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
#include <QSqlRecord>

rendezvous::rendezvous(int a,QDate b,QString c,QString d,QString z,int e,int f,int g){
    id_RDV=a;
    date_RDV=b;
    heure=c;
    service=d;
    id_client=e;
    id_employe=f;
    mail=z;
    mdp=g;
}

bool rendezvous::ajouter(){
    QString k = QString::number(mdp);
    QSqlQuery query;
    QString c = QString::number(id_RDV);
    QString d = QString::number(id_client);
    QString e = QString::number(id_employe);
    query.prepare("SELECT * FROM GS_RENDEZV WHERE DATE_RDV=:date_RDV AND HEURE=:heure");
    query.bindValue(":date_RDV",date_RDV);
    query.bindValue(":heure",heure);
    query.exec();
    qWarning()<<"query.exec() ajou divin"<<query.exec();
    if(query.next()){
        // a record with the same date_rdv and heure already exists in the database
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                QObject::tr("Date et Heure déjà reservées.\n"
                                            "Click cancel to exit"), QMessageBox::Cancel);
        return false;
    } else {
        // no record with the same date_rdv and heure exists in the database, insert a new record
        query.prepare("INSERT INTO GS_RENDEZV (ID_RDV,DATE_RDV,HEURE,SERVICE,ID_CLIENT,ID_EMPLOYÉ,MAIL,MDP)" "values (:id_RDV, :date_RDV, :heure, :service, :id_client, :id_employe, :mail, :mdp)");
        query.bindValue(":id_RDV",c);
        query.bindValue(":date_RDV",date_RDV);
        query.bindValue(":heure",heure);
        query.bindValue(":service",service);
        query.bindValue(":id_client",d);
        query.bindValue(":id_employe",e);
        query.bindValue(":mail",mail);
        query.bindValue(":mdp",k);
        return query.exec();
    }
}

bool rendezvous::modifier()
{QSqlQuery query;
    QString c = QString::number(id_RDV);
    QString d = QString::number(id_client);
    QString e = QString::number(id_employe);
    query.prepare("SELECT * FROM GS_RENDEZV WHERE DATE_RDV=:date_RDV AND HEURE=:heure");
    query.bindValue(":date_RDV",date_RDV);
    query.bindValue(":heure",heure);

    query.prepare("UPDATE GS_RENDEZV SET DATE_RDV=:DATE_RDV, HEURE=:HEURE, SERVICE=:SERVICE, ID_CLIENT=:ID_CLIENT, ID_EMPLOYÉ=:ID_EMPLOYÉ, MAIL=:MAIL  WHERE ID_RDV=:ID_RDV");
                                                 query.bindValue(":ID_RDV", c);
                                                 query.bindValue(":DATE_RDV", date_RDV); // bind converted QString to query
                                                 query.bindValue(":HEURE", heure);
                                                 query.bindValue(":SERVICE", service);
                                                 query.bindValue(":ID_CLIENT", id_employe);
                                                 query.bindValue(":ID_EMPLOYÉ", id_employe);
                                                 query.bindValue(":MAIL", mail);

qDebug() << id_RDV;

    return query.exec();

}


QSqlQueryModel *rendezvous::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_RENDEZV");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_client"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_employe"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("mail"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("mot de passe"));
    model->setHeaderData(8,Qt::Horizontal,QObject::tr("Etat du rendez-vous"));
    return model;
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
 model->setHeaderData(8,Qt::Horizontal,QObject::tr("mot de passe"));

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
        model->setHeaderData(8,Qt::Horizontal,QObject::tr("mot de passe"));
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
        //model->setQuery("select * from GS_RENDEZV");
        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));
        model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
        model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
        model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
        model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_client"));
        model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_employe"));
        model->setHeaderData(6,Qt::Horizontal,QObject::tr("mail"));
        model->setHeaderData(7,Qt::Horizontal,QObject::tr("mot de passe"));
        model->setHeaderData(8,Qt::Horizontal,QObject::tr("Etat du rendez-vous"));
    }
    return model;
}
