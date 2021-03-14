// General Deps
#include "athome.h"
#include "comfort.h"
#include "explorerandom.h"
#include "furvars.h"
#include "qstringcout.h"

void atHome(Interface *parent)
{
    comfyFunction();
    parent->addText("You, " + nameCharacter + ", a " + speciesCharacter + ", start at your home, in your bedroom.");
    parent->addText("It seems somewhat " + comfyString + " to you.");
    parent->addText("There's always something to do outside, never anything inside.");
    parent->addText("If you'd like to go outside, type x and Enter.");
//    QString explore = qin.read(1);
//    if (explore == 'x')
//    {
//        printf("\033c");
//        exploreRandom();
//    }
//    else
//    {
//        printf("\033c");
//        atHome();
//    }
}
