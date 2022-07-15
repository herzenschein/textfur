// Qt Deps
#include <QApplication>

// General Deps
#include <character.h>
#include <mainwindow.h>

int main(int argCount, char* argVector[])
{
    QApplication textfur(argCount, argVector);

    // This window shows the content
    MainWindow window;
    window.show();

    // Player should contain mutable information
    // that changes throughout the game
    Character& Player = Character::get();
    Player.name       = "Blumen";
    textfur.exec();
}
