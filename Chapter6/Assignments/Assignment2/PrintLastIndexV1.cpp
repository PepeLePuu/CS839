#include <iostream>
using namespace std;
void CreateDefinedArray(char[], int&);
int main()
{
  char NonDefinedArray[50]; int EndingIndex;

  cout << "Enter a string: ";
  cin.getline(NonDefinedArray, 50, '\n');

  cout << "How many last characters from the string do you want to display?";
  cin >> EndingIndex;

  CreateDefinedArray(NonDefinedArray, EndingIndex);

  cout << NonDefinedArray << endl;

  return 0;
}
void CreateDefinedArray(char DefineArray[50], int& EndingIndex)
{
  for(;;)
    {
      int IncrementUntilDeletion = 50;
      while(DefineArray[IncrementUntilDeletion] != DefineArray[EndingIndex - IncrementUntilDeletion])
	{
	  DefineArray[IncrementUntilDeletion] = ' ';
	  IncrementUntilDeletion--;
	  if(DefineArray[IncrementUntilDeletion] == DefineArray[EndingIndex])
	    {
	      DefineArray[IncrementUntilDeletion] = '\0';
	      break;
	    }
	}
    }

}
