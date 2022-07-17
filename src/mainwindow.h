#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "character.h"

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
    QLabel      nameDesc { "Name" };
    QLineEdit   nameField;
    QLabel      ageDesc { "Age" };
    QLineEdit   ageField;
    QLabel      speciesDesc { "Species" };
    QLineEdit   speciesField;
    QLabel      comfyDesc { "Comfortableness" };
    QLineEdit   comfyField;
    QTextEdit   textbox;
    QLineEdit   input;

  public slots:
    void startGame(QLineEdit& input, QTextEdit& textbox);
};

#endif // MAINWINDOW_H
