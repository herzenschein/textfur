#include <QCoreApplication>
#include "gamestart.h"
#include "main.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    gameStart();

    return EXIT_SUCCESS;
    //    return a.exec();
}

