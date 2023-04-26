#ifndef EMP_H
#define EMP_H
#include <QDialog>
#include <QPushButton>
#include <QPropertyAnimation>
#include "employe.h"
#include "chat.h"

#include <QTableView>
#include <QComboBox>
#include <QSqlTableModel>
#include <QChart>
#include <QVBoxLayout>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>

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
     void showStatistics(QWidget *parent, QChartView *chartView);
     void updateChart(QChartView *chartView);


private slots:


   void on_pushButton_13_clicked();

   void on_pushButton_pdf();

   void on_pushButton_stat();

   void on_pushButton_5_clicked();

   void on_ajouter_clicked();

   void on_supprimer_clicked();


   void on_modifier_clicked();

   void on_valider_clicked();

   void on_recherche_clicked();

   void on_recherche_2_textChanged();

   void on_comboBox_2_currentTextChanged();

   void on_comboBox_sort_by_currentTextChanged();

   void on_comboBox_order_sort_currentTextChanged();

   void on_pushButton_7_clicked();

   void on_pushButton_chat();

   void onChatButtonClicked();



   void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void on_refresh_clicked();

   void on_pushButton_8_clicked();

private:
   QPushButton *menuButton ;
   QWidget *side_menu;
   QPropertyAnimation *sideBarAnimation;
   Ui::emp *ui;
   employe Emp;
   QString m_chatCin; // declare m_chatCin as a member variable

   chat m_chatWindow;
};






#endif // EMP_H
