/*Bryant Zepeda
CSIT 839
Assignment #1
*/
#include <iostream>
using namespace std;
bool reduce()
{

};
void calc(int&, int&, char&, int&, int&, int&, int&);
int main()
{
int psr_num1, psr_den1, psr_num2, psr_den2;
char slash = '/';

char operation;
cout << "Enter a fraction expression: ";
 cin >> psr_num1 >> slash >> psr_den1 >>

operation >> psr_num2 >> slash >> psr_den2;

 int store_num, store_den;
 calc(psr_num1, psr_den1, operation, psr_num2, psr_den2, store_num, store_den);

 cout << psr_num1 << slash << psr_den1 << operation << psr_num2
      << slash << psr_den2 << " = " << store_num << slash << store_den 
      << endl;


//system("pause");
return 0;
}
void calc(int& num1, int& den1, char& op_calc, int& num2, int& den2, int& calln, int& calld)
{
 int t_num, t_den;
if(op_calc == '+')
  {
 t_num = num1 + num2;
 t_den = den1 + den2;
 calln = t_num;
 calld = t_den;
  }
if(op_calc == '-')
  {
    t_num = num1 - num2;
    t_den = den1 - den2;
    calln = t_num;
    calld = t_den;
  }
if(op_calc == '*')
  {
    t_num = num1 * num2;
    t_den = den1 * den2;
    calln = t_num;
    calld = t_den;
  }
if(op_calc == '/')
  {
    t_num = num1 * den2;
    t_den = num2 * den1;
    calln = t_num;
    calld = t_den;
  }
}
