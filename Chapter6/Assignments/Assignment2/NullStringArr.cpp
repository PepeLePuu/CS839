#include <iostream>
using namespace std;
void CreateDefinedArray(char[]);
int main()
{
  char NonDefinedArray[50];

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  CreateDefinedArray(NonDefinedArray);

  if(NonDefinedArray == "")
    {
      cout << "\ni.imgur.com/M2bZq.gif\n";
    }
  else
    {
      cout << "\ni.imgur.com/2O7WPl6.gif\n";
    }

  return 0;
}
void CreateDefinedArray(char DefineArray[50])
{
  DefineArray = NULL;//Shit don't work
}
