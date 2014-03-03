/*Write a program that reads first and last names into two c-strings and 
student ID into a third c-string and makes up username such that it's made up
of the first two letters of the first name, plus the first 2 letters of the
last name plus the last 5 digits of the student ID. The student ID can be any
length from 5 to 10 digits.
Example:
Enter first name: Scott
Enter last name: Pierce
Enter student ID: 123456789
Username: ScPi56789
*/
#include <iostream>
using namespace std;
int main()
{
	char fname[11], lname[16], sid[11], uid[10] = "";

	cout << "Enter your first name: ";
	cin.getline(fname, 11, '\n');
	cout << "\nEnter your last name: ";
	cin.getline(lname, 16, '\n');
	cout << "\nEnter your student ID: ";
	cin >> sid;
	strncpy(uid, fname, 2);
	strncat(uid, lname, 2);
	strcat(uid, sid + strlen(sid) - 5);
	cout << "\nUserID: " << uid << endl;

	system("pause");
	return 0;
}
