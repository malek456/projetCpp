#include "employe.h"
#include"emp.h"
#include <QLineEdit>
#include <QFormLayout>
#include <QFormLayout>
#include <QDialog>
#include <QGroupBox>
#include <QLabel>

employe::employe(int cin, QString nom, QString pre, int num,  QString add, QString mail, QString fctn, QString mdp)
{
    this->CIN=cin;
    this->nom = nom;
    this->prenom = pre;
    this->num = num;
    this->adresse = add;
    this->mail = mail;
    this->fonction = fctn;
    this->mdp = mdp;

}

bool employe::ajouter()
{
   QSqlQuery query;
   QString c = QString::number(CIN);
   QString n = QString::number(num);
   query.prepare("INSERT INTO GS_EMPLOYÉ (CIN,NOM,PRENOM,NUM_TEL,ADRESSE,MAIL,FONCTION,MOT_DE_PASSE)" "values (:CIN, :nom, :prenom, :num, :adresse, :mail, :fonction, :mdp)");
   query.bindValue(":CIN",c);
   query.bindValue(":nom",nom);
   query.bindValue(":prenom",prenom);
   query.bindValue(":num",num);
   query.bindValue(":adresse",adresse);
   query.bindValue(":mail",mail);
   query.bindValue(":fonction",fonction);
   query.bindValue(":mdp",mdp);
   return query.exec();

}

