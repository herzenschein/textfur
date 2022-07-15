#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>

struct MainWindow : public QMainWindow
{
    explicit MainWindow(QWidget* parent = nullptr) noexcept;
    QLabel nameField;
};

#endif // MAINWINDOW_H
