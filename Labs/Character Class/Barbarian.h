#ifndef BARBARIAN_H
#define BARBARIAN_H
#include <iostream>
#include <sstream>
#include "Character.h"
using std::endl;
using std::string;
using std::stringstream;

class Barbarian: public Character{
  public:
    Barbarian(string name, int hp, int damage, int rageTime, int ac, int rageDamage):Character(name, damage, hp), rageTime(rageTime), ac(ac), rageDamage(rageDamage){}
    virtual string getStats()const;
  protected:
    int rageTime;
    int ac;
    int rageDamage;
};

string Barbarian::getStats()const{
  stringstream ss;
  ss << Character::getStats();
  ss << "   Armor: " << ac << "\nRage Length: " << rageTime << "Minutes   Damage: " << rageDamage << endl;
  return ss.str();
}
#endif
