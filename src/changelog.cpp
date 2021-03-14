// General Deps
#include "changelog.h"
#include "qstringcout.h"

void changelog(){
    printf("\033c");
    qout << "Changelog" << Qt::endl;
    qout << "- before 30/12 - Added game start, character room, explore event, acess to random encounters" << Qt::endl;
    qout << "- 30/12 - Added in-game provisory changelog, access to friends (cat, rabbit, lizard, otter), enemy encounters(griphon, hyena, komodo, shark, satyr, hydra, human, snake, spider, dragon); added beginning of cat storyline" << Qt::endl;
    qout << "- 25/02/2021 - Ported from C# to C++/Qt, corrected language" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "" << Qt::endl;
    qout << "What's to come: partial cat storyline (whose code is already done, just needs to be written), bedroom effects, access to other rooms of the house" << Qt::endl;
    qin.read(1);

};
