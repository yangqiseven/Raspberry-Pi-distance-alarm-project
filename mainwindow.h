#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void timerUpDate();
//    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *switch_timer;
};

#endif // MAINWINDOW_H
