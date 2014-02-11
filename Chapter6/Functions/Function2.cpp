#include <iostream>
using namespace std;
int print();
int main()
{
  cout << "Hello World\n";
  print();
  //system("pause");
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
