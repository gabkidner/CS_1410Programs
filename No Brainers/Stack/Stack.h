#pragma once
#include <string>
using namespace std;

struct Node{
  string data;
  Node *next;
};

class Stack{
public:
  Stack();
  ~Stack();
  void push(string data);
  void pop();
  string peek();
  bool isEmpty();
  friend ostream &operator << (ostream &, const Stack &);
private:
  Node *top;
};

#include "Stack.cpp"
