// Accept two numbers and display sum, product and difference

#include<stdio.h>

void main()
{
 int num1, num2, sum, diff, product;

   printf("Enter two numbers : ");
   scanf("%d%d", &num1, &num2);

   sum = num1 + num2;
   diff = num1 - num2;
   product = num1 * num2;

   printf("Sum = %d, Difference = %d, Product = %d", sum,diff,product);
}
