// KDE Deps
#include <KLocalizedString>

// General Deps
#include "athome.h"
#include "endgame.h"
#include "qstringcout.h"

void endGame()
{
    qout << i18n("While the ending of this game is not implemented, you can continue on your quest torward this constantly constructed furry text-game.") << Qt::endl;
    atHome();
}
