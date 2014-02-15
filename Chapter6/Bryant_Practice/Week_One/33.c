/*The following statement calls a function named 'half', which return a value that is half that of the argument passed to itt.
Assume that 'result' and 'number' have both been defined to be double variables. Write the half function


result = half(number);
*/
#include <stdio.h>
int half(double results, double number)
{
  results = half(number);
  
  return results / 2;
}
main()
{
  int number;
  
  printf("Enter a number: ");
  scanf("%d", $number);
  
  number = half();
  
  return 0;
}
