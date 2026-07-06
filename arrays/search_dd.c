#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
  int a[5][5];
  int i, j, sn, found = 0;

     srand(time(0));

     for(i = 0; i < 5; i ++)
     {
         for(j = 0; j < 5; j ++)
         {
            a[i][j] = rand() % 25;
            printf("%5d", a[i][j]);

         }
         printf("\n");
     }

     printf("Enter search number :");
     scanf("%d", &sn);

     for(i = 0; i < 5; i ++)
     {
         for(j = 0; j < 5; j ++)
         {
           if(a[i][j] == sn)
           {
              printf("Found at %d,%d", i, j);
              found = 1;
              break; // break inner loop
           }
         }

         if(found)
            break; // break outer loop
     }

     if(!found)
        printf("Not found!");

}
