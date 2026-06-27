#include<stdio.h>

void main()
{
 int num, i, isprime = 1;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
        if(num % i == 0)
        {
             isprime = 0;
             break;
        }
     }


     if(isprime)  // isprime == 1
        printf("Prime number!");
     else
        printf("Not a prime number!");

}
