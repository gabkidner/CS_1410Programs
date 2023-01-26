#include <iostream>
#include <vector>
#include <string>
#include "Character.h"
#include "Warlock.h"
#include "Barbarian.h"
using namespace std;

void prompt(const char* message, string& variable);
void prompt(const char* message, int& number);

main(){
  vector<Character*>characterList;
  characterList.push_back(new Warlock("Gandalf", 56, 15, "Eldrich Blast", 16, 25));
  characterList.push_back(new Warlock("Radagast", 52, 12, "Friend of Beast", 17, 12));
  characterList.push_back(new Barbarian("Tarak", 81, 20, 8, 19, 26));
  characterList.push_back(new Barbarian("Dirt", 78, 18, 10, 18, 23));
  for(Character *i: characterList){
    cout << *i << "\n-------------------------------------\n" << endl;
  }
}
