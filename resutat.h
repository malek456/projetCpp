#ifndef RESUTAT_H
#define RESUTAT_H

#include <QDialog>

namespace Ui {
class resutat;
}

class resutat : public QDialog
{
    Q_OBJECT

public:
    explicit resutat(QWidget *parent = nullptr);
    ~resutat();

private:
    Ui::resutat *ui;
};

#endif // RESUTAT_H
