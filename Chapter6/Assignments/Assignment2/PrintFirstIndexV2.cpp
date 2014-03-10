#include <iostream>
using namespace std;
void CreateDefinedArray(char[], int&);
int main()
{
  char NonDefinedArray[50]; int StartingIndex;

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  cout << "How many characters from the start do you want to display?";
  cin >> StartingIndex;

  CreateDefinedArray(NonDefinedArray, StartingIndex);

  cout << NonDefinedArray << endl;

  return 0;
}
void CreateDefinedArray(char DefineArray[50], int& StartingIndex)
{
  DefineArray[StartingIndex] = '\0';
}
