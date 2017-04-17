#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wiringPi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetupSys();
       pinMode(21, OUTPUT);
       pinMode(20, INPUT);


       switch_timer = new QTimer();
       connect(switch_timer, SIGNAL(timeout()), this, SLOT(timerUpDate()));
       switch_timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerUpDate()
{
    int Dec = 45.79;
     ui->lcdNumber->Dec;
}


