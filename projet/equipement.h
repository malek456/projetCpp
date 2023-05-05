#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QLineEdit>
#include <QComboBox>


class equipement
{
    int ID_EQUI;
    QString NOM_EQUI;
    QDate DATE_ACHAT;
    QDate DATE_FIN_GARANTIE;
    QString ETAT,TYPE;

  public:
    equipement(){}
    equipement(int,QString,QDate,QDate,QString,QString);

    QString getnomequi(){return NOM_EQUI;};
    QDate getdateachat(){return DATE_ACHAT;};
    QDate getdatefingarantie(){return DATE_FIN_GARANTIE;};
    QString getetatequi(){return ETAT;};
    QString gettypeequi(){return TYPE;};
    int getidequi(){return  ID_EQUI;};

    void setnomequi(QString n){NOM_EQUI=n;};
    void setdateachat(QDate p){DATE_ACHAT=p;};
    void setdatefingarantie(QDate a){DATE_FIN_GARANTIE=a;};
    void setetatequi(QString m){ETAT=m;};
    void settypeequi(QString f){TYPE=f;};
    void setidequi(int g){ID_EQUI=g;};

    bool ajouter();
    QSqlQueryModel *afficher();
    QSqlQueryModel *afficher_notif();
    bool supprimer(int);
    bool modifier(int);
    void searchEqui(QSqlTableModel *model, QLineEdit *lineEdit);
    void sortEmployee(QSqlQueryModel *model, QComboBox *comboBox, QComboBox *comboBox_2);
    void generateQRCode(QString NomEqui,QString etat,QString type,int idEqui);
};

#endif // EQUIPEMENT_H
