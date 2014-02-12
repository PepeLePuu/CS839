#include <stdio.h>
/*The object of this program is the store the highest number until the user enters zero or below*/
main()
{
  float number, storage; int cmd;

  do{
    printf("Enter a number: ");
    scanf("%f", &number);

    storage = number;
  }while(number != 0);

  printf("The highest number stored was %f\n", storage);

  return 0;
}
