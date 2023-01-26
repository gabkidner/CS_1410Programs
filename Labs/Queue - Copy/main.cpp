#include <iostream>
#include "Queue.h"
using namespace std;

template <class type>
void check(string, type, type);
void fillQueue(Queue<string>&);
void fillIntQueue(Queue<int>&);
void testIsEmpty();
void testIntEmpty();
void testDoubleEmpty();
void checkQueueOrder();
void checkIntOrder();
void checkDoubleOrder();


main(){
  testIsEmpty();
  checkQueueOrder();
  testIntEmpty();
  checkIntOrder();
  testDoubleEmpty();
  checkDoubleOrder();
}

void fillQueue(Queue<string> &queue){
  queue.add("one");
  queue.add("two");
  queue.add("three");
  queue.add("four");
  cout << queue << endl;
}

void fillIntQueue(Queue<int> &queu){
  queu.add(1);
  queu.add(2);
  queu.add(3);
  queu.add(4);
  cout << queu << endl;
}

void fillDoubleQueue(Queue<double> &que){
  que.add(1.5);
  que.add(2.5);
  que.add(3.5);
  que.add(4.5);
  cout << que << endl;
}

void testIsEmpty(){
  Queue<string> queue;
  check("1. Checking Empty Queue", queue.isEmpty(), true);
  queue.add("one");
  queue.remove();
  check("2. Checking Recently Empty Queue", queue.isEmpty(), true);
}

void testIntEmpty(){
  Queue<int> queue;
  check("1. Checking Empty Queue", queue.isEmpty(), true);
  queue.add(1);
  queue.remove();
  check("2. Checking Recently Empty Queue", queue.isEmpty(), true);
}

void testDoubleEmpty(){
  Queue<double> que;
  //  check("1. Checking Empty Queue", queue.isEmpty(), true);
  que.add(1.5);
  que.remove();
  //check("2. Checking Recently Empty Queue", que)
}


void checkQueueOrder(){
  Queue<string> queue;
  fillQueue(queue);
  string txt = "one";
  check("3. Check Front: ", queue.peek(), txt);
  queue.remove();
  txt = "two";
  check("4. Check Second: ", queue.peek(), txt);
}

void checkIntOrder(){
  Queue<int> queu;
  fillIntQueue(queu);
  int txt = 1;
  //check("3. Check Front: ", queu.peek(), txt);
  queu.remove();
  txt = 2;
  //check("4. Check Second: ", queu.peek(), txt);
}

void checkDoubleOrder(){
  Queue<double> que;
  fillDoubleQueue(que);
  int txt = 1.5;
  //check("3. Check Front: ", que.peek(), txt);
  que.remove();
  txt = 2;
  //check("3. Check Front: ", que.peek(), txt);
}

template <class type>
void check(string name, const type shouldBe, const type currentlyIs){

}
