#pragma once
#include <iostream>
using namespace std;

class Time{
  public:
    Time();
    Time(int, int, int);
    Time operator +(Time);
    friend ostream& operator << (ostream &out, Time&t);
  private:
    int hours, minutes, seconds;
};

Time::Time(){
  hours = 0;
  minutes = 0;
  seconds = 0;
}

Time::Time(int h, int m, int s){
  hours = h;
  minutes = m;
  seconds = s;
}

Time Time::operator +(Time t){
  int s = seconds + t.seconds;
  int m = minutes + t.minutes;
  int h = hours + t.hours;
}

ostream& operator << (ostream &out, Time&t){
  if(t.hours < 10) out << "0";
  out << t.hours << ":";
  if(t.minutes < 10) out << "0";
  out << t.minutes << ":";
  if(t.seconds < 10) out << "0";
  out << t.seconds << endl;
  return out;
}
