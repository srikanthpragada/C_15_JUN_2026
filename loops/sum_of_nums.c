#include<stdio.h>

void main()
{
 int num, total = 0;


      printf("Enter a number [0 to stop]:");
      scanf("%d",&num);
      while(num > 0)
      {
          total += num;

          printf("Enter a number [0 to stop] :");
          scanf("%d",&num);
      }

      printf("Total = %d", total);
}
