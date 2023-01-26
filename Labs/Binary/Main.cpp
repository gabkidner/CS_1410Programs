#include <iostream>
#include "BinaryNumber.h"
using namespace std;

main(){
  BinaryNumber b1("1011");
  BinaryNumber b2(11);
  BinaryNumber b3 = b1+b2;
  BinaryNumber b4 = b1-b2;
  cout << "Testing string constructor: " << b1 <<
  "\nTesting int constructor: " << b2 <<
  "\nTesting addition: " << b3 <<
  "\nTesting subtraction: " << b4 << endl;
}
