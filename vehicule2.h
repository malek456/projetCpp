#ifndef VEHICULE2_H
#define VEHICULE2_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>

class vehiculeE
{
private:

 QString MATRICULE;
    QString MARQUE;
    QString MODELE;
    QString DESCRIPTION;
    QString ANNEE_FABRICATION;
    QString TYPE_CARBURANT;
    int ID_CLIENT;
     QString PHOTO;
     int TAILLEPNEUX;
     int POIDVOITURE;
     int LONGEURVOITURE;
public:
    vehiculeE();
    vehiculeE(QString MATRICULE,QString MARQUE,QString  MODELE,QString DESCRIPTION,QString  ANNEE_FABRICATION,QString TYPE_CARBURANT, int  ID_CLIENT,QString photo,int TAILLEPNEU, int POIDVOITURE, int LONGEURVOITURE);
    vehiculeE(QString MATRICULE,QString MARQUE,QString  MODELE,QString DESCRIPTION,QString  ANNEE_FABRICATION,QString TYPE_CARBURANT, int  ID_CLIENT,QString PHOTO);
    vehiculeE(QString MATRICULE, int  ID_CLIENT,int TAILLEPNEUX, int POIDVOITURE, int LONGEURVOITURE);

   QString getMATRICULE() {return MATRICULE;}
    void setMATRICULE( int i){MATRICULE=i;}

    QString getMARQUE() {return MARQUE;}
    void setMARQUE( QString n){MARQUE=n;}
    QString getMODELE() {return MODELE;}
    void setMODELE( QString p){MODELE=p;}
    QString getDESCRIPTION() {return DESCRIPTION;}
    void setDESCRIPTION( int a){DESCRIPTION=a;}
    QString getANNEE_FABRICATION() {return ANNEE_FABRICATION;}
    void setANNEE_FABRICATION( QString g){ANNEE_FABRICATION=g;}
    QString getTYPE_CARBURANT() {return TYPE_CARBURANT;}
    void setTYPE_CARBURANT( QString s){TYPE_CARBURANT=s;}
    int getID_CLIENT() {return ID_CLIENT;}
    void setID_CLIENT( int c){ID_CLIENT=c;}
    bool ajouter();
       QSqlQueryModel * afficher();
       bool supprimer(int MAT);
       bool modifier();
       bool modifier2();
       QSqlQueryModel * afficher_search(QString ch);
       QSqlQueryModel * affichertrie(QString ch);

};

#endif //

 // VEHICULE_H
