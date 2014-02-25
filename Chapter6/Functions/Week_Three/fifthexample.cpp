#include <iostream>
#include <string>
using namespace std;
int main()
{
	string city, name;

	cout << "Enter your name: \n";
	getline(cin,name);
	cout << "Enter city: \n";
	getline(cin, city);

	cout << name << '\n' << city << endl;

	if(name > city)
		cout << "\nName comes after city.\n";
	else
		cout << "\nName comes before city.\n";

	system("pause");
	return 0;
}
