#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{

  int a[5];
  int i;

      srand(time(0)); // init random seed

      printf("Enter 5 values :");

      for(i = 0; i < 5; i ++)
      {
          a[i] = rand() % 100; // take random number
      }


      printf("\nValues :");

      for(i = 4; i >= 0; i --)
      {
          printf("%d ", a[i]);
      }

}
