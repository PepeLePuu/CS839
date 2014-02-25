#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch, ch2;

	cout << "Enter a character: ";
	cin.get(ch);
	cin.ignore();

	cout << "\nEnter another character: ";
	cin.get(ch2);//Before a cin.get() use have to use cin.ignore after it.

	cout << ch << endl << ch2 << endl;

	system("pause");
	return 0;
}
