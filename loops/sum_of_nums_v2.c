#include<stdio.h>

void main()
{
 int num, total = 0;


      while(1)
      {
          printf("Enter a number [0 to stop] :");
          scanf("%d",&num);

          if(num == 0)
            break;

          total += num;
      }

      printf("Total = %d", total);
}
