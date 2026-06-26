#include<stdio.h>

void main()
{
 int num, i;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 1; i <= 20; i++)
     {
        printf("%3d * %2d = %5d\n", num, i, num * i);
     }

}
