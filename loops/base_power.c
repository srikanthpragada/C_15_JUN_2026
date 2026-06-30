#include<stdio.h>

void main()
{
int i,base,power,exponent = 1;

    printf("Enter a base = ");
    scanf("%d", &base);

    printf("Enter a power = ");
    scanf("%d", &power);

    for(i = 1;i <= power;i++)
    {
        exponent=exponent*base;
    }

    printf("Exponent = %d", exponent);
}
