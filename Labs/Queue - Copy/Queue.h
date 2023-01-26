#pragma once
#include <string>
using std::string;
using std::ostream;

template<class Type>
class Queue;

template<class Type>
ostream &operator <<(ostream &, const Queue<Type> &);

template<class Type>
struct Node{
  Type data;
  Node* next;
};

template<class Type>
class Queue{
public:
  Queue();
  ~Queue();
  bool isEmpty();
  void add(Type data);
  void remove();
  Type peek();
  friend ostream &operator << <>(ostream &out, const Queue &s);
private:
  int number = 0;
  Node <Type> *front;
  Node <Type> *back;
};

template<class Type>
Queue<Type>::Queue(){
  front = nullptr;
  back = nullptr;
}

template<class Type>
Queue<Type>::~Queue(){
  while(!isEmpty()){
    remove();
  }
}

template<class Type>
bool Queue<Type>::isEmpty(){
  return (front == nullptr);
}

template<class Type>
void Queue<Type>::add(Type data){
  auto toAdd = new Node<Type>;
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

template<class Type>
void Queue<Type>::remove(){
  if(!isEmpty()){
    auto temp = front;
    front = front->next;
    delete temp;
  }
}

template<class Type>
Type Queue<Type>::peek(){
  return front -> data;
}

template<class Type>
ostream &operator << (ostream &out, const Queue<Type> &q){
  auto curr = q.front;
  string space = " ";
  while(curr != nullptr){
    out << curr->data << space;
    curr = curr->next;
  }
  return out;
}
