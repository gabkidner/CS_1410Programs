#include <iostream>
#include <fstream>
#include "Ui.h"
using namespace std;

main(){
  system("cls");
  Ui website;
  char choice, quant;
  string name;
  cout << "What is your Name?" << endl;
  cin >> name;
  ShoppingCart myCart(name);
  do{
    system("cls");
    website.shopping();
    cout << website << endl;
    cout << "Select Your Item or type \"-1\" to quit: ";
    cin >> choice;
    if(choice != -1){
      while(!website.validItem(choice)){
        cout << "That is an invalid choice, try again!\n";
        cin >> choice;
      }
      cout << "How many would you like to buy?\n";
      cin >> quant;
      myCart.addItem(choice, quant);
    }
  }while(choice != -1);
  Checkout end(myCart);
  end.findTotalPrice();
  cout << end << endl;
}
