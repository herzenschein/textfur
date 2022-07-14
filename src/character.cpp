#include "character.h"

Character& Character::get()
{
  return instance;
}

Character::Character() noexcept
  : name { "Character" }
  , species { "rabbit" }
  , comfy { 50 }
{
}

Character Character::instance;
