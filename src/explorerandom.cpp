// Qt Deps
#include <QDebug>
#include <QRandomGenerator>

// General Deps
#include "encounters.h"
#include "explorerandom.h"
#include "friends.h"
#include "gamestart.h"
#include "interface.h"

void exploreRandom(Interface *parent)
{
    // Generate a random number between 1 and 100
    int rExploration = QRandomGenerator::global()->bounded(1,100);
    // 40% chance of friend encounters, 60% chance of random encounters
    if (rExploration <= 10)
    {
        parent->addText(QString::number(rExploration));
        // Goes to: friends.cpp
        catFriend(parent);
    }
    else if (rExploration > 10 && rExploration <= 20)
    {
        parent->addText(QString::number(rExploration));
        // Goes to: friends.cpp
        rabbitFriend(parent);
    }
    else if (rExploration > 20 && rExploration <= 30)
    {
        parent->addText(QString::number(rExploration));
        // Goes to: friends.cpp
        otterFriend(parent);
    }
    else if (rExploration > 30 && rExploration <= 40)
    {
        parent->addText(QString::number(rExploration));
        // Goes to: friends.cpp
        lizardFriend(parent);
    }
    else
    {
        parent->addText(QString::number(rExploration));
        // Goes to: encounters.cpp
        encounter(parent);
    }
};
