// Accept 3 numbers and display whether they are equal

#include <stdio.h>

void main()
{
 int a,b,c;


    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && a == c)
       printf("All 3 are equal!");
    else
       printf("They are not equal!");

}
