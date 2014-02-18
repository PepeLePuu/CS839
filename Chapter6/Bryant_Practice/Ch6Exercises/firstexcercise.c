#include <stdio.h>
int half(double number)
{
  return number / 2;
}
main()
{
  double number, result;
  
  printf("Enter a  number:\n");
  scanf("%d",&number)
  
  result = half(number);
  printf("The half of this number is %d", result);
  return 0;
}
