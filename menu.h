#ifndef MENU_H
#define MENU_H 

#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog 
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:

    void on_pushButton_rdv_clicked();

    void on_pushButton_emp_clicked();

    void on_pushButton_cl_clicked();

    void on_pushButton_eq_clicked();

    void on_pushButton_veh_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
