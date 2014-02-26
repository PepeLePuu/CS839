#include <iostream>
using namespace std;
int main()
/*Write a program that reads first and last names into two c-strings and student ID into a third c-string
and student ID into a third c-string and make up username such that it's made up of the first two letters of the first name
plus the first 2 letter of the last name plus the last 5 digits of the student ID. 
The student ID can be any length from 5 to 10 digits.*/
{
	char fname[11], lname[16],sid[11], uid[10]= "";//adding a NULL character at the end of addr

	cout << "Enter your first name: \n";
	cin.getline(fname, 16, '\n');
	cout << "Enter last name: \n";
	cin.getline(lname, 26, '\n');
	cout << "\nEnter your student ID: ";
	cin >> sid;

	strncpy(uid, fname, 2);//copy the last two on the right to first. Uses three
	strncat(uid, lname, 2);

	strcat(uid, sid + strlen(sid) - 5);

	cout << "\nUser ID: " << uid << endl;

	system("pause");
	return 0;
}
