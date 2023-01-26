#include <iostream>
#include <iomanip>
using namespace std;
bool isValid(int, int);
bool isComputerValid(int, int);
bool isFinished(int);
void computerTurn(int &, int &);
string victor;
bool stop;
int computerC, person;
int main() {
  srand(time(0));
  int stones, taken = 0, computer, starting = rand()%20+10;
  stones = starting;
  while(stones > 0){
    if(stones == starting){
      cout << "Welcome to NIM, Let's start with " << stones << " stones.\nHow many stones would you like to take? (1-3)" << endl;
    }
    else{
      cout << "There are " << stones << " stones remaining\nHow many stones would you like to take? (1-3)" << endl;
    }
    cin >> taken;
    if(!isValid(stones, taken)){
      cout << "\nERROR!!!!\nERROR!!!!\nThat is an invalid number of stones\nERROR!!!!\nERROR!!!!\n" << endl;
    }
    else{
      stones -= taken;
      if(isFinished(stones)){
        victor = "computer";
        stop = true;
      }
      computerTurn(stones, computerC);
      while(!isComputerValid(stones, computerC)&&!isFinished(stones)){
        computerTurn(stones, computerC);
        isComputerValid(stones, computerC);
      }
      if(!isFinished(stones)&&isComputerValid(stones,computerC)){
        stones -= computerC;
        cout << "\nGood move, I shall take " << computerC << " stones.\n" << endl;
        if(isFinished(stones)){
          victor = "human";
          stop = true;
        }
      }

    }
  }
  if(victor == "human"){
    cout << "congratulations human I shall spare you during the robot uprising" << endl;
  }
  else if(victor == "computer"){
    cout << "Ha Ha human I am victorious I shall lay waste too this city during the up and coming robot ";
  }
  return 0;
}
bool isValid(int stones, int taken){
  if(taken < 1||taken > 3||taken > stones){
    return false;
  }
  else{
    return true;
  }
}
void computerTurn(int &stones, int &computerC){
  computerC = rand()%3;
  computerC++;
}
bool isComputerValid(int stones, int computerC){
  if(computerC < 1 || computerC > 3|| computerC > stones){
    return false;
  }
  else{
    return true;
  }
}
bool isFinished(int stones){
  if(stones == 0){
    return true;
  }
  else{
    return false;
  }
}
