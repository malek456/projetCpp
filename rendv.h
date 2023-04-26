#ifndef RENDV_H
#define RENDV_H
#include <QWidget>
#include <QPushButton>
//#include <QFrame>
#include <QPropertyAnimation>
#include <QDialog> 
#include "rendezvous.h"


namespace Ui {
class Rendv;
}

class Rendv : public QDialog
{
    Q_OBJECT

public:
    explicit Rendv(QWidget *parent = nullptr);
    ~Rendv();
    void showStatistics(QWidget *parent, QChartView *chartView);

private:
    Ui::Rendv *ui;

private slots:

    void on_pushButton_13_clicked();
    void on_pushButton_mail();

    void on_pushButton_clicked();

    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_modifier_clicked();

    void on_recherche_2_cursorPositionChanged(int arg1, int arg2);

    void on_Trier_clicked();

    void on_imp_2_clicked();

    void on_imp_clicked();

    void on_annuler_clicked();

    void on_valider_clicked();

    void on_imp_3_clicked();

    void on_toolButton_clicked();

    void on_pushButton_7_clicked();

    void on_calendarWidget_activated(const QDate &date);

    void on_calendarWidget_clicked(const QDate &date);

public:
    QPushButton *menuButton ;
    QWidget *side_menu;
    QPropertyAnimation *sideBarAnimation;
    rendezvous rdv;
};

#endif // RENDV_H
