#include "Stack.h"
#include <iostream>

Stack::Stack(){
  top = nullptr;
}

Stack::~Stack(){
  while(!isEmpty()){
    pop();
  }
}

void Stack::push(string data){
  Node *toAdd = new Node;
  toAdd->data = data;
  if(top == nullptr){
    top = toAdd;
    toAdd->next = nullptr;
  }
  else{
    toAdd->next = top;
    top = toAdd;
  }
}

string Stack::peek(){
  return top->data;
}

void Stack::pop(){
  if(isEmpty()){
    Node *temp = top;
    top = top->next;
    delete temp;
  }
}

bool Stack::isEmpty(){
  return(top==nullptr);
}

ostream &operator << (ostream & out, const Stack &s){
  Node*curr = s.top;
  while(curr != nullptr){
    out << curr->data << " ";
    curr = curr->next;
  }
  return out;
}
