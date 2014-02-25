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
	/*strings are easie to work with but have more overhead. Also, if you need
	to process individual characters within the string, use C-STRINGS*/
	
	/*DONT MIX UP C-STRINGS or STRINGS (WARNING)*/
}
