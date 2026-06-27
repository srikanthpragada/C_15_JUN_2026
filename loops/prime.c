#include<stdio.h>

void main()
{
 int num, i, count = 0;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
        if(num % i == 0)
             count ++;
     }

     if(count > 0)
        printf("Not a prime number!");
     else
        printf("Prime number!");
}
