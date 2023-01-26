#include <iostream>
#include <ostream>
#include <iomanip>
#include "PigPlayer.h"
using namespace std;

int main(){
  srand(time(NULL));
  PigPlayer player, computer;
  string input;
  int roll = 0;
  cout << "Welcom to Pig" << endl;
  do{
    cout << "Would you like to (R)oll or (H)old?" << endl;
    do{
      cin >> input;
      if(input[0] == 'r' || input[0] == 'R'){
        player.roll();
        cout << "You Rolled a " << player.getValue() << "\n\nYour turn total is " << player.turnTotal() << "\nYour Overall Total: " << player.realTotal() << endl;
      }
      else if(input[0] == 'h' || input[0] == 'H'){
        player.hold();
        player.stop();
      }
    }while(player.getValue() != 1);
    cout << "\nPlayer Overall Total: " << player.realTotal() << "    Computer Overall Total: " << computer.realTotal() << endl;
    if(player.getValue()==1){
      player.reset();
    }
    roll = 0;
    do{
      roll++;
      if(roll != 5){
        computer.roll();
        cout << "The Computer Rolled a " << computer.getValue() << "    " << roll << endl;
      }
      else{
        computer.hold();
        roll = 4;
      }
    }while(computer.getValue() != 1||roll == 100);
    if(computer.getValue() == 1){
      computer.reset();
    }
    cout << "Turn Total: " << computer.turnTotal() << "\nPlayer Overall Total: " << player.realTotal() << "    Computer Overall Total: " << computer.realTotal() << endl;
  }while(player.realTotal() < 100);
  if(player.realTotal() >= 100){
    cout << "Congrats you win!!!!" << endl;
  }
  else if(computer.realTotal() >= 100){
    cout << "You lost, goodluck next time" << endl;
  }
  return 0;
}
