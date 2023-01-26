#pragma once
#include <string>
using std::string;
using std::ostream;

struct Node{
  string data;
  Node* next;
};

class Queue{
public:
  Queue();
  ~Queue();
  bool isEmpty();
  void add(string);
  void remove();
  string peek();
  friend ostream &operator << (ostream &out, const Queue &s);
private:
  int number = 0;
  Node* front;
  Node* back;
};

Queue::Queue(){
  front = nullptr;
  back = nullptr;
}

Queue::~Queue(){
  while(!isEmpty()){
    remove();
  }
}

bool Queue::isEmpty(){
  return (front == nullptr);
}

void Queue::add(string data){
  auto toAdd = new Node;
  toAdd->data = data;
  toAdd->next = nullptr;
  if(front == nullptr){
    front = toAdd;
    back = toAdd;
  }
  else{
    back->next = toAdd;
    back = toAdd;
  }
}

void Queue::remove(){
  if(!isEmpty()){
    auto temp = front;
    front = front->next;
    delete temp;
  }
}

string Queue::peek(){
  return front -> data;
}

ostream &operator << (ostream &out, const Queue &q){
  auto curr = q.front;
  string space = " ";
  while(curr != nullptr){
    out << curr->data << space;
    curr = curr->next;
  }
  return out;
}
