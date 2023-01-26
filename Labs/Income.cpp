#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  float year1, year2, year3, year4, year5;
  cout << "Enter Income for 2016: ";
  cin >> year1;
  cout << "Enter Income for 2015: ";
  cin >> year2;
  cout << "Enter Income for 2014: ";
  cin >> year3;
  cout << "Enter Income for 2013: ";
  cin >> year4;
  cout << "Enter Income for 2012: ";
  cin >> year5;
  float total = year1 + year2 + year3 + year4 + year5;
  float av = total / 5.0;
  cout << "\nIncome (averaged over the past 5 years) is: " << fixed << setprecision(2) << av;
  return 0;
}