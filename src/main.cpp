// Qt Deps
#include <QApplication>

// General Deps
#include "gamestart.h"

int main(int argc, char *argv[])
{
    QApplication textfur(argc, argv);
    // Simply create a window, show it and start the game
    Interface *window = new Interface;
    window->show();
    // Goes to: gamestart.cpp
    gameStart(window);
    textfur.exec();

//    return EXIT_SUCCESS;
}

