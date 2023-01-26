#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int choice = 0, sum = 0, result = 0;
  cout << "Number Types:";
  do{
    cout << "\nEnter a number (-1 to quit): ";
    cin >> choice;
    if(choice!=-1){
      for(int i = 0; i<choice; i++){
        result = choice%i;
        if(result==0){
          sum+=choice/i;
        }
      }
      if(sum==choice){
        cout << choice << " is a perfect number";
      }
      else if(sum > choice){
        cout << choice << " is an abundant number";
      }
      else if(sum < choice){
        cout << choice << " is a defeciant number";
      }
    }
  }while(choice != -1);

  return 0;
}
