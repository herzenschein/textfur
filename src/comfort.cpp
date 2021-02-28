// KDE Deps
#include <KLocalizedString>

// General Deps
#include "comfort.h"
#include "endgame.h"
#include "furvars.h"

void comfyFunction()
{
    if (comfyVar < (30))
    {
        comfyString = i18n("uneasy");
    }
    else if (comfyVar > 70 && comfyVar < 100)
    {
        comfyString = i18n("cheerful");
    }
    else if (comfyVar == 0)
    {
        endGame();
    }
    else if (comfyVar == 100)
    {
        comfyString = i18n("like it were your little piece of heaven");
    }
    else if (comfyVar == 50)
    {
        comfyString = i18n("comfortable");
    }
    else if (comfyVar > 100)
    {
        comfyVar = 100;
    }
    else
    {
        comfyString = i18n("different");
    }
}
