#include <iostream>
using namespace std;
bool grade(char a)
{
	char letter = toupper(a);
	return letter = ((letter >= 'A' && letter <= 'D') || letter == 'F');
}
int main()
{
	char letter;
	cout << "Enter a letter grade: \n";
	cin >> letter;

	if(grade(letter))
		cout << "Valid grade!\n";
	else
		cout << "\nInvalid grade\n";

	system("pause");
	return 0;
}
