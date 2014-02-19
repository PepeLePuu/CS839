/*Bryant Zepeda
CSIT 839
Assignment #1
*/
#include <iostream>
using namespace std;
bool reduce()
{

};
void calc(int&, int&, int&, int&);
int main()
{
int psr_num1, psr_den1, psr_num2, psr_den2;
char slash = '/';

char operation;
cout << "Enter a fraction expression: ";
 cin >> psr_num1 >> slash >> psr_den1 >>

operation >> psr_num2 >> slash >> psr_den2;

calc(psr_num1, psr_den1, psr_num2, psr_den2);

 cout << 

//system("pause");
return 0;
}
void calc(int& num1, int& den1, int& num2, int& den2)
{
  char operation; int t_num, t_den;
switch(operation)
{
 case 1:
if(operation == '+')
  t_num = num1 + num2;
 t_den = den1 + den2;
 break;
 case 2:
if(operation == '*')
  break;
 case 3:
if(operation == '-')
  break;
 case 4:
if(operation == '/')
  break;
}

}
