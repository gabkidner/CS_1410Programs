#include <iostream>
#include "Pokemon.h"
using namespace std;

main(){
  srand(time(NULL));
  cout << "Pokemon Battle!" << endl;
  string name;
  cout << "Enter your pokemon name: ";
  cin >> name;
  Pokemon you(name);
  Pokemon computer;
  string choice;
  do{
    cout << you << endl;
    cout << computer << endl;
    cout << "(B)attle or (Q)uit: ";
    cin >> choice;
    you.battle(computer);
  }while(choice != "Q" && choice != "q" && you.getHP() > 0 && computer.getHP() > 0);
  if(you.getHP() > computer.getHP()){
    cout << "You Win";
  }
  else{
    cout << "You Lose";
  }
  return 0;
}
