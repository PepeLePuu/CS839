/*Bryant Zepeda
CSIT 839
Assignment #1
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
bool reduce(int&, int&, bool&);
void calc(int&,char&,int&, char&, int&, char&, int&, int&, int&);
int main()
{
  /*START OF VARIABLES THAT WILL PASS ARGUMENTS*/
  int psr_num1, psr_den1, psr_num2, psr_den2;
  char slash; bool tf; char operation;
  /*END OF VARIABLES THAT WILL PASS ARGUMENTS*/

  char m_loop;/*Continue Y/N loop input*/

  cout << "Enter a fraction expression: ";
  cin >> psr_num1 >> slash >> psr_den1 >>
    operation >> psr_num2 >> slash >> psr_den2;

  cout << endl << endl;

  int store_num, store_den;/*Storing values for passing arguments for calc() and reduce()*/
  int temp_n1 = psr_num1, temp_d1 = psr_den1,
    temp_n2 = psr_num2, temp_d2 = psr_den2;/*Input storing so user won't see calculations*/

 calc(psr_num1,slash, psr_den1, operation, psr_num2,slash,psr_den2, store_num, store_den);
 reduce(store_num, store_den, tf);

 if(tf == true)
   {
     cout << "The result was reduced.\n";

     cout << temp_n1 << slash << temp_d1 << operation << temp_n2
	  << slash << temp_d2 << " = " << store_num << slash << store_den
	  << endl;
   }
 else if(tf == false)
   {
   cout << "The result was not reduced\n";

   cout << temp_n1 << slash << temp_d1 << operation << temp_n2
	<< slash << temp_d2 << " = " << store_num << slash << store_den
	<< endl;
   }
       
       do{
       	
       cout << "\nDo you want to continue?[Y/N]: ";
       cin >> m_loop;
       m_loop = toupper(m_loop);
       
       if(m_loop == 'Y')
	 {
	   return main();
	 }
       if(m_loop == 'N')
	 {
	   system("pause");
	   return 0;
	 }
       }while(m_loop != 'Y' | m_loop != 'N');
       return 0;
}
void calc(int& num1, char& slash1, int& den1, char& op_calc, int& num2, char& slash2, int& den2, int& calln, int& calld)
{
if(op_calc == '+')
  {
    int temp_d1, temp_d2;

    temp_d1 = den1; temp_d2 = den2;
    den1*=den2;
    den2*=temp_d1;
    num1*=temp_d2;
    num2*=temp_d1;

    calln = num1 + num2;
    calld = den2;
  }
 if(op_calc == '-')
  {
    int temp_d1, temp_d2;

    temp_d1 = den1; temp_d2 = den2;
    den1*=den2;
    den2*=temp_d1;
    num1*=temp_d2;
    num2*=temp_d1;

    calln = num1 - num2;
    calld = den2;
  }
if(op_calc == '*')
  {
    calln = num1 * num2;
    calld = den1 * den2;
  }
if(op_calc == '/')
  {
    calln = num1 * den2;
    calld = den1 * num2;
  }
}
bool reduce(int& r_num, int& r_den, bool& r_tf)
{
  if(r_num == 1 || r_den == 1)/*SUCH PATCHWORK! WOW*/
    {
      r_tf = false;
      return r_tf;
    }
  for(int i = abs(r_num) < r_den ? abs(r_num) : r_den; i >= 1; --i)
    {
      if(r_num % i == 0 && r_den % i == 0)/*The brackets are added because the entire block is excuted if TRUE*/
	{
	      r_num/=i;
	      r_den/=i;
	      r_tf = true;
	      return r_tf;
	}
      else if(i == 1)
	{
	  r_tf = false;
	  return r_tf;
	}
    }
}
