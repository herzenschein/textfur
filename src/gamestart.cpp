// Qt Deps
#include <QTimer>
#include <QValidator>
// General Deps
#include "athome.h"
#include "changelog.h"

void gameStart(Interface *parent)
{
    parent->addText("Welcome to my furry game!");
    parent->addText("Press enter to continue.");

    // Create a pattern to validate
    QRegularExpression rx("x");
    // Force the only acceptable input of textinput to be pattern "x"
    parent->textinput->setValidator(new QRegularExpressionValidator(rx));

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
