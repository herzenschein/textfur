// Qt Deps
#include <QRandomGenerator>

// General Deps
#include "athome.h"
#include "encounters.h"
#include "furvars.h"


void encounter(Interface *parent)
{
    int enemyEncounter = QRandomGenerator::global()->bounded(1,100);
    if (enemyEncounter <= 10)
    {
        griphonEncounter(parent);
    }
    else if (enemyEncounter <= 20 && enemyEncounter > 10)
    {
        hyenaEncounter(parent);
    }
    else if (enemyEncounter <= 30 && enemyEncounter > 20)
    {
        komodoEncounter(parent);
    }
    else if (enemyEncounter <= 40 && enemyEncounter > 30)
    {
        sharkEncounter(parent);
    }
    else if (enemyEncounter <= 50 && enemyEncounter > 40)
    {
        satyrEncounter(parent);
    }
    else if (enemyEncounter <= 60 && enemyEncounter > 50)
    {
        hydraEncounter(parent);
    }
    else if (enemyEncounter <= 70 && enemyEncounter > 60)
    {
        humanEncounter(parent);
    }
    else if (enemyEncounter <= 80 && enemyEncounter > 70)
    {
        snakeEncounter(parent);
    }
    else if (enemyEncounter <= 90 && enemyEncounter > 80)
    {
        spiderEncounter(parent);
    }
    else if (enemyEncounter <= 100 &&  enemyEncounter > 90)
    {
        dragonEncounter(parent);
    }
}

// Everything is in a single file because in theory each encounter would instantiate a battle.
// The game needs to be functional first.

void griphonEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("smoking griphon"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void hyenaEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("histerical hyena"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void komodoEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("komodo dragon with identity problems"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void sharkEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("shark with dentures"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void satyrEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("drunken satyr"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void hydraEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("drug addicted hydra"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void humanEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("human fursuiter"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void snakeEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("passive-agressive snake"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void spiderEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("heat stroked spider"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}

void dragonEncounter(Interface *parent)
{
//    WAIT FOR INPUT HERE
    parent->addText(encounterPlaceholder("gamer dragon"));
//    WAIT FOR INPUT HERE
//    CLEAR SCREEN HERE
    atHome(parent);
}
