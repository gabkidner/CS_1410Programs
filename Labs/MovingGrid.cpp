#include <iostream>
using namespace std;
enum Direction:int{NORTH, EAST, SOUTH, WEST};

struct Position{
  int x, y;
};

void move(Position&, Direction);

int main(){
  int newDirection;
  Direction direct;
  Position point = {0,0};
  cin >> newDirection;
  if(newDirection = 1){
    direct = NORTH;
  }
  else if(newDirection = 2){
    direct = EAST;
  }
}

/*void move(Position& point, Direction direct){
  switch(direct){
    case NORTH: point.y++;
    case EAST: point.x++;
    case SOUTH: point.y--;
    case WEST: point.x--;
    cout << "(" << point.x << ", " << point.y << ")";
  }
}*/
