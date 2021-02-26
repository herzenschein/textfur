#include <iostream>
#include "friends.h"
#include "furvars.h"
#include "catquest.h"
#include "athome.h"
#include "rabbitquest.h"
#include "otterquest.h"
#include "lizardquest.h"

void catFriend()
{
    std::cout << "The Alley\n\n";
    std::cout << "You suddenly hear a voice. 'Hey pal.', you then turn yourself, and notice your ol'childhood friend, Snow, whose footsteps you cannot perceive, nor can you keep yourself unable to be scared every time he appears.\n";
    std::cout << "'What brings you here, then?'\n";
    std::cin.get();
    comfyVar += 1;
    catQuest();
    std::cout << "Now, the player will return home, since the cat friend event is not yet available.\n";
    std::cin.get();
    printf("\033c");
    atHome();
}

void rabbitFriend()
{
    std::cout << "The Workshop Open Garage\n\n";
    std::cout << "'I wish I had some kind of chainsaw or something', said my long-eared friend, Rysin.\n";
    std::cout << "Why would he be in a workshop, being as puny and lazy as he usually is? 'Well, nevermind, found it', he said, while walking torward his bench. 'And what brings you here?'\n";
    std::cin.get();
    comfyVar += 1;
    rabbitQuest();
    std::cout << "Now, the player will return home, since the rabbit friend event is not yet available.\n";
    std::cin.get();
    printf("\033c");
    atHome();
}

void otterFriend()
{
    std::cout << "The Club\n\n";
    std::cout << "'Have you ever tried looking at the sky at night under water?', said my ottie pal, Douglas, who just splashed his way out of the pool and landed on his webbed feet to greet me.\n";
    std::cout << "Sometimes you wonder how can your friend make such romantic remarks given his strict nihilism towards everything related to purpose. As jovial a smile as he stands just lightly pulling your arms towards the pool side, as bold a believer of a meaningless life.\n";
    std::cin.get();
    comfyVar += 1;
    otterQuest();
    std::cout << "Now, the player will return home, since the otter friend event is not yet available.\n";
    std::cin.get();
    printf("\033c");
    atHome();
}

void lizardFriend()
{
    std::cout << "The Park\n\n";
    std::cout << "You friend Daniel is, as usual, doing gimnastics in the park as you approach and call for him. Expectedly, he does not stop just in order to chat with you.\n";
    std::cout << "How can he always be so increasingly flexible and quick everytime with that constitution? His trunk is bulkier than a tree's, arms thicker than your neck, thighs bigger than your trunk, yet two thirds of your height. A stance more solid than a wall, and yet, here he is: almost like a kite.\n";
    std::cin.get();
    comfyVar += 1;
    lizardQuest();
    std::cout << "Now, the player will return home, since the lizard friend event is not yet available.\n";
    std::cin.get();
    printf("\033c");
    atHome();
}
