// KDE Deps
#include <KLocalizedString>

// General Deps
#include "athome.h"
#include "animalquest.h"
#include "changelog.h"
#include "furvars.h"
#include "gamestart.h"
#include "qstringcout.h"

void gameStart()
{
    qout << i18n("Welcome to my furry game!") << Qt::endl;
    qout << i18n("Press enter to continue.") << Qt::endl;
    qin.read(1);
    changelog();
    printf("\033c");
    qout << i18n("First of all, what's your name?") << Qt::endl;
    nameCharacter = qin.readLine();
    qout << i18n("What species are you?") << Qt::endl;
    speciesCharacter = qin.readLine();
    printf("\033c");
    atHome();
}
