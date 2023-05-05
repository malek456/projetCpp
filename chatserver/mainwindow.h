#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chatserver.h"
#include <QSqlQueryModel>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
             class chatserver;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addMessage(QString Msg);
    void addLine(QString Msg);
    chatserver* m_pBoxServer;
    QSqlQueryModel* afficher();

private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
