#include <iostream>
#include <stdlib.h>
using namespace std;
void Menu(char[]);
void Search(char[], char&, int&, int&, char&);
void Change(char[], char&, int&, int&, char&);
void Print(char[], char&, int&, int&, char&);
void DisplayFirst(char[], char&, int&, int&, char&);
void DisplayLast(char[], char&, int&, int&, char&);
void StringNull(char[], char&, int&, int&, char&);
int main()
{
  char EnteredString[50];
  cout << "Please enter a string: \n";
  cin.getline(EnteredString, 50, '\n');

  Menu(EnteredString);

  return 0;
}
void Menu(char EnteredString[50])
{
  char LocalSearch, ChangeThisLetter; int LocalInduce1, LocalInduce2, LocalIncrement = 0;

  int LocalOption; int Outbound;
  do{
    cout << "\n1. Search for a character in the string\n" <<
      "\n2. Change a character within the string\n" <<
      "\n3. Display the first x characters of the string\n" <<
      "\n4. Display the last x characters  of the string\n" <<
      "\n5. Display all characters that lie between two given indices\n" <<
      "\n6. Null the string\n" <<
      "\n7. Exit\n";
    cin >> LocalOption;
    cin.ignore();

    if(LocalOption == 1)
      {
	cout << "What character do you want to search for: \n";
	cin.get(LocalSearch);
	cin.ignore(); Outbound = LocalOption;

	Print(EnteredString, LocalSearch, LocalIncrement, Outbound, ChangeThisLetter);
      }
    if(LocalOption == 2)
      {
	cout << "What letter do you want to change?: \n";
	cin.get(LocalSearch);
	cin.ignore();
	cout << "Which letter do you want to replace it with?: \n";
	cin.get(ChangeThisLetter); Outbound = LocalOption;
	cin.ignore();
	Print(EnteredString, LocalSearch, LocalIncrement, Outbound, ChangeThisLetter);
      }
    if(LocalOption == 3)
      {
	cout << "From which position of the character would you want to display from?: \n";
	cin >> LocalInduce1; Outbound = LocalOption;
	Print(EnteredString, LocalSearch, LocalInduce1, Outbound, ChangeThisLetter);
      }
    if(LocalOption == 4)
      {
	cout << "From which of the last characters do you want to display? : \n";
	cin >> LocalInduce1; Outbound = LocalOption;
	Print(EnteredString, LocalSearch, LocalInduce1, Outbound, ChangeThisLetter);
      }
    if(LocalOption == 5)
      {
	/*FINISH*/
	
      }
    if(LocalOption == 6)
      {
	Outbound = LocalOption;
	Print(EnteredString, LocalSearch, LocalIncrement, Outbound, ChangeThisLetter);
      }
    if(LocalOption == 7)
      {
	system("pause");
	exit(1);
      }
  }while(LocalOption < 0 || LocalOption > 8);

}

void Search(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)
{
  for(int i = 0; i <= 50; ++i)
    {
      if(EnteredString[i] == SearchLetter)
	{
	  Instances++;
	}
    }
}

void Change(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)
{
  for(int Increment = 0; Increment <= 50; ++Increment)
    {
      if(EnteredString[Increment] == SearchLetter)
	{
	  EnteredString[Increment] = ChangeThisLetter;
	}
    }
}
    void Print(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)//extra passing argument for ifs(printing for diff funcs)
{
  if(Outbound == 1)
    {
      Search(EnteredString, SearchLetter, Instances, Outbound, ChangeThisLetter);
      cout << "\nThere were " << Instances << " instances of the letter " << SearchLetter << endl;
    }
  if(Outbound == 2)
    {
      Change(EnteredString, SearchLetter, Instances, Outbound, ChangeThisLetter);
      cout << EnteredString << endl;
    }
  if(Outbound == 3)
    {
      DisplayFirst(EnteredString, SearchLetter, Instances, Outbound, ChangeThisLetter);
      cout << EnteredString << endl;
    }
  if(Outbound == 4)
    {
      DisplayLast(EnteredString, SearchLetter, Instances, Outbound, ChangeThisLetter);
      cout << EnteredString << endl;
    }
  if(Outbound == 6)
    {
      StringNull(EnteredString, SearchLetter, Instances, Outbound, ChangeThisLetter);
      cout << EnteredString << "<----The string is NULL\n";
    }
}

void DisplayFirst(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)
{
  EnteredString[Instances] = '\0';
}

void StringNull(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)
{
  EnteredString[0] = 0x00;
}

void DisplayLast(char EnteredString[50], char& SearchLetter, int& Instances, int& Outbound, char& ChangeThisLetter)
{
  for(;;)
    {
      int IncrementUntilDeletion = 50;
      while(EnteredString[IncrementUntilDeletion] != EnteredString[Instances - IncrementUntilDeletion])
	{
	  EnteredString[IncrementUntilDeletion] = ' ';
	  IncrementUntilDeletion--;
	  if(EnteredString[IncrementUntilDeletion] == EnteredString[Instances])
	    {
	      EnteredString[IncrementUntilDeletion] = '\0';
	      break;
	    }
	}
    }
}
