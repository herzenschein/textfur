#include "athome.h"
#include "animalquest.h"
#include "changelog.h"
#include "furvars.h"
#include "gamestart.h"
#include "qstringcout.h"

void gameStart()
{
    qout << "Welcome to my furry game!" << Qt::endl;
    qout << "Press enter to continue." << Qt::endl;
    qin.read(1);
    changelog();
    printf("\033c");
    qout << "First of all, what's your name?" << Qt::endl;
    nameCharacter = qin.readLine();
    qout << "What species are you?" << Qt::endl;
    speciesCharacter = qin.readLine();
    printf("\033c");
    atHome();
}
