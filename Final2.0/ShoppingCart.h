#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <vector>
#include <fstream>
#include <sstream>
using std::string;
using std::ifstream;
using std::vector;
using std::ios;

struct ItemToPurchase{
  string name;
  int idNumber;
  int quantity;
  string unit;
  double price;
};

class ShoppingCart{
  public:
    ShoppingCart();
    ShoppingCart(string);
    void addItem(int, int);
    vector<ItemToPurchase> getItems();
    string getName();
    void reset();
  private:
    vector<ItemToPurchase> items;
    string name;
};

ShoppingCart::ShoppingCart(){
  name = "";
}

ShoppingCart::ShoppingCart(string userName){
  name = userName;
}

void ShoppingCart::addItem(int choice, int quant){
  ItemToPurchase item;
  string temp;
  ifstream fin("items.csv", ios::in);
  while(item.idNumber != choice){
    getline(fin, temp, ',');
    item.idNumber = stoi(temp);
    getline(fin, item.name, ',');
    getline(fin, item.unit, ',');
    getline(fin, temp, '\n');
    item.price = stod(temp);
  }
  item.quantity = quant;
  fin.close();
  items.push_back(item);
}

vector<ItemToPurchase> ShoppingCart::getItems(){
  return items;
}

string ShoppingCart::getName(){
  return name;
}

void ShoppingCart::reset(){
  items.empty();
  name = "";
}

#endif
