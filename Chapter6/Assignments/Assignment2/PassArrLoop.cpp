#include <iostream>
using namespace std;
void CreateDefinedArray(char[]);
int main()
{
  char NonDefinedArray[10];

  CreateDefinedArray(NonDefinedArray);

  for(int Increment = 0; Increment <= 10; ++Increment)
    {
      cout << NonDefinedArray[Increment] << ' ';
    }
  cout << endl;

  return 0;
}
void CreateDefinedArray(char DefineArray[10])
{
  char StartingLetter = 'a';

  for(int Increment = 0; Increment <= 10; ++Increment)
    {
      DefineArray[Increment] = StartingLetter;
      StartingLetter++;
    }
}
