/*Bryant Zepeda
CSIT 839
Assignment #1
*/
#include <iostream>
using namespace std;
bool reduce(int&, int&);
  /*
 To reduce a fraction, try dividing the larger of the numerator/denominator by
 the smaller of the two; if not divisible, try the next lower number until you reach 1.
 For example, if the fraction is 12/9, try dividing 12 by 9, if it were divisible,
 you'd be done, but since it's not you try 12 over 8, 7, 6, ..., 3;
 when you get to 3, they're both divisible so you divide both by 3 getting 4/3.*/
void calc(int&, int&, char&, int&, int&, int&, int&);
int main()
{
int psr_num1, psr_den1, psr_num2, psr_den2;
 char slash = '/'; char m_loop;

char operation;
cout << "Enter a fraction expression: ";
 cin >> psr_num1 >> slash >> psr_den1 >>

operation >> psr_num2 >> slash >> psr_den2;

 int store_num, store_den;
 calc(psr_num1, psr_den1, operation, psr_num2, psr_den2, store_num, store_den);
 reduce(store_num, store_den);

 cout << psr_num1 << slash << psr_den1 << operation << psr_num2
      << slash << psr_den2 << " = " << store_num << slash << store_den 
      << endl;

       cout << "Do you want to continue? : [Y/N] \n";
       cin >> m_loop;
       toupper(m_loop);
       do{
       if(m_loop == 'Y')
	 {
	   return main();
	 }
       if(m_loop == 'N')
	 {
	   cout << "Press any key to continue: " << endl;
	   return 0;
	 }
       else
	 {
	   break;
	 }
       }while(m_loop != 'Y' | m_loop != 'N');
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
bool reduce(int& r_num, int& r_den)
{

}

