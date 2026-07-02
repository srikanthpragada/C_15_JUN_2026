#include <stdio.h>


void main()
{

  int a[5];
  int i;

      printf("Enter 5 values :");

      for(i = 0; i < 5; i ++)
      {
          scanf("%d", &a[i]);
      }


      printf("\nValues :");

      for(i = 4; i >= 0; i --)
      {
          printf("%d ", a[i]);
      }

}
