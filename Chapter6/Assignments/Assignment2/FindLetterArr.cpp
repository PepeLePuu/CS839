#include <iostream>
using namespace std;
void CreateDefinedArray(char[], char&, int&);
int main()
{
  char NonDefinedArray[50]; char FindThisLetter; int ReturnedIncrementCounter = 0;

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  cout << "Enter a letter you want to find in the string: ";
  cin.get(FindThisLetter);

  CreateDefinedArray(NonDefinedArray, FindThisLetter, ReturnedIncrementCounter);

  cout << "The letter " << FindThisLetter << " was printed a total of " <<
    ReturnedIncrementCounter << " times\n";

  return 0;
}
void CreateDefinedArray(char DefineArray[50], char& ReturnedLetter, int& ReturnedIncrementCounter)
{
  for(int Increment = 0; Increment <= 50; ++Increment)
    {
      if(DefineArray[Increment] == ReturnedLetter)
	{
	  ReturnedIncrementCounter++;
	}
    }
}
