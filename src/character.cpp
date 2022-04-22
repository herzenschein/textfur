#include "character.h"

Character::Character() : name("Character"), species("rabbit"), comfy(50)
{

}

const QString &Character::getName() const
{
    return name;
}

void Character::setName(const QString &newName)
{
    name = newName;
}

const QString &Character::getSpecies() const
{
    return species;
}

void Character::setSpecies(const QString &newSpecies)
{
    species = newSpecies;
}

const int &Character::getComfy() const
{
    return comfy;
}

void Character::setComfy(const int &newComfy)
{
    comfy = newComfy;
}
