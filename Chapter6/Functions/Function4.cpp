#include <iostream>
using namespace std;
int print();
int main()
{
  cout << "Hello World\n";
  // int m = print();
  // cout << "\nMonth = " << m << endl;
  //system("pause");
  //cout << "\nMonth = " << print();
  if(print() == 2)
    cout << "\nMonth = February\n";

  return 0;
}
int print()
{
  int month;

  cout << "\nToday is the first day of school!\n";
  cout << "\nWhat month were you born? ";
  cin >> month;
  return month;
}
