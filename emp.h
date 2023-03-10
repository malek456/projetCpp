#ifndef EMP_H
#define EMP_H
#include <QDialog>
#include <QPushButton>
#include <QPropertyAnimation>
#include "employe.h"

namespace Ui {
class emp;
}

class emp : public QDialog
{
    Q_OBJECT

public:
    explicit emp(QWidget *parent = nullptr);
    ~emp();
     void tester( QSqlQueryModel * model);
     emp(){};
     emp(int, QString, QString, int,  QString, QString, QString, QString);

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


private slots:


   void on_pushButton_13_clicked();
   void on_pushButton_5_clicked();

   void on_ajouter_clicked();

   void on_supprimer_clicked();


private:
   QPushButton *menuButton ;
   QWidget *side_menu;
   QPropertyAnimation *sideBarAnimation;
   Ui::emp *ui;
   employe Emp;

   QString nom,prenom,adresse,mail,fonction,mdp;
   int CIN, num;
};




#endif // EMP_H
