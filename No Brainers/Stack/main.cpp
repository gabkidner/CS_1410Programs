#include <iostream>
#include "Stack.h"
using namespace std;

main(){
  cout << "Stack implemented with a Linked List" << endl;
  Stack stack;
  stack.push("Lasagna");
  stack.push("Sushi");
  stack.push("Cherry Cheescake");
  stack.push("Sushi");
  stack.push("Bacon");
  stack.push("Ice Cream");
  stack.push("Pizza");
  stack.push("Mac and Cheese");
  stack.push("Candy");
  stack.push("Mashed Potatoes");
  stack.push("Fried Chicken");
  stack.push("Watermellon");
  cout << stack << endl;
  for(int  i = 0; i < 4; i++)
    stack.pop();
  cout << stack << endl;
}
