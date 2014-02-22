#include <iostream>
using namespace std;
bool grade(char a)//bool or true or false
{
char letter = toupper(a);
return letter = ((letter >= 'A' && letter <= 'D') || letter == 'F');//return 0 or 1
}
int main()
{
char letter;
cout << "Enter a letter grade: \n";
cin >> letter;

if(grade(letter))
cout << "Valid grade!\n";
else
cout << "\nInvalid grade\n";

system("pause");
return 0;
}
