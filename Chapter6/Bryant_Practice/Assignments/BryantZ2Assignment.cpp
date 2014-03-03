#include <iostream>
using namespace std;
bool search(char&);/*I want to use a search funtion that will use each letter as an array and search through them using a for statement*/
void select();/*selection menu*/
int main()
{
  int option;
  cout << "Please enter a string: ";

  cout << endl << endl << "Make a selection\n";
  select();
  cin >> option;
  cin.ignore();/*I don't want anything else streaming to the next input*/

  /*system("pause");*/
  return 0;
}
void select()
{
  cout << "1. Search for a character in the string\n";
  cout << "2. Change a character within the string\n";
  cout << "3. Display the first n characters of the string\n";
  cout << "4. Display the last n characters of the string\n";
  cout << "5. Display all characters that lie betwen two given indices\n";
  cout << "6. Null the string\n";
  cout << "7. Exit\n";

}


