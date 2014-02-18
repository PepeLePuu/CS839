#include <iostream>
using namespace std;
void modify(char&);//pass by reference
int main()
{	
	char grade;

	cout << "Enter a letter grade: \n";
	cin >> grade;
	modify(grade);	
	cout << "Grade = " << grade << endl;

	system("pause");
	return 0;
}
void modify(char& gr)//char reference (&)
{
	char letter = toupper(gr);  
	if(!(letter < 'A' || letter > 'F' || letter != 'E'));/*if not between A and F excluding E*/  
	gr = 'F';
}
