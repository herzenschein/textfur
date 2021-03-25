// General Deps
#include "athome.h"
#include "comfort.h"
#include "explorerandom.h"
#include "furvars.h"

void atHome(Interface *parent)
{
    // Calculate value of comfyVar
    comfyFunction();
    parent->addText("DEBUG comfort levels: " + comfyString);
    parent->addText("You, " + nameCharacter + ", a " + speciesCharacter + ", start at your home, in your bedroom.");
    parent->addText("It seems somewhat " + comfyString + " to you.");
    parent->addText("There's always something to do outside, never anything inside.");
    parent->addText("If you'd like to go outside, type x and Enter.");

    // Check for input, if it is "x", cause random encounter;
    // could wait for user input with QKeyEvent or whatever instead of parsing user input
    if (parent->getText() == 'x')
    {
//        CLEAR SCREEN HERE

        // Goes to: explorerandom.cpp
        exploreRandom(parent);
    }
    else
    {
//        CLEAR SCREEN HERE

        // Loops current function
        // could be removed if wait for user input is implemented

        // This function is commented to avoid current endless loop.
        // Once explorerandom is implemented correctly, it should work.
//        atHome(parent);
    }
}
