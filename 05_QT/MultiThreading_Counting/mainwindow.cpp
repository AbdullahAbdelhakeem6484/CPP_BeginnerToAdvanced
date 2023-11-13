#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//     timer = new QTimer(this);
//     connect(timer, &QTimer::timeout, this, &MainWindow::updateNumber);

////     Set the timer interval (in milliseconds)
//     int interval = 1000; // 1 second
//     timer->start(interval);
}

void MainWindow::updateNumber(uint8_t value)
{
    //  value = 44;
    ui->label->setText(QString::number(value));
}


MainWindow::~MainWindow()
{
    delete ui;
}

// void Update_Number(uint8_t value){

//     ui->label->setText(QString::number(value));

// }
