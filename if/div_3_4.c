#include<stdio.h>

void main()
{
 int num;

    printf("Enter a number :");
    scanf("%d", &num);

    if(num % 3 == 0)
        if(num % 4 == 0)
           printf("Div by 3 and 4");
        else
           printf("Div by 3");
    else
        if (num % 4 == 0)
            printf("Div by 4");
        else
            printf("None");


}
