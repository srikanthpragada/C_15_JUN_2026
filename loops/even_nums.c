#include<stdio.h>

void main()
{
 int num, i;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num; i += 2)
     {
        printf("%d ",i);
     }
}
