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


private slots:


   void on_pushButton_13_clicked();
   void on_pushButton_5_clicked();

   void on_ajouter_clicked();

   void on_supprimer_clicked();


   void on_modifier_clicked();

private:
   QPushButton *menuButton ;
   QWidget *side_menu;
   QPropertyAnimation *sideBarAnimation;
   Ui::emp *ui;
   employe Emp;
};






#endif // EMP_H
