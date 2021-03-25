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
    QRegularExpression rx("x");
    parent->textinput->setValidator(new QRegularExpressionValidator(rx));

    changelog(parent);

//    parent->textgame->clear();
    parent->addText("First of all, what's your name?");
//    nameCharacter = qin.readLine();
    parent->addText("What species are you?");
//    speciesCharacter = qin.readLine();
//    parent->textgame->clear();
    atHome(parent);
}
