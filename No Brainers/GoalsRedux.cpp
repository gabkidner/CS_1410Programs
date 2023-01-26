#include <iostream>
#include <iomanip>
using namespace std;
void getChoice(int &);
void getValues(double &, double &);
int yearsToGoal(double, double, double);
double growth(double, double, int);
int main(){
  double rate, investment, goal;
  cout << "Finacial Calculator Redux" << endl;
  int choice;
  do{
    getChoice(choice);
    if(choice <= 2){
      getValues(rate, investment);
      if(choice == 1){
        cout << "Enter your Financial Goal";
        cin >> goal;
        cout << "Years to Goal: " << yearsToGoal(investment, rate, goal);
      }
      else if(choice == 2){
        cout << "Enter Number of years you will invest: ";
        int years;
        cin >> years;
        cout << growth(investment, rate, goal) << endl;
      }
    }
  }while(choice < 3);
  return 0;
}
void getChoice(int &choice){
  cout << "1. Calculate Years to Finacial Goal\n2. Calculate Amount based on Years\n3. Quit" << endl;
  cin >> choice;

}
void getValues(double &rate, double &investment){
  cout << "Enter Investment amount: ";
  cin >> investment;
  cout << "Enter Interest Rate: ";
  cin >> rate;
  rate /= 100;
}
int yearsToGoal(double investment, double rate, double goal){
  int years = 0;
  while(investment < goal){
    investment += investment * rate;
    years++;
  }
  return years;
}
double growth(double investment, double rate, int years){
  for(int i = 0; i<years; i++){
    investment += investment * rate;
  }
  return investment;
}
