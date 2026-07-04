#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
 int a[10];
 int i,sn, found = 0;

 srand(time(0)); // init random seed

 for(i = 0;i < 10;i ++ )
 {
     a[i] = rand() % 25;
     printf("%d ", a[i]);
 }

 printf("\nEnter a number to search : ");
 scanf("%d", &sn);

 for(i = 0;i < 10 ;i ++)
 {
    if(a[i] == sn)
    {
        printf("Found at : %d\n", i);
        found = 1;
    }
 }

 if(!found)
     printf("Number not found!");
}
