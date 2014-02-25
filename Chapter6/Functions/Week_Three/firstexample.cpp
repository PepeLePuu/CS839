#include <iostream>
/*It took the first word and because the buffer is still waiting*/
using namespace std;
int main()
{
	char word[15], city[15];

	cout << "Enter your name: ";
	cin >> word;
	cout << "\nEnter city: ";
	cin >> city;

	cout << word << ' ' << city << endl;

	system("pause");
	return 0;
}
