#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <sstream>
using std::endl;
using std::ostream;
using std::string;
using std::stringstream;


class Character{
  public:
    Character(string name, int hp, int damage): name(name), hp(hp), damage(damage){}
    virtual std::string getStats()const;
    friend ostream& operator<<(ostream& out, const Character& me);
  protected:
    string name;
    int hp;
    int damage;
};

string Character::getStats()const{
  stringstream ss;
  ss << name << endl;
  for(int i = 0; i < name.length(); i++){
    ss << "-";
  }
  ss << "\nHealth: " << hp << "   Attack: " << damage;
  return ss.str();
}

ostream& operator<<(ostream& out, const Character& me){
  out << me.getStats();
  return out;
}
#endif
