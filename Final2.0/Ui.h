#ifndef UI_H
#define UI_H
#include "ShoppingCart.h"
#include "Checkout.h"
#include <fstream>
#include <iostream>
using std::ifstream;
using std::ios;
using std::ostream;
using std::string;

class Ui{
  public:
    void shopping();
    bool validItem(int);
    bool validQuant(int, int);
    friend ostream &operator << (ostream&, const Ui&);
  private:
    string display;
};

void Ui::shopping(){
  display.clear();
  display += "Selction, Name, Quantity, Unit, Price\n----------------------------\n";
  ifstream fin("items.csv", ios::in);
  string temp;
  while(temp != "3.75"){
    getline(fin, temp, ',');
    display += temp;
    display += ", ";
    getline(fin, temp, ',');
    display += temp;
    display += ", ";
    getline(fin, temp, ',');
    getline(fin, temp, '\n');
    display += '$';
    display += temp;
    display += '\n';
  }
  display += "---------------\n";
}

bool Ui::validItem(int choice){
  if(choice > 10 || choice < -1){
    return false;
  }
  return true;
}

bool Ui::validQuant(int choice, int quant){
  ifstream fin("items.csv", ios::in);
  string temp, ignore, quantity;
  do{
    getline(fin, temp, ',');
    getline(fin, ignore, ',');
    getline(fin, quantity, ',');
    getline(fin, ignore, ',');
    getline(fin, ignore, ',');
    getline(fin, quantity, ',');
  }while(stoi(temp) != choice);
  if(stoi(quantity) < quant){
    return false;
  }
  return true;
}

ostream &operator << (ostream &out, const Ui &u){
  out << u.display;
  return out;
}
#endif
