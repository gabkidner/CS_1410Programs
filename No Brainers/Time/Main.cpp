#include <iostream>
#include "Time.h"
using namespace std;

int main(){
  cout << "Testing Time!" << endl;
  Time t1(0, 59, 45);
  Time t2(1, 3, 5);
  Time t3 = t1 + t2;
  cout << t2;
  return 0;
}
