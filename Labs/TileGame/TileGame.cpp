#include <sstream>
#include <string>
#include <iostream>
#include "TileGame.h"
using namespace std;

TileGame::TileGame()
{
    //Assign each item in the array to the value of the index
    for(int i = 0; i < 10; i++)
    {
      tiles[i] = i;
    }

    //TODO: Mix the positions up
    for(int i = 0; i < 10; i++)
    {
      int blah = rand() % 10;
      int neat = tiles[i];
      tiles[i] = tiles  [blah];
      tiles[blah] = neat;
    }
}

int TileGame::findZero()
{
    int location;
    for(int i = 0; i < 10; i++){
      if(tiles[i] == 0){
        location = i;
      }
    }
    //TODO Return the position of the Zero
    return location;
}

void TileGame:: moveRight()
{
  int zero = findZero(), left = zero-1;
  if(zero == 0){
    left = 9;
  }
  tiles[zero] = tiles[left];
  tiles[left] = 0;
}
  //TODO:  Swap the value to the left of the zero with the zero
  //Use the variable zero as the index of the zero
void TileGame::moveLeft()
{
  int zero = findZero(), right = zero+1;
  if(zero == 9){
    right = 0;
  }
  tiles[zero] = tiles[right];
  tiles[right] = 0;
    //TODO:  Swap the value to the right of the zero with the zero
    //Use the variable zero as the index of the zero
}

void TileGame::swap()
{
    int zero = findZero(), left = zero-1, right = zero+1;
    if(zero == 9){
      right = 0;
    }
    if(zero == 0){
      left = 9;
    }
    char blah = tiles[left];
    tiles[left] = tiles[right];
    tiles[right] = blah;
    //TODO:  Swap the values on Eithor Side of the 0
    //Use the variable zero as the index of the zero
}

bool TileGame::inOrder()
{
  int good = 0;
  for(int i = 0; i < 9; i++){
    if(tiles[i+1] - tiles[i] == 1){
      good++;
    }
  }
  if(good == 9){
    return true;
  }
  return false;
    //TODO: Check to see if the game is in order.
}
string TileGame::getDisplay()
{
  stringstream output;
  for(int i = 0; i < 10; i++)
  {
    if(tiles[i]>0)
      output << "[" << tiles[i] << "]" << " ";
    else
      output << "[ ]" << " ";
  }
  return output.str();
  //Returns the game as a string for display
}
