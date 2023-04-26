#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>

#include <QDialog>

namespace Ui {
class connexion;
}

class connexion : public QDialog
{
    Q_OBJECT
     QSqlDatabase db;

public:
    explicit connexion(QWidget *parent = nullptr);
    ~connexion();
     bool createconnection();
     void closeConnection();

private:
    Ui::connexion *ui;
};

#endif // CONNEXION_H
