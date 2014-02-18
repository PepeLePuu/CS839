#include <iostream>
using namespace std;
void swap(int& , int&);
int main()
{
	int num, den; char t = '/'; 

	cout << "Enter a fraction: \n";
	cin >> num >> t >> den;

	swap(num, den);

	cout << "1 + " << num << '/' << den << " = ";

	num+=den;

	system("pause");
	return 0;
}
void swap(int& num, int& den)
{
	int temp = num;

	num = den;

	den = temp;
	
}
