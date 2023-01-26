#include <iostream>
#include <iomanip>
#include <ostream>
using namespace std;

main(){
  srand(time(NULL));
  char puzzle[3][3] =  {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', ' '}
  };
  int cool = rand() + 1;
  while(cool > 0){
    for(int r = 0; r < 4; r++){
      for(int c = 0; c < 4; c++){
        if(puzzle[r-1][c]==' '){
          puzzle[r-1][c] = puzzle[r][c];
          puzzle[r][c] = ' ';
        }
        else if(puzzle[r+1][c]==' '){
          puzzle[r+1][c] = puzzle[r][c];
          puzzle[r][c] = ' ';
        }
        else if(puzzle[r][c-1]== ' '){
          puzzle[r][c-1] = puzzle[r][c];
          puzzle[r][c] = ' ';
        }
        else if(puzzle[r][c+1] == ' '){
          puzzle[r][c+1] = puzzle[r][c];
          puzzle[r][c] = ' ';
        }
      }
    }
    cool --;
  }
  for(int r = 0; r < 3; r++){
    for(int c = 0; c < 3; c++){
      cout << puzzle[r][c] << " + ";
    }
    if(r != 3){
      cout << endl;
    }
  }
  string choice;
}
