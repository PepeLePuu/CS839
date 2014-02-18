#include <iostream>
#include <math.h>
using namespace std;
/*Write a function that takes the two sides of a right triangle
and returns the hypotenuse.
if a and b are the two right angle sides and c, the third 
side, c is given by square root of the sum of the squares of a and b.

in main(), read the two right angle sides, pas them to the function and print the returned 
value of the third side.

EXAMPLE: 
Enter the two right angle sides of a right triangle 
Third side:......

float triangle(float a, float b)
{
	a = sqrt(a * a);
	b = sqrt(b * b);

	return a+b;
int main()
{
	float a, b, c, answer;
	cout << "Enter two right angle side of a right triangle:\n";
	cin >> a >> b;

	answer = triangle(a,b);

	cout << "Third side: \n" << answer << endl;
	system("pause");
	return 0;
}
*/

/*Write function that takes a letter grade and returns
true if a valid letter grade(A-D or F) and false if not.
in Main, read a letter grade and validate it using
the function.

Example:Enter a letter grade: F

F is not a valid ltetter grade
*/
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

	system("pause");
	return 0;
}
	
