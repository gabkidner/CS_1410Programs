#ifndef WAGEDEMPLOYEE_H
#define WAGEDEMPLOYEE_H
#include "Employee.h"

using std::string;
using std::stringstream;

class WagedEmployee: public Employee{
  public:
    WagedEmployee(string name, int year, int month, int day, double wage, double hours): Employee(name, year, month, day), wage(wage), hours(hours){}
    virtual string str()const;
  protected:
    double wage;
    double hours;
};

string WagedEmployee::str()const{
  stringstream ss;
  ss << Employee::str();
  ss << "Wage: " << wage << " Hours: " << hours << endl;
  ss << "Salary: " << wage * hours << endl;
  return ss.str();
}
#endif
