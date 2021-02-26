#include <iostream>
#include <QTextStream>
#include "gamestart.h"
#include "changelog.h"
#include "furvars.h"
#include "athome.h"

void gameStart()
{
    std::cout << "Welcome to my furry game!\n";
    std::cout << "Press enter to continue.\n";
    std::cin.get();
    changelog();
    printf("\033c");
    std::cout << "First of all, what's your name?\n";
    QTextStream name(stdin);
    nameCharacter = name.readLine();
    std::cout << "What species are you?\n";
    QTextStream species(stdin);
    speciesCharacter = species.readLine();
    printf("\033c");
    atHome();
}
