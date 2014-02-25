#include <iostream>
#include <string>
/*C-STRING VERSION OF EXAMPLE 5(WEEK THREE)*/
using namespace std;
int main()
{
	char name[30], city[30];//Make room for the NULL character

	cout << "Enter your name: \n";
	cin.getline(name, 15, '\n');
	cout << "Enter city: \n";
	cin.getline(name, 15, '\n');

	cout << name << '\n' << city << endl;
	strcpy(city,name);
	cout << endl << name << endl << city;
	strcat(city, name);
	cout << endl << name << endl << city;

	if(strcmp(name,city) < 0)
		cout << "Name comes first\n";
	else if(strcmp(name,city) > 0)
		cout << "City comes first.\n";
	else if(strcmp(name,city) == 0)
		cout << "City and name are identical\n";


	system("pause");
	return 0;
}
