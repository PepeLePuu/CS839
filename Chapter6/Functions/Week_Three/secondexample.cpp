#include <iostream>
using namespace std;
/*C-string ONLY*/
int main()
{
	char name[15], city[15];//Make room for the null character

	cout << "Enter your name: ";
	cin.getline(name, 15, '\n');
	cout << "\nEnter city: ";
	cin.getline(city,15,'\n');

	cout << name << ' ' << city << endl;

	system("pause");
	return 0;
}
