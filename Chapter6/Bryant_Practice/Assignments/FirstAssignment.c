/*
Write a program that reads a fraction, followed by a '+', '-', '*' or '/',
followed by another fraction, like so: 
1/2 + 1/4 (No spaces between the numerator and slash or the slash and the denominator). 
It then passes both fractions - numerator and denominator 
- and the character indicating the operation to be performed, to a function called calc()
which calculates the result by adding, subtracting, multiplying or dividing the fractions depending
on whether the character passed to it was '+', '-', '*' or '/',
respectively, and assigns the resulting fraction's numerator and denominator to
a pair of parameters which are used to pass these values back to main.

Have main pass the numerator and denominator of the resulting fraction to a reduce function which reduces the original fraction passed to it.  The reduce function returns true if the fraction was modified (reduced) and false if not (e.g.: 3/4 cannot be reduced so it would return false indicating no change).  The main function then prints the reduced fraction along with either "The result was reduced" or "The result was not reduced." depending on the return value of the reduce function.


Then, the main() function asks the user to continue or not, and if the answer is 'y' or 'Y',
reads another expression such as the one shown above,
and the above process continues.  It stops when the user answers with a 'n' or 'N'. 
Have the program wait for a key to be pressed before ending.

Put your name, CSIT 839 and assignment number on top of your source code.
Add comments where the code may not be very clear and to explain what variables are 
for what purpose such as resulting fraction, input fraction, etc.

The following is a sample interaction between the user and the program:

Enter a fraction expression:  1/2 + 1/4
 3/4.  The result was reduced.

More [y/n]:  y

Enter a fraction expression:  1/2 * 1/4
 1/8.  The result was not reduced.

More [y/n]:  y

Enter a fraction expression:  5/4 - 1/4
 1/1.  The result was reduced.

More [y/n]:  n
 Press any key to continue.

Hint: If n1/d1 and n2/d2 are two fractions,

n1/d1 + n2/d2 = n1*d2 + d1*n2 / d1*d2

n1/d1 - n2/d2 = n1*d2 - d1*n2 / d1*d2

n1/d1 * n2/d2 = n1*n2 / d1*d2

n1/d1 / n2/d2 = n1*d2 / d1*n2

To reduce a fraction, try dividing the larger of the numerator/denominator by the smaller of the two;
if not divisible, try the next lower number until you reach 1. 
For example, if the fraction is 12/9, try dividing 12 by 9, if it were divisible, you'd be done, but since it's not you try 12 over 8, 7, 6, ..., 3;
when you get to 3, they're both divisible so you divide both by 3 getting 4/3.*/
