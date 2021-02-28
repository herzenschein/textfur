// KDE Deps
#include <KLocalizedString>

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
    qin.read(1);
    qout << encounterPlaceholder(i18n("smoking griphon")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void hyenaEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("histerical hyena")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void komodoEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("komodo dragon with identity problems")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void sharkEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("shark with dentures")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void satyrEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("drunken satyr")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void hydraEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("drug addicted hydra")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void humanEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("human fursuiter")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void snakeEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("passive-agressive snake")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void spiderEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("heat stroked spider")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void dragonEncounter()
{
    qin.read(1);
    qout << encounterPlaceholder(i18n("gamer dragon")) << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}
