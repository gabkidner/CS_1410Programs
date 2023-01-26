#ifndef SALESEMPLOYEE_H
#define SALESEMPLOYEE_H
#include "SalariedEmployee.h"

using namespace std;

class SalesEmployee: public SalariedEmployee{
  public:
    SalesEmployee(string name, int year, int month, int day, double salary, double comission, double sales) : SalariedEmployee(name, year, month, day, salary), comission(comission), sales(sales) {}
    string str()const;
  protected:
    double comission, sales;
};

string SalesEmployee::str()const{
  stringstream ss;
  ss << SalariedEmployee::str();
  ss << "Sales: " << sales << endl;
  ss << "Commision: " << comission << endl;
  return ss.str();
}
#endif
