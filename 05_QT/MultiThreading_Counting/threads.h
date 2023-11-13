#ifndef THREADS_H
#define THREADS_H

//#include "ui_mainwindow.h"
#include <future>
#include <iostream>
#include <thread>
#include "mainwindow.h"
#include <QApplication>

void Provider(void);
void Receiver(MainWindow &);


#endif
