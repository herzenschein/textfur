// General Deps
#include "athome.h"
#include "friends.h"
#include "furvars.h"
#include "gamestart.h"

// Quest Deps
#include "catquest.h"
#include "rabbitquest.h"
#include "otterquest.h"
#include "lizardquest.h"

void catFriend(Interface *parent)
{
    parent->addText("The Alley\n\n"
            "You suddenly hear a voice. 'Hey pal.', you then turn yourself "
            "and notice your ol'childhood friend, Snow, whose footsteps you cannot perceive, "
            "nor can you keep yourself unable to be scared every time he appears."
            "'What brings you here, then?'\n");
//    WAIT FOR INPUT HERE
    comfyVar += 1;
    catQuest(parent);
    parent->addText(eventPlaceholder("cat"));
//    WAIT FOR INPUT HERE
    printf("\033c");
    atHome(parent);
}

void rabbitFriend(Interface *parent)
{
    parent->addText("The Workshop Open Garage\n\n"
            "'I wish I had some kind of chainsaw or something', "
            "said my long-eared friend, Rysin.\n"
            "Why would he be in a workshop, being as puny and lazy as he usually is?\n"
            "'Well, nevermind, found it', he said, while walking torward his bench. "
            "'And what brings you here?'");
//    WAIT FOR INPUT HERE
    comfyVar += 1;
    rabbitQuest(parent);
    parent->addText(eventPlaceholder("rabbit"));
//    WAIT FOR INPUT HERE
    printf("\033c");
    atHome(parent);
}

void otterFriend(Interface *parent)
{
    parent->addText("The Club\n\n"
            "'Have you ever tried looking at the sky at night under water?', "
            "said my ottie pal, Douglas, who just splashed his way out of the pool "
            "and landed on his webbed feet to greet me.\n"
            "Sometimes you wonder how can your friend make such romantic remarks "
            "given his strict nihilism towards everything related to purpose.\n"
            "As jovial a smile as he stands just lightly pulling your arms towards the pool side, "
            "as bold a believer of a meaningless life.");
//    WAIT FOR INPUT HERE
    comfyVar += 1;
    otterQuest(parent);
    parent->addText(eventPlaceholder("otter"));
//    WAIT FOR INPUT HERE
    printf("\033c");
    atHome(parent);
}

void lizardFriend(Interface *parent)
{
    parent->addText("The Park\n\n"
            "You friend Daniel is, as usual, doing gimnastics at the park "
            "as you approach and call for him. "
            "Expectedly, he does not stop just in order to chat with you.\n"
            "How can he always be so increasingly flexible and quick everytime with that constitution? "
            "His trunk is bulkier than a tree's, arms thicker than your neck, "
            "thighs bigger than your trunk, yet two thirds of your height. "
            "A stance more solid than a wall, and yet, here he is: practically a flying kite.");
//    WAIT FOR INPUT HERE
    comfyVar += 1;
    lizardQuest(parent);
    parent->addText(eventPlaceholder("lizard"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}
