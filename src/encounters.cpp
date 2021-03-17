// Qt Deps
#include <QRandomGenerator>

// General Deps
#include "athome.h"
#include "encounters.h"
#include "furvars.h"
#include "qstringcout.h"


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

void griphonEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("smoking griphon"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void hyenaEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("histerical hyena"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void komodoEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("komodo dragon with identity problems"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void sharkEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("shark with dentures"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void satyrEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("drunken satyr"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void hydraEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("drug addicted hydra"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void humanEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("human fursuiter"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void snakeEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("passive-agressive snake"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void spiderEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("heat stroked spider"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void dragonEncounter(Interface *parent)
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("gamer dragon"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}
