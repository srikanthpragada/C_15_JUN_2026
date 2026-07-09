//create a function that takes two numbers and prints all even numbers in between

#include <stdio.h>

void evens(int start, int end)
{
  int i;

     for(i = start; i <= end; i ++)
     {
         if (i % 2 == 0)
            printf("%d ", i);
     }
}

void evens2(int start, int end)
{
  int i;


     if(start % 2 == 1)
         start ++;


     for(i = start; i <= end; i += 2)
     {
         printf("%d ", i);
     }
}



void main()
{
  evens2(11, 20);
}
