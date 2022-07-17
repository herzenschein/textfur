#include "character.h"

Character& Character::get()
{
    static Character instance;
    return instance;
}

const QString &Character::name() const
{
    return m_name;
}

void Character::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

const QString &Character::species() const
{
    return m_species;
}

void Character::setSpecies(const QString &newSpecies)
{
    if (m_species == newSpecies)
        return;
    m_species = newSpecies;
    emit speciesChanged();
}

int Character::comfy() const
{
    return m_comfy;
}

void Character::setComfy(int newComfy)
{
    if (m_comfy == newComfy)
        return;
    m_comfy = newComfy;
    emit comfyChanged();
}

int Character::age() const
{
    return m_age;
}

void Character::setAge(int newAge)
{
    if (m_age == newAge)
        return;
    m_age = newAge;
    emit ageChanged();
}

Character::Character() noexcept
  : m_name { "Blumen" }
  , m_species { "rabbit" }
  , m_age { 28 }
  , m_comfy { 50 }
{
}
