#include "athome.h"
#include "comfort.h"
#include "explorerandom.h"
#include "furvars.h"
#include "qstringcout.h"

void atHome()
{
    comfyFunction();
    qout << "You, " + nameCharacter + ", a " + speciesCharacter + ", start at your home, in your bedroom." << Qt::endl;
    qout << "It seems somewhat " + comfyString + " to you." << Qt::endl;
    qout << "There's always something to do outside, never anything inside." << Qt::endl;
    qout << "If you'd like to go outside, type x and Enter." << Qt::endl;
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
