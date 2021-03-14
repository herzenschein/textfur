// Qt Deps
#include <QTextStream>

// General Deps
#include "furvars.h"

int comfyVar;

QString comfyString;
QString nameCharacter;
QString speciesCharacter;

QString eventPlaceholder(QString eventName){
    return "Now, the player will return home, since the " + eventName + " friend event is not yet available.";
};

QString encounterPlaceholder(QString encounterName){
    return "Wow, you found a " + encounterName + ", but you cannot fight it since it hasn't been implemented yet!";
};
