#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED
#include <iostream>

using namespace std;

class Address{
  public:
    Address(string street, string city): street(street), city(city){}
    friend ostream& operator<<(ostream& out, const Address& me);
  protected:
    string street;
    string city;
};

ostream& operator<<(ostream& out, const Address& me){
  out << me.street << ", " << me.city << endl;
}

#endif
