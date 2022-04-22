#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>


class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QLabel nameField;
signals:

};

#endif // MAINWINDOW_H
