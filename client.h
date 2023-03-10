#ifndef CLIENT_H
#define CLIENT_H
#include <QWidget>
#include <QPushButton>
//#include <QFrame>
#include <QPropertyAnimation>
#include <QDialog>

namespace Ui {
class client;
}

class client : public QDialog
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = nullptr);
    ~client();

private:
    Ui::client *ui;

private slots:

    void on_pushButton_15_clicked();

    void on_pushButton_clicked();

private:
    QPushButton *menuButton ;
    QWidget *side_menu;
    QPropertyAnimation *sideBarAnimation;
};

#endif // CLIENT_H
