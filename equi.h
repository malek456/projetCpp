#ifndef EQUI_H
#define EQUI_H
#include <QWidget>
#include <QPushButton>
//#include <QFrame>
#include <QPropertyAnimation>
#include <QDialog>
#include "equipement.h"
#include <QChart>
#include <QVBoxLayout>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>


namespace Ui {
class Equi;
}

class Equi : public QDialog
{
    Q_OBJECT

public:
    explicit Equi(QWidget *parent = nullptr);
    ~Equi();
    void updateChart(QChartView *chartView);

private:
    Ui::Equi *ui;

private slots:

    void on_pushButton_13_clicked();

    void on_pushButton_clicked();

    void on_ajouter_clicked();

    void on_supprimer_clicked();

    void on_modifier_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_stat_clicked();

    void showStatistics(QWidget *parent, QChartView *chartView);

    void on_recherche_2_textChanged(const QString &arg1);

    void on_notif_clicked();

    void on_pushButton_notif_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_order_sort_currentTextChanged(const QString &arg1);

    void on_pushButton_QRcode_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_11_clicked();

private:
    QPushButton *menuButton ;
    QWidget *side_menu;
    QPropertyAnimation *sideBarAnimation;

    equipement eq;
};





#endif // EQUI_H