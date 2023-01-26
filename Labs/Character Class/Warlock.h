#ifndef WARLOCK_H
#define WARLOCK_H
#include <iostream>
#include <sstream>
#include "Character.h"
using std::endl;
using std::string;
using std::stringstream;

class Warlock: public Character{
  public:
    Warlock(string name, int hp, int damage, string specialAbility, int ac, int saDamage):Character(name, damage, hp), specialAbility(specialAbility), ac(ac), saDamage(saDamage){}
    virtual string getStats()const;
  protected:
    string specialAbility;
    int ac;
    int saDamage;
};

string Warlock::getStats()const{
  stringstream ss;
  ss << Character::getStats();
  ss << "   Armor: " << ac << "\nSpecial Ability: " << specialAbility << "   Damage: " << saDamage << endl;
  return ss.str();
}
#endif
