// KDE Deps
#include <KLocalizedString>

// Qt Deps
#include <QCoreApplication>

// General Deps
#include "gamestart.h"

int main(int argc, char *argv[])
{
    QCoreApplication textfur(argc, argv);
    KLocalizedString::setApplicationDomain("textfur");
    gameStart();
    return EXIT_SUCCESS;
}

