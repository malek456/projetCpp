#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H
#include <QPropertyAnimation>
#include <QDialog>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QDate>
#include <QChartView>
#include <QtCharts>

class rendezvous
{
    int id_RDV;
    QDate date_RDV;
    QString heure;
    QString service;
    int id_client,id_employe;
    QString mail;
  public:
    rendezvous(){}
    rendezvous(int,QDate,QString,QString,QString,int,int);

    QString getheure(){return heure;};
    QString getservice(){return service;};
   QDate getdate_RDV(){return date_RDV;};
    int getid_RDV(){return id_RDV;};
    int getid_client(){return id_client;};
    int getid_employe(){return  id_employe;};
     QString getmail(){return mail;};

    void setid_RDV(int n){id_RDV=n;};
    void setdate_RDV(QDate p){date_RDV=p;};
    void setheure(QString a){heure=a;};
    void setservice(QString m){service=m;};
    void setid_client(int f){id_client=f;};
    void setid_employe(int g){id_employe=g;};
    void setmail(QString x){mail=x;};

    bool ajouter();
    QSqlQueryModel *afficher();
   QSqlQueryModel* calendrier(const QDate& date);
    bool supprimer(int);
    bool modifier(int);
    //QSqlQueryModel * chercher(int id_client );
    //void filtrer(QString recherche);
   //void filterTable(QTableView *tableView_2, QString searchStr);
   //QSqlQueryModel *chercher_rdv(int id_RDV);
   //int calcul();
   QSqlQueryModel *chercher(QString n);
   QSqlQueryModel *trie(QString s,QString f);
   //int calculNettoyage();
   //int calculLavage();
   //int calculVidange();
   void showStatistics(QWidget *parent, QChartView *chartView);
};

#endif // RENDEZVOUS_H
