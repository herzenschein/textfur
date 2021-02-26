#include <iostream>
#include "explorerandom.h"
#include "friends.h"
#include "encounters.h"
void exploreRandom()
{
    srand ( time(0) );
    int rExploration = std::rand() % 100 + 1;
    if (rExploration <= 10)
    {
        std::cout << "Debug: "<< rExploration << "\n";
        catFriend();
    }
    else if (rExploration > 10 && rExploration <= 20)
    {
        std::cout << "Debug: "<< rExploration << "\n";
        rabbitFriend();
    }
    else if (rExploration > 20 && rExploration <= 30)
    {
        std::cout << "Debug: "<< rExploration << "\n";
        otterFriend();
    }
    else if (rExploration > 30 && rExploration <= 40)
    {
        std::cout << "Debug: "<< rExploration << "\n";
        lizardFriend();
    }
    else
    {
        std::cout << "Debug: "<< rExploration << "\n";
        encounter();
    }
};
