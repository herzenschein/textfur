// Qt Deps
//#include <QTextStream>

// General Deps
#include "furvars.h"

// This is the value used to calculate the user's impression of home
int comfyVar;

// This is the user's impression of home
QString comfyString;

// Character definition
QString nameCharacter;
QString speciesCharacter;

// The following are just placeholders to avoid copying the same text over and over
QString eventPlaceholder(QString eventName){
    return "Now, the player will return home, since the " + eventName + " friend event is not yet available.";
};

QString encounterPlaceholder(QString encounterName){
    return "Wow, you found a " + encounterName + ", but you cannot fight it since it hasn't been implemented yet!";
};
