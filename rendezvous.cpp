#include "rendezvous.h"

rendezvous::rendezvous(int a,QString b,QString c,QString d,int e,int f){
    id_RDV=a;
    date_RDV=b;
    heure=c;
    service=d;
    id_client=e;
    id_employe=f;
}

bool rendezvous::ajouter(){
    QSqlQuery query;
    QString c = QString::number(id_RDV);
    query.prepare("INSERT INTO GS_RENDEZV (ID_RDV,DATE_RDV,HEURE,SERVICE,ID_CLIENT,ID_EMPLOYE)" "values (:id_RDV, :date_RDV, :heure, :service, :id_client, :id_employe)");
    query.bindValue(":id_RDV",c);
    query.bindValue(":date_RDV",date_RDV);
    query.bindValue(":heure",heure);
    query.bindValue(":service",service);
    query.bindValue(":id_client",id_client);
    query.bindValue(":id_employe",id_employe);
    return query.exec();

   }

QSqlQueryModel *rendezvous::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_EMPLOYÉ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_RDV"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date_RDV"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("heure"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("service"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_client"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("id_employe"));
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
