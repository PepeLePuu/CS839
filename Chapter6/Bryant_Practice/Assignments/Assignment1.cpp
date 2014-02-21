/*Bryant Zepeda
CSIT 839
Assignment #1
*/
#include <iostream>
using namespace std;
bool reduce()
{

};
void calc(int&, int&, char&, int&, int&);
int main()
{
int psr_num1, psr_den1, psr_num2, psr_den2;
char slash = '/';

char operation;
cout << "Enter a fraction expression: ";
 cin >> psr_num1 >> slash >> psr_den1 >>

operation >> psr_num2 >> slash >> psr_den2;

calc(psr_num1, psr_den1, operation, psr_num2, psr_den2);


//system("pause");
return 0;
}
void calc(int& num1, int& den1, char& op_calc int& num2, int& den2)
{
 char operation; int t_num, t_den;
 switch(op_calc)
 {
  case 1:
  if(op_calc == '+') 
  t_num = num1 + num2;
  t_den = den1 + den2;
  break;
  case 2:
  if(op_calc == '*')
  break;
  case 3:
  if(op_calc == '-')
  break;
  case 4:
  if(op_calc == '/')
  break;
 }

}
