// Print prime numbers from 1 to 100

#include<stdio.h>

void main()
{
 int  n, prime, i;


 printf("2 ");

 for(n = 3; n < 100; n += 2)
 {
     prime = 1;
     for( i = 2 ; i <= n/2; i ++)
     {
       if (n % i == 0)
       {
           prime = 0; // not prime
           break;
       }
     } // inner for

     if(prime)  // prime == 1
        printf("%d ", n);
 } // outer for

}
