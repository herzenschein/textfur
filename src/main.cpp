// Qt Deps
#include <QCoreApplication>
#include <QApplication>

// General Deps
#include "interface.h"
#include "gamestart.h"

int main(int argc, char *argv[])
{
    QCoreApplication textfur(argc, argv);
    Interface window;
    gameStart();
    return EXIT_SUCCESS;
}

