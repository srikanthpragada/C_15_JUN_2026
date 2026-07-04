#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
 int a[5];
 int i,sn, found = 0;

 srand(time(0)); // init random seed

 printf("Enter 5 values :");

 for(i = 0;i < 5;i ++ )
 {
     a[i] = rand() % 25;
     printf("%d ", a[i]);
 }

 printf("\nEnter a number to search : ");
 scanf("%d", &sn);

 for(i = 4;i >= 0 ;i--)
 {
    if(a[i] == sn)
    {
        printf("Number found at %d location", i);
        found = 1;
        break;
    }
 }

 if(!found)
     printf("Number not found!");
}
