#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class rendezvous
{
    int id_RDV;
    QString date_RDV;
    QString heure,service;
    int id_client,id_employe;
  public:
    rendezvous(){}
    rendezvous(int,QString,QString,QString,int,int);

    QString getheure(){return heure;};
    QString getservice(){return service;};
    QString getdate_RDV(){return date_RDV;};
    int getid_RDV(){return id_RDV;};
    int getid_client(){return id_client;};
    int getid_employe(){return  id_employe;};

    void setid_RDV(int n){id_RDV=n;};
    void setdate_RDV(QString p){date_RDV=p;};
    void setheure(QString a){heure=a;};
    void setservice(QString m){service=m;};
    void setid_client(int f){id_client=f;};
    void setid_employe(int g){id_employe=g;};

    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
};

#endif // RENDEZVOUS_H
