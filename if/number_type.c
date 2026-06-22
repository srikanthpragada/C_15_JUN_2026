// Accept a number and display its sign

#include <stdio.h>


void main()
{
 int number;

    printf("Enter a number = ");
    scanf("%d", &number);

    if(number > 0)
        printf("Positve");
    else
       if(number < 0)
          printf("Negative");
       else
          printf("Zero");
}
