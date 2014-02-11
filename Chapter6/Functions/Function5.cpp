#include <iostream>
using namespace std;
int print(char);
int main()
{
  char value;

  cout << "Hello World\n";
  cout << "\nTo read month enter 'm' and to read day enter 'd' : ";
  cin >> value;
  int retval = print(value);

  if(value == 'm')
    cout << "\nMonth = " << retval << endl;
  if(value == 'd')
    cout << "\nDay = " << retval << endl;
  return 0;
}
int print(char value)
{
  int monthorday;

  cout << "\nToday is the first day of class.\n";

  if(value == 'm')
      cout << "\nWhat month  were you born? ";
  if(value == 'd')
      cout << "\nWhat day were you born?";

  cin >> monthorday;
  return monthorday;
}
