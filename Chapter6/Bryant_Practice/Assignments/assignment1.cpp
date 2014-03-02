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

  cout << "Enter a fraction expression: \n";
  cin >> psr_num1 >> slash >> psr_den1 >>
    operation >> psr_num2 >> slash >> psr_den2;

  int store_num, store_den;/*Storing values for passing arguments for calc() and reduce()*/
  int temp_n1 = psr_num1, temp_d1 = psr_den1,
    temp_n2 = psr_num2, temp_d2 = psr_den2;/*Input storing so user won't see calculations*/

 calc(psr_num1,slash, psr_den1, operation, psr_num2,slash,psr_den2, store_num, store_den);//calculated values show up on instead of original
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
       cout << "Do you want to continue? : [Y/N] \n";
       cin >> m_loop;
       m_loop = toupper(m_loop);
       
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
       }while(m_loop != 'Y' | m_loop != 'N');
//system("pause");
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
    /*When the result is negative, it won't do the reduction*/
/*There will be instances that num2 will be greater than num1 so just a REMINDER*/
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
  /* if(r_num > r_den)
   {
     r_tf = true;
     return r_tf;
   }
 else if(r_num == r_den)
  {
      r_num = 1;
      r_den = 1;
      r_tf = false;
      return r_tf;
      }*/

  for(int i = abs(r_num) < r_den ? abs(r_num) : r_den; i >= 1; --i)/*Does not handle negative numbers*/
    /*The reason it handles it correctly after (abs) correction is that the numerator is being decremented from a large number to 1*/
    /*Study abs [stdlib.h/math.h]*/
  {
    if(r_num % i == 0 && r_den % i == 0)/*The brackets are added because the entire block is excuted if TRUE*/
      {
	r_num/=i;
	r_den/=i;
      }
      if(i == 1)
	{
	  r_tf = true;//it reduces to 1 so why did I set it to false
	  return r_tf;//add somewhere i they are equal then return as 1/1
	}
  }
 r_tf = true;  
 return r_tf;
}
/*!TEMP FIX!: I'm am guessing the past problem with the for statement is that it declared 'r_tf' true multiple times
overwriting when it was set to FALSE. By the time it's done divising by i, it should be declared outside
the for statement because it is done.
Also I added the "i == 1" if statement at the end because I think it makes more sense
at the end because I am still waiting
for it to divide by by i.*/
