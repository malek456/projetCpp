#ifndef DOORLOCK_H
#define DOORLOCK_H

#include <QDialog>
#include"arduino.h"

namespace Ui {
class DoorLock;
}

class DoorLock : public QDialog
{
    Q_OBJECT

public:
    explicit DoorLock(QWidget *parent = nullptr);
    ~DoorLock();
private slots:
    void update_label();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DoorLock *ui;
    QByteArray data;
    arduino A;
};

#endif // DOORLOCK_H
