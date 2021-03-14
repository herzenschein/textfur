// Qt Deps
#include <QCoreApplication>
#include <QApplication>

// General Deps
#include "interface.h"
#include "gamestart.h"

int main(int argc, char *argv[])
{
    QApplication textfur(argc, argv);
    Interface window;
    gameStart();
    window.show();
    textfur.exec();
    return EXIT_SUCCESS;
}

