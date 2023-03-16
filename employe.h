#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class employe
{
    QString nom,prenom,adresse,mail,fonction,mdp;
    int CIN, num;
public:
    employe(){};
    employe(int, QString, QString, int,  QString, QString, QString, QString);

    QString getNom(){return nom;};
    QString getPrenom(){return prenom;};
    QString getadresse(){return adresse;};
    QString getmail(){return mail;};
    QString getfonction(){return fonction;};
    QString getmdp(){return mdp;};
    int getCIN(){return CIN;};
    int getnum(){ return num;};

    void setNom(QString n){nom=n;};
    void setPrenom(QString p){prenom=p;};
    void setadresse(QString a){adresse=a;};
    void setmail(QString m){mail=m;};
    void setfonction(QString f){fonction=f;};
    void setmdp(QString mdp){this->mdp=mdp;};
    void setCIN(int c){CIN=c;};
    void setnum(int num){this->num=num;};

    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
    bool modifier(int cin);

};

#endif // EMPLOYE_H
