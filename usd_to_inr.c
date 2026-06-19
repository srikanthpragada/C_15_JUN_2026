// Accept USD and display INR

#include<stdio.h>

void main()
{
 int usd,inr;

   printf("Enter USD =");
   scanf("%d", &usd);

   inr = usd * 95;

   printf("INR = %d", inr);
}
