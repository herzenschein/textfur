#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class Character
{
public:
    Character();

    const QString &getName() const;
    void setName(const QString &newName);

    const QString &getSpecies() const;
    void setSpecies(const QString &newSpecies);

    const int &getComfy() const;
    void setComfy(const int &newComfy);

private:
    QString name;
    QString species;
    int comfy;
};

#endif // CHARACTER_H
