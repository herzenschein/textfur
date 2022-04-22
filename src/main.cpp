// Qt Deps
#include <QApplication>

// General Deps
#include <mainwindow.h>
#include <character.h>


int main(int argCount, char *argVector[])
{
    QApplication textfur(argCount, argVector);

    // This window shows the content
    MainWindow window;
    window.show();

    // Player should contain mutable information
    // that changes throughout the game
    Character* player;

    textfur.exec();
}