QSqlQueryModel *employe::afficher()
{


    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from GS_EMPLOYÉ");
   // model->insertColumn(model->columnCount());
   // model->setHeaderData(model->columnCount() - 1, Qt::Horizontal, QObject::tr("ACTION"));
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("NUM_TEL"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ADRESSE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("MAIL"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("MOT_DE_PASSE"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("FONCTION"));
   // model->setHeaderData(8,Qt::Horizontal,QObject::tr("ACTION"));
    return  model;
}

bool employe::supprimer(int cin)
{
    QSqlQuery query;
    QString c=QString::number(cin);
    query.prepare("Delete from GS_EMPLOYÉ where CIN= :cin");
    query.bindValue(":cin",c);
    return  query.exec();
}

bool employe::modifier(int cin)
{
    QSqlQuery query;
        QString c = QString::number(cin);
        query.prepare("SELECT * FROM GS_EMPLOYÉ WHERE CIN=:cin");
        query.bindValue(":cin", c);
        bool test = query.exec();
        if (test)
        {
            if (query.next())
            {
                int num = query.value(3).toInt();
                QString nom = query.value(1).toString();
                QString prenom = query.value(2).toString();
                QString adresse = query.value(4).toString();
                QString mail = query.value(5).toString();
                QString fonction = query.value(7).toString();
                QString mdp = query.value(6).toString();
                employe e(cin, nom, prenom, num, adresse, mail, fonction, mdp);

                // Utilisez un formulaire pour modifier les données de l'employé
                QDialog* form = new QDialog();

                QFormLayout* layout = new QFormLayout(form);
                QLineEdit* nomEdit = new QLineEdit(nom);
                layout->addRow("Nom:", nomEdit);
                QLineEdit* prenomEdit = new QLineEdit(prenom);
                layout->addRow("Prénom:", prenomEdit);
                QLineEdit* numEdit = new QLineEdit(QString::number(num));
                layout->addRow("Numéro de téléphone:", numEdit);
                QLineEdit* adresseEdit = new QLineEdit(adresse);
                layout->addRow("Adresse:", adresseEdit);
                QLineEdit* mailEdit = new QLineEdit(mail);
                layout->addRow("Email:", mailEdit);
                QLineEdit* fonctionEdit = new QLineEdit(fonction);
                layout->addRow("Fonction:", fonctionEdit);
                QLineEdit* mdpEdit = new QLineEdit(mdp);
                layout->addRow("Mot de passe:", mdpEdit);
                QPushButton* okButton = new QPushButton("OK", form);
                layout->addWidget(okButton);
                QObject::connect(okButton, &QPushButton::clicked, form, &QDialog::accept);
                QPushButton* cancelButton = new QPushButton("Annuler", form);
                layout->addWidget(cancelButton);
                QObject::connect(cancelButton, &QPushButton::clicked, form, &QDialog::reject);


                /*QDialog* form = new QDialog();
                QVBoxLayout* layout = new QVBoxLayout(form);

                // Add labels to the form
                QLabel* nomLabel = new QLabel("Nom:");
                QLabel* prenomLabel = new QLabel("Prénom:");
                QLabel* numLabel = new QLabel("Numéro de téléphone:");
                QLabel* adresseLabel = new QLabel("Adresse:");
                QLabel* mailLabel = new QLabel("Email:");
                QLabel* fonctionLabel = new QLabel("Fonction:");
                QLabel* mdpLabel = new QLabel("Mot de passe:");

                // Add fields to the form
                QLineEdit* nomEdit = new QLineEdit(nom);
                QLineEdit* prenomEdit = new QLineEdit(prenom);
                QLineEdit* numEdit = new QLineEdit(QString::number(num));
                QLineEdit* adresseEdit = new QLineEdit(adresse);
                QLineEdit* mailEdit = new QLineEdit(mail);
                QLineEdit* fonctionEdit = new QLineEdit(fonction);
                QLineEdit* mdpEdit = new QLineEdit(mdp);

                // Group related fields together
                QGroupBox* contactGroupBox = new QGroupBox("Informations de contact");
                QFormLayout* contactLayout = new QFormLayout(contactGroupBox);
                contactLayout->addRow(nomLabel, nomEdit);
                contactLayout->addRow(prenomLabel, prenomEdit);
                contactLayout->addRow(numLabel, numEdit);
                contactLayout->addRow(adresseLabel, adresseEdit);
                contactLayout->addRow(mailLabel, mailEdit);
                layout->addWidget(contactGroupBox);

                QGroupBox* loginGroupBox = new QGroupBox("Informations de connexion");
                QFormLayout* loginLayout = new QFormLayout(loginGroupBox);
                loginLayout->addRow(fonctionLabel, fonctionEdit);
                loginLayout->addRow(mdpLabel, mdpEdit);
                layout->addWidget(loginGroupBox);

                // Add buttons to the form
                QHBoxLayout* buttonLayout = new QHBoxLayout;
                QPushButton* okButton = new QPushButton("OK", form);
                QPushButton* cancelButton = new QPushButton("Annuler", form);
                buttonLayout->addWidget(okButton);
                buttonLayout->addWidget(cancelButton);
                layout->addLayout(buttonLayout);

                QObject::connect(okButton, &QPushButton::clicked, form, &QDialog::accept);
                QObject::connect(cancelButton, &QPushButton::clicked, form, &QDialog::reject);*/

                if (form->exec() == QDialog::Accepted)
                {
                    // Retrieve the modified data from the input fields
                    e.setNom(nomEdit->text());
                    e.setPrenom(prenomEdit->text());
                    e.setnum(numEdit->text().toInt());
                    e.setadresse(adresseEdit->text());
                    e.setmail(mailEdit->text());
                    e.setfonction(fonctionEdit->text());
                    e.setmdp(mdpEdit->text());

                // Exécuter une requête de mise à jour pour mettre à jour les données dans la base de données
                QSqlQuery updateQuery;
                updateQuery.prepare("UPDATE GS_EMPLOYÉ SET NOM=:nom, PRENOM=:prenom, NUM_TEL=:num, ADRESSE=:adresse, MAIL=:mail, FONCTION=:fonction, MOT_DE_PASSE=:mdp WHERE CIN=:cin");
                updateQuery.bindValue(":nom", e.getNom());
                updateQuery.bindValue(":prenom", e.getPrenom());
                updateQuery.bindValue(":num", e.getnum());
                updateQuery.bindValue(":adresse", e.getadresse());
                updateQuery.bindValue(":mail", e.getmail());
                updateQuery.bindValue(":fonction", e.getfonction());
                updateQuery.bindValue(":mdp", e.getmdp());
                updateQuery.bindValue(":cin", cin);



                return updateQuery.exec();
            }
            }
        }
        return false;
}


