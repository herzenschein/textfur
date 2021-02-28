// KDE Deps
#include <KLocalizedString>

// General Deps
#include "athome.h"
#include "comfort.h"
#include "explorerandom.h"
#include "furvars.h"
#include "qstringcout.h"

void atHome()
{
    comfyFunction();
    qout << i18n("You, %1, a %2, start at your home, in your bedroom.", nameCharacter, speciesCharacter) << Qt::endl;
    qout << i18n("It seems somewhat %1 to you. ", comfyString) << Qt::endl;
    qout << i18n("There's always something to do outside, never anything inside.") << Qt::endl;
    qout << i18n("If you'd like to go outside, type x and Enter.") << Qt::endl;
    QString explore = qin.read(1);
    if (explore == 'x')
    {
        printf("\033c");
        exploreRandom();
    }
    else
    {
        printf("\033c");
        atHome();
    }
}
