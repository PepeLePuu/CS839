#include <iostream>
#include <string>
using namespace std;
int main()
{
	char name[30], city[30];

	int units;

	cout << "Enter number of units taken: ";
	cin >> units;

	/*cin.ignore()*/; //clears the keyboard buffer. This has to be before another input is entered.
	//GETLINE CREATES THE BUFFER
	//CIN IGNORES WHITESPACE

	cout << "\nEnter your name: ";
	cin.getline(name, 30, '\n');

	cout << "\nUnits: " << units
		<< "\nName: " << name << endl;
	/*DOES NOT WAIT FOR NAME. WHEN YOU ENTERED 15. IT STAYED IN THE KEYBOARD BUFFER. IT TOOK A NEWLINE AS A INPUT.*/
	system("pause");
	return 0;
}
