#include <stdio.h>
main()
{
  if(1==2)
  printf("1==2, This is without brackets\n");
  
  if(1==2)
  {
    printf("1==2, this is WITH brackets\n");
  }
  else if(1!=2)
  {
    printf("1!=2, SEE WHAT HAPPENS LARRY?!?!\n");
  }
  return 0;
}
