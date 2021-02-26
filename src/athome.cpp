#include <iostream>
#include "athome.h"
#include "comfort.h"
#include "furvars.h"
#include "explorerandom.h"

void atHome()
{
    comfyFunction();
    std::cout << "You, " + nameCharacter + ", a " + speciesCharacter + ", start at your home, in your bedroom.\n";
    std::cout << "It seems somewhat " + comfyString + " to you.\n";
    std::cout << "There's always something to do outside, never anything inside.\n";
    std::cout << "If you'd like to go outside, type x and Enter.\n";
    char explore;
    explore = std::cin.get();
    if (explore == 'x')
    {
        printf("\033c");
        exploreRandom();
    }
    else
    {
        printf("\033c");
        atHome();
    }
}
