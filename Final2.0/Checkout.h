#ifndef CHECKOUT_H
#define CHECKOUT_H
#include <iostream>
#include <vector>
#include <iostream>
using std::ostream;
using std::vector;
using std::endl;
using std::string;

class Checkout{
  public:
    Checkout(ShoppingCart);
    void findTotalPrice();
    void emptyCart();
    friend ostream &operator << (ostream&, const Checkout&);
  private:
    double totalPrice;
    vector<ItemToPurchase> itemsBought;
    ShoppingCart cart;
    string name;
};

Checkout::Checkout(ShoppingCart newCart){
  cart = newCart;
  totalPrice = 0;
  for(ItemToPurchase i:cart.getItems()){
    itemsBought.push_back(i);
  }
  name = cart.getName();
}

void Checkout::findTotalPrice(){
  for(ItemToPurchase i:cart.getItems()){
    totalPrice += i.quantity * i.price;
  }
}

void Checkout::emptyCart(){
  cart.reset();
}

ostream &operator << (ostream &out, const Checkout &check){
  out << "You Purchased\n--------------------------\n";
  for(ItemToPurchase i:check.itemsBought){
    out << i.quantity << " " << i.unit;
    if(i.quantity > 1){
      out << "s";
    }
    out << " of " << i.name << " for $" << i.price << " each" << endl;
  }
  out << "\nThe total price of your cart is $" << check.totalPrice;
  out << "\nThank you " << check.name << " for visiting Amacrow.com have a nice rest of your day" << endl;
  return out;
}

#endif
