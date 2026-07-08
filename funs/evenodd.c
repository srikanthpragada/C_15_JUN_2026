//create a function that takes a number and displays whether it even or odd

#include <stdio.h>

void evenodd(int num)
{
   if (num % 2 == 0)
      printf("even\n");
   else
      printf("odd\n");
}


void main()
{

    evenodd(10);
    evenodd(15);
}
