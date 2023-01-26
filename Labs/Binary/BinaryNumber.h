#pragma once

#include <iostream>
#include <ostream>
#include <iomanip>
using std::string;
using std::ostream;


class BinaryNumber{
public:
  BinaryNumber(string);
  BinaryNumber(int);
  int getDecimalValue();
  string getBinaryValue();
  BinaryNumber operator +(BinaryNumber b);
  BinaryNumber operator -(BinaryNumber b);
  friend ostream& operator<<(ostream &, const BinaryNumber&);  
private:
  int decimalValue;
  string binaryValue;
};
#include "BinaryNumber.cpp"
