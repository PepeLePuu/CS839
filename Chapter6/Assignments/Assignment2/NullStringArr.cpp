#include <iostream>
using namespace std;
void CreateDefinedArray(char[]);
int main()
{
  char NonDefinedArray[50];

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  CreateDefinedArray(NonDefinedArray);

  if(NonDefinedArray[0] == '\0')
    {
      cout << "\ni.imgur.com/M2bZq.gif\n";
    }
  if(NonDefinedArray[0] != '\0')
    {
      cout << "\ni.imgur.com/2O7WPl6.gif\n";
    }

  return 0;
}
void CreateDefinedArray(char DefineArray[50])
{
  DefineArray[0] = 0x00;
}
