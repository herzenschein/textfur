// General Deps
#include "athome.h"
#include "changelog.h"

void gameStart(Interface *parent)
{
    parent->addText("Welcome to my furry game!");
    parent->addText("Press enter to continue.");

    /*
     This is the first place where waiting for input is needed.
     The most reasonable course of action seems to be:
     If user presses Return/Enter in the QLineEdit textinput,
     then the codes proceeds execution.

     It cannot be "if user presses Return/Enter in the QLineEdit textinput,
     run this new function that simply adds the next text in line".
     From what I gather, it can't simply use a signal/slot mechanism
     because then I'd have to create a new function to serve as slot every time.
     It would break the "don't repeat yourself" rule.
    */


    // Goes to: changelog.cpp
    changelog(parent);

//    CLEAR SCREEN HERE
    parent->addText("First of all, what's your name?");
//    nameCharacter = qin.readLine();
    parent->addText("What species are you?");
//    speciesCharacter = qin.readLine();
//    CLEAR SCREEN HERE

    // Goes to: athome.cpp
    atHome(parent);
}
