#include <iostream>
using namespace std;
void CreateDefinedArray(char[], char&, char&);
int main()
{
  char NonDefinedArray[50]; char FindThisLetter; char ChangeToThisLetter;

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  cout << "Enter a letter you want to change in the string: \n";
  cin.get(FindThisLetter);
  cin.ignore();

  cout << "What letter to do you want to change " << FindThisLetter << " to?\n";
  cin.get(ChangeToThisLetter);
  cin.ignore();

  CreateDefinedArray(NonDefinedArray, FindThisLetter, ChangeToThisLetter);

  cout << NonDefinedArray << endl;

  return 0;
}
void CreateDefinedArray(char DefineArray[50], char& ReturnedLetter, char& ChangedLetter)
{
  for(int Increment = 0; Increment <= 50; ++Increment)
    {
      if(DefineArray[Increment] == ReturnedLetter)
	{
	  DefineArray[Increment] = ChangedLetter;
	}
    }
}
