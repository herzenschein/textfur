// Qt Deps
#include <QApplication>

// General Deps
#include "gamestart.h"

int main(int argc, char *argv[])
{
    QApplication textfur(argc, argv);
    Interface *window = new Interface;
    window->show();
    gameStart(window);
    textfur.exec();

//    return EXIT_SUCCESS;
}

