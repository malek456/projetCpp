#ifndef EQUI_H
#define EQUI_H

#include <QDialog>

namespace Ui {
class Equi;
}

class Equi : public QDialog
{
    Q_OBJECT

public:
    explicit Equi(QWidget *parent = nullptr);
    ~Equi();

private:
    Ui::Equi *ui;
};

#endif // EQUI_H
