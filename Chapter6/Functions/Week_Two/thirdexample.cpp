#include <iostream>
using namespace std;
void modify(char);
int main()
{
	char letter;
	cout << "Enter a letter grade: \n";
	cin >> letter;
	
	modify(grade);
	cout << "Grade = \n";

	system("pause");
	return 0;
}
void modify(char& gr)//char reference (&)
{
  char letter = toupper(gr);
  
  if(!(letter < 'A' || letter > 'F' || letter != 'E'));//if not between A and F excluding E
  	gr = 'F';
}
