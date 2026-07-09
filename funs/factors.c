//create a function that takes a numbers and displays its factors

#include <stdio.h>

void factors(int num)
{
  int i;

     for(i = 1; i <= num / 2; i ++)
     {
         if (num % i == 0)
            printf("%d ", i);
     }

     printf("%d ", num);
}


void main()
{
   factors(29);
}
