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

bool employe::modifier(int cin, QString nom, QString prenom, int num, QString adresse, QString mail, QString fonction, QString mdp) {
    QSqlQuery query;
    query.prepare("UPDATE GS_EMPLOYÉ SET NOM=:NOM, PRENOM=:PRENOM, NUM_TEL=:NUM_TEL, ADRESSE=:ADRESSE, MAIL=:MAIL, FONCTION=:FONCTION, MOT_DE_PASSE=:MOT_DE_PASSE WHERE CIN=:CIN");
    query.bindValue(":NOM", nom);
    query.bindValue(":PRENOM", prenom);
    query.bindValue(":NUM_TEL", num);
    query.bindValue(":ADRESSE", adresse);
    query.bindValue(":MAIL", mail);
    query.bindValue(":FONCTION", fonction);
    query.bindValue(":MOT_DE_PASSE", mdp);
    query.bindValue(":CIN", cin);
    return query.exec();
}

void employe::searchEmployee(QSqlTableModel *model, QComboBox *comboBox, QLineEdit *lineEdit)
{
        QString searchTerm = lineEdit->text().trimmed();
        QString searchFilter = comboBox->currentText();

        QString queryText = "1=1";
        if (!searchTerm.isEmpty()) {
            if (searchFilter == "nom") {
                queryText += QString(" AND nom LIKE '%%1%' ").arg(searchTerm);
            } else if (searchFilter == "prenom") {
                queryText += QString(" AND prenom LIKE '%%1%'").arg(searchTerm);
            }
        }

        model->setFilter(queryText);
        model->select();
}

void employe::sortEmployee(QSqlQueryModel *model, QComboBox *comboBox, QComboBox *comboBox_2)
{





            QString sortField = comboBox->currentText();
            QString sortOrder = comboBox_2->currentText();

            QString orderClause = "";
            if (sortField == "nom") {
                orderClause += "nom";
            } else if (sortField == "prenom") {
                orderClause += "prenom";
            }

            if (sortOrder == "croissant") {
                orderClause += " ASC";
            } else if (sortOrder == "décroissant") {
                orderClause += " DESC";
            }

            QString queryText = model->query().lastQuery();
            int orderPos = queryText.lastIndexOf("ORDER BY");
            if (orderPos != -1) {
                queryText = queryText.left(orderPos);
            }

            model->setQuery(queryText + " ORDER BY " + orderClause);
}

