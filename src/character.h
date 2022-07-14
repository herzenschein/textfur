#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

struct Character
{
  QString           name;
  QString           species;
  int               comfy;
  static Character& get();
  static Character  instance;

 private:
  Character();
  explicit Character(const Character&) = delete;
  explicit Character(Character&&)      = delete;
  Character operator=(const Character&) = delete;
  Character operator=(Character&&) = delete;
};

#endif // CHARACTER_H
