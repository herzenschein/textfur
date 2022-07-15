#include "character.h"

Character& Character::get()
{
  static Character instance;
  return instance;
}

Character::Character() noexcept
  : name { "Character" }
  , species { "rabbit" }
  , comfy { 50 }
{
}
