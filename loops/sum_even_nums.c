#include<stdio.h>

void main()
{
int num,sum = 0,i = 1;


 while(i <= 5)
 {
    printf("Enter a number = ");
    scanf("%d", &num);

    if(num%2==1)
        continue;

    i++;
    sum =+ num;
 }
 printf("Sum = %d", sum);
}
