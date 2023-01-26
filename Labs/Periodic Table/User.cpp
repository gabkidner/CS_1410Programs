#include "Table.h"
#include <iostream>
using namespace std;

main(){
  Table t;
  Element elem;
  string input;
  int interface;
  do{
    cout << "1. Search by Abbreviation\n2. Search by Atomic Number\n3. Quit\nChoose one: ";
    cin >> interface;
    if(interface == 1){
      cout << "Enter the Abbreviation: ";
      cin >> input;
      elem = t.lookUpAb(input);
      if(elem.abrev == "10000"){
        cout << "You must enter an abreviation not a number" << endl;
      }
      else{
        cout << "\nNumber: " << elem.number << "\nName: " << elem.name << "\nSymbol: " << elem.abrev << "\nMass: " << elem.weight << "\n" << endl;
      }
    }
    else if(interface == 2){
      cout << "Enter the Number: ";
      cin >> input;
      elem = t.lookUpANum(input);
      if(elem.number == "a"){
        cout << "You must enter a number not an abreviation" << endl;
      }
      else{
        cout << "Number: " << elem.number << "\nName: " << elem.name << "\nSymbol: " << elem.abrev << "\nMass: " << elem.weight << endl;
      }
    }
  }while(interface != 3);
  //I'm just saying, you can do the same task with only one method in Table.h
}
