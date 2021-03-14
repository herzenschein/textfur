// Qt Deps
#include <QRandomGenerator>

// General Deps
#include "athome.h"
#include "encounters.h"
#include "furvars.h"
#include "qstringcout.h"


void encounter()
{
    int enemyEncounter = QRandomGenerator::global()->bounded(1,100);
    if (enemyEncounter <= 10)
    {
        griphonEncounter();
    }
    else if (enemyEncounter <= 20 && enemyEncounter > 10)
    {
        hyenaEncounter();
    }
    else if (enemyEncounter <= 30 && enemyEncounter > 20)
    {
        komodoEncounter();
    }
    else if (enemyEncounter <= 40 && enemyEncounter > 30)
    {
        sharkEncounter();
    }
    else if (enemyEncounter <= 50 && enemyEncounter > 40)
    {
        satyrEncounter();
    }
    else if (enemyEncounter <= 60 && enemyEncounter > 50)
    {
        hydraEncounter();
    }
    else if (enemyEncounter <= 70 && enemyEncounter > 60)
    {
        humanEncounter();
    }
    else if (enemyEncounter <= 80 && enemyEncounter > 70)
    {
        snakeEncounter();
    }
    else if (enemyEncounter <= 90 && enemyEncounter > 80)
    {
        spiderEncounter();
    }
    else if (enemyEncounter <= 100 &&  enemyEncounter > 90)
    {
        dragonEncounter();
    }
}

void griphonEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("smoking griphon"));
//    qin.read(1);
    parent->textgame->clear();
    atHome(parent);
}

void hyenaEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("histerical hyena"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void komodoEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("komodo dragon with identity problems"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void sharkEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("shark with dentures"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void satyrEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("drunken satyr"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void hydraEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("drug addicted hydra"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void humanEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("human fursuiter"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void snakeEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("passive-agressive snake"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void spiderEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("heat stroked spider"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}

void dragonEncounter()
{
//    qin.read(1);
    parent->addText(encounterPlaceholder("gamer dragon"));
//    qin.read(1);
    parent->textgame->clear();
    atHome();
}
