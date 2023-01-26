#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double investment, goal, rate;
    int years, choice;
    do{

        cout << "Financial Goal Calculator" << endl;
        cout << "1. Calculate Years to Financial Goal" << endl;
        cout << "2. Calculate Amount based on Years" << endl;
        cout << "3. Quit" << endl;
        cin >> choice;
        if(choice < 2){
            cout << "Enter Investment amount: ";
            cin >> investment;
            cout << "Enter Interest Rate: ";
            cin >> rate;
            rate /= 100;
        }
        switch(choice){
            case 1:
                cout << "Enter Financial goal: ";
                cin >> goal;
                years = 0;
                while(investment < goal){
                    investment += (rate * investment);
                    years++;
                    cout << fixed;
                    cout << "Year " << setw(3) << years << ": " << setprecision(2) << investment << endl;
                }
                cout << "Years to goal: " << years << endl;
                break;
            case 2:
                cout << "Enter the number of years that you want to save ";
                cin >> years;
                for(int i = 0; i < years; i++){
                    investment += (rate * investment);
                }
                cout << "Your investment will be " << investment << " after " << years << "years.\n";
                break;
        }
    }while(choice < 3);
    return 0;
}