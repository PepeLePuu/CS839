#include <stdio.h>
/*The object of this program is the store the highest number until the user enters zero or below*/
main()
{
  float number, storage; int cmd;

  for(;;)
    {
      switch(cmd)
	{
	case 0:
	  printf("Enter a number: ");
	  scanf("%f", &number);
	  storage = number;
	case 1:
	  printf("Enter a number: ");
	  scanf("%f", &number);
	case 2: 
	  if(storage > number)
	    {
	      storage = number;
	      break;
	    }
	  else
	    {
	      break;
	    }
	case 3:
	  if(storage <= 0 || number <= 0)
	    printf("The largest number entered was %f", storage);
	    return 0;
	}
    }
  return 0;
}
