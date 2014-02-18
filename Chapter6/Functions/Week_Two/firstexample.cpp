#include <iostream>
using namespace std;
double hype(double, double);
int main()
{
	double side1, side2, side3;

	cout << "Enter two right angles sides of a right triangle: \n";
	cin >> side1 >> side2;

	side3 = hype(side1, side2);

	cout << "\nThird side is: " << side3 << endl;

	system("pause");

	return 0;
}
double hype(double s1, double s2)
{
	return sqrt(s1 * s1 + s2 + s2);
}
