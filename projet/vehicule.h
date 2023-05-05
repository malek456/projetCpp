#ifndef VEHICULE_H
#define VEHICULE_H
#include <QPushButton>
//#include <QFrame>
#include <QWidget>
#include <QPropertyAnimation>
#include <QDialog>
#include "vehicule2.h"

namespace Ui {
class vehicule;
}

class vehicule : public QDialog
{
    Q_OBJECT

public:
    explicit vehicule(QWidget *parent = nullptr);
    ~vehicule();

private:
    Ui::vehicule *ui;


private slots:

    void on_pushButton_13_clicked();

    void on_modifier_clicked();

    void on_supprimer_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_ajouter_clicked();

    void on_ajouter_2_clicked();

    void on_ajouter_3_clicked();

    void on_recherche_textEdited(const QString &arg1);

    void on_ajouter_4_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    QImage on_pushButton_clicked();

    void on_ajouter_5_clicked();

    void on_ajouter_6_clicked();

    void on_ajouter_7_clicked();

private:
    QPushButton *menuButton ;
    QWidget *side_menu;
    QPropertyAnimation *sideBarAnimation;
    vehiculeE v;
};



#endif // VEHICULE_H
