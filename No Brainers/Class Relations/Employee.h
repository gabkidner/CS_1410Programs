#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <sstream>
#include "Date.h"
#include "Address.h"

using namespace std;

class Employee{
  public:
    Employee(string name, int year, int month, int day): name(name), startDate(year, month, day){}
    virtual string str()const;
    void setAddress(string street, string city);
    friend ostream& operator<<(ostream& out, const Employee& me);
    ~Employee();
  protected:
    string name;
    Address * address;
    Date startDate;
};

Employee::~Employee(){
  if(address){
    delete address;
  }
}

string Employee::str()const{
  stringstream ss;
  ss << name << endl;
  ss << startDate;
  if(address){
    ss << *address;
  }
  return ss.str();
}

void Employee::setAddress(string street, string city){
  address = new Address(street, city);
}

ostream& operator<<(ostream& out, const Employee& me){
  out << me.str();
  return out;
}
#endif
