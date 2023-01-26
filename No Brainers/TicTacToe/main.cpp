#include <iostream>
#include "TTTGrid.h"
using std::cin;
using std::cout;
using std::endl;

main(){
  TTTGrid game;
  char choice;
  for(int i = 0; i < 9; i++){
    system("cls");
    cout << "Tic Tac Toe" << endl;
    cout << game;
    cout << endl << game.getCurrentPlayer() << "\'s turn: ";
    cin >> choice;
    game.selectMove(choice);
    if(game.hasWon()){
      cout << game.getCurrentPlayer() << " Wins";
      break;
    }
    else{
      game.switchPlayer();
    }
  }
}
