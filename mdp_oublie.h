#ifndef MDP_OUBLIE_H
#define MDP_OUBLIE_H

#include <QDialog>

namespace Ui {
class mdp_oublie;
}

class mdp_oublie : public QDialog
{
    Q_OBJECT

public:
    explicit mdp_oublie(QWidget *parent = nullptr);
    ~mdp_oublie();
    void sendMail(QString from, QString to, QString subject, QString body);

private slots:
    void on_pushButton_9_clicked();

private:
    Ui::mdp_oublie *ui;
};

#endif // MDP_OUBLIE_H
