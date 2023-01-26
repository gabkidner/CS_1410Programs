#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;

class Date{
  public:
    Date(int year, int month, int day) : year(year), month(month), day(day){ }
    friend ostream& operator<<(ostream& out, const Date& me);
  protected:
    int year;
    int month;
    int day;
};

ostream& operator<<(ostream& out, const Date& me){
  out << "Start Date: " << me.month << "-" << me.day << "-" << me.year << endl;
}
#endif
