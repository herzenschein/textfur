#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent}, nameField("test")
{
    setCentralWidget(&nameField);
}
