#include <stdio.h>
double half(double number)
{
  return number / 2;
}
main()
{
  double number, result;
  
  printf("Enter a number:\n");
  scanf("%lf",&number);
  
  result = half(number);
  printf("The half of this number is %lf\n", result);
  return 0;
}
