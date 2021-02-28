// KDE Deps
#include <KLocalizedString>

// Qt Deps
#include <QTextStream>

// General Deps
#include "furvars.h"

int comfyVar;

QString comfyString;
QString nameCharacter;
QString speciesCharacter;

QString eventPlaceholder(QString eventName){
    return i18n("Now, the player will return home, since the %1 friend event is not yet available.", eventName);
};

QString encounterPlaceholder(QString encounterName){
    return i18n("Wow, you found a %1, but you cannot fight it since it hasn't been implemented yet!", encounterName);
};
