// Qt Deps
#include <QDebug>
#include <QRandomGenerator>

// General Deps
#include "encounters.h"
#include "explorerandom.h"
#include "friends.h"
#include "gamestart.h"
#include "qstringcout.h"
#include "interface.h"

void exploreRandom(Interface *parent)
{
    int rExploration = QRandomGenerator::global()->bounded(1,100);
    if (rExploration <= 10)
    {
        parent->addText(QString::number(rExploration));
        catFriend(parent);
    }
    else if (rExploration > 10 && rExploration <= 20)
    {
        parent->addText(QString::number(rExploration));
        rabbitFriend(parent);
    }
    else if (rExploration > 20 && rExploration <= 30)
    {
        parent->addText(QString::number(rExploration));
        otterFriend(parent);
    }
    else if (rExploration > 30 && rExploration <= 40)
    {
        parent->addText(QString::number(rExploration));
        lizardFriend(parent);
    }
    else
    {
        parent->addText(QString::number(rExploration));
        encounter(parent);
    }
};
