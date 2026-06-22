// Accept two numbers and display sum, product and difference

#include<stdio.h>

void main()
{
 int num1, num2, sum, diff, product;

   printf("Enter first number : ");
   scanf("%d", &num1);

   printf("Enter second number: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   diff = num1 - num2;
   product = num1 * num2;

   printf("Sum = %d, Difference = %d, Product = %d", sum,diff,product);
}
