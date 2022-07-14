#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) noexcept
  : QMainWindow { parent }
  , nameField("test")
{
  setCentralWidget(&nameField);
}
