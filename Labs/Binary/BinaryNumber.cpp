#include "BinaryNumber.h"
#include <iostream>
#include <ostream>
#include <iomanip>
#include<math.h>
using std::string;
using std::ostream;

BinaryNumber::BinaryNumber(string num){
  int number;
  decimalValue = 0;
  for(int i = 0; i < num.length(); i++){
    int blank = num.length()-i-1;
    if(num[blank] == '1'){
      number = 1;
    }
    else if(num[blank] == '0'){
      number = 0;
    }
    blank = number*pow(2,i);
    int blah = pow(2,i);
    decimalValue += blank;
  }
  binaryValue = num;
}

BinaryNumber::BinaryNumber(int num){
  int div = num, loop = 0, copy;
  string newBase;
  do{
    if(loop==0){
      copy = num%2;
    }
    else{
      copy = div%2;
    }
    div/=2;
    loop++;
    if(copy == 1){
      newBase += '1';
    }
    else if(copy == 0){
      newBase += '0';
    }
  }while(div!=0);
  for(int i = 1; i<=newBase.length(); i++){
    char a = newBase[newBase.length()-i];
    binaryValue+=a;
  }
  decimalValue = num;
}

BinaryNumber BinaryNumber::operator +(BinaryNumber b){
  int newNumber = b.decimalValue + decimalValue;
  return BinaryNumber(newNumber);
}

BinaryNumber BinaryNumber::operator -(BinaryNumber b){
  int newNumber = b.decimalValue - decimalValue;
  return BinaryNumber(newNumber);
}

int BinaryNumber::getDecimalValue(){
  return decimalValue;
}

string BinaryNumber::getBinaryValue(){
  return binaryValue;
}

ostream& operator<<(ostream& out, const BinaryNumber &b){
  out << b.binaryValue;
  return out;
}
