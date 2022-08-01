#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "character.hpp"

#include <QFormLayout>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include <QMainWindow>
#include <QTextEdit>

class MainWindow : public QMainWindow
{
  public:
    explicit MainWindow(QWidget* parent = nullptr) noexcept;
    QWidget     mainWidget;
    QHBoxLayout mainLayout;
    QFormLayout leftLayout;
    QVBoxLayout rightLayout;
    QLineEdit   nameField;
    QLineEdit   ageField;
    QLineEdit   speciesField;
    QLineEdit   comfyField;
    QTextEdit   statusbox;
    QTextEdit   textbox;
    QLineEdit   input;

  public slots:
    void startGame(QLineEdit& input, QTextEdit& textbox);
};

#endif // MAINWINDOW_H
