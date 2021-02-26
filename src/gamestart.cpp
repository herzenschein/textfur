#include <iostream>
#include "gamestart.h"
#include "changelog.h"
#include "furvars.h"
#include "athome.h"

void gameStart()
{
    std::string name, species;
    std::cout << "Welcome to my furry game!\n";
    std::cout << "Press enter to continue.\n";
    std::cin.get();
    changelog();
    printf("\033c");
    std::cout << "First of all, what's your name?\n";
    std::getline(std::cin, name);
    std::cout << "What species are you?\n";
    std::getline(std::cin, species);
    printf("\033c");
    atHome();
}
