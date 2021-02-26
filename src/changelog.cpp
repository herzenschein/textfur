#include <iostream>
#include "changelog.h"

void changelog(){
    printf("\033c");
    std::cout << "Changelog\n";
    std::cout << "- before 30/12 - Added game start, character room, explore event, acess to random encounters\n";
    std::cout << "- 30/12 - Added in-game provisory changelog, access to friends (cat, rabbit, lizard, otter), enemy encounters(griphon, hyena, komodo, shark, satyr, hydra, human, snake, spider, dragon); added beginning of cat storyline\n";
    std::cout << "- 25/02/2021 - Ported from C# to C++/Qt, corrected language\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "What's to come: partial cat storyline (whose code is already done, just needs to be written), bedroom effects, access to other rooms of the house\n";
    std::cin.get();

};
