#include <QRandomGenerator>

#include "athome.h"
#include "encounters.h"
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
    qout << "Wow, you found a smoking griphon, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void hyenaEncounter()
{
    qin.read(1);
    qout << "Wow, you found a histerical hyena, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void komodoEncounter()
{
    qin.read(1);
    qout << "Wow, you found a komodo dragon with identity problems, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void sharkEncounter()
{
    qin.read(1);
    qout << "Wow, you found a shark with dentures, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void satyrEncounter()
{
    qin.read(1);
    qout << "Wow, you found a drunken satyr, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void hydraEncounter()
{
    qin.read(1);
    qout << "Wow, you found a drug addicted hydra, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void humanEncounter()
{
    qin.read(1);
    qout << "Wow, you found a human fursuiter, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void snakeEncounter()
{
    qin.read(1);
    qout << "Wow, you found a passive-agressive snake, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void spiderEncounter()
{
    qin.read(1);
    qout << "Wow, you found a heat stroked spider, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}

void dragonEncounter()
{
    qin.read(1);
    qout << "Wow, you found a gamer dragon, but you cannot fight it since it hasn't been implemented yet!" << Qt::endl;
    qin.read(1);
    printf("\033c");
    atHome();
}
