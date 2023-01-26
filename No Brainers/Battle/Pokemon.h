#pragma once

#include <iostream>
#include <ostream>
#include <iomanip>
using namespace std;

class Pokemon{
public:
  Pokemon();
  Pokemon(string);
  void battle(Pokemon);
  void setStrength();
  int getStrength();
  string getName();
  int getHP();
  void takeDamage(int);
  friend ostream& operator << (ostream &, Pokemon);
private:
  string name;
  int hp;
  int strength;
};
#include "Pokemon.cpp"
