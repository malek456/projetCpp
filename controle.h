#ifndef CONTROLE_H
#define CONTROLE_H

#include <QDialog>

namespace Ui {
class controle;
}

class controle : public QDialog
{
    Q_OBJECT

public:
    explicit controle(QWidget *parent = nullptr);
    ~controle();

private slots:
    void on_pushButton_clicked();

private:
    Ui::controle *ui;
};



#endif // CONTROLE_H
