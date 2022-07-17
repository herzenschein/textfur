#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) noexcept : QMainWindow { parent }
{
    // Set layouts and widgets
    setCentralWidget(&mainWidget);
    mainWidget.setLayout(&mainLayout);
    mainLayout.addLayout(&leftLayout);
    mainLayout.addLayout(&rightLayout);
    leftLayout.setLabelAlignment(Qt::AlignRight);
    leftLayout.setContentsMargins(10, 10, 10, 10);
    leftLayout.addRow(&nameDesc, &nameField);
    leftLayout.addRow(&ageDesc, &ageField);
    leftLayout.addRow(&speciesDesc, &speciesField);
    leftLayout.addRow(&comfyDesc, &comfyField);
    rightLayout.setContentsMargins(10, 10, 10, 10);
    rightLayout.addWidget(&textbox);
    rightLayout.addWidget(&input);

    // Initialize all widget settings
    nameField.setText(Character::get().name());
    ageField.setText(QString::number(Character::get().age()));
    speciesField.setText(Character::get().species());
    comfyField.setText(QString::number(Character::get().comfy()));
    nameField.setReadOnly(true);
    ageField.setReadOnly(true);
    speciesField.setReadOnly(true);
    comfyField.setReadOnly(true);
    textbox.setReadOnly(true);
    input.setFocus();

    // Start the game
    startGame(input, textbox);
}

void MainWindow::startGame(QLineEdit& input, QTextEdit& textbox)
{
    // This starts the game
    return;
}
