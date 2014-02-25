#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name, city;

	cout << "Enter your name: \n";
	getline(cin,name);
	cout << "Enter city: \n";
	getline(cin,city);

	cout << name << '\n' << city << endl;
	system("pause");
	return 0;
}
