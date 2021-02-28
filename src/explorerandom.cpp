// Qt Deps
#include <QDebug>
#include <QRandomGenerator>

// General Deps
#include "encounters.h"
#include "explorerandom.h"
#include "friends.h"
#include "gamestart.h"
#include "qstringcout.h"

void exploreRandom()
{
    int rExploration = QRandomGenerator::global()->bounded(1,100);
    if (rExploration <= 10)
    {
        qout << rExploration;
        catFriend();
    }
    else if (rExploration > 10 && rExploration <= 20)
    {
        qout << rExploration;
        rabbitFriend();
    }
    else if (rExploration > 20 && rExploration <= 30)
    {
        qout << rExploration;
        otterFriend();
    }
    else if (rExploration > 30 && rExploration <= 40)
    {
        qout << rExploration;
        lizardFriend();
    }
    else
    {
        qout << rExploration;
        encounter();
    }
};
