// print cube of a number

#include <stdio.h>

void main()
{
  int num, cube;

     printf("Enter a number :");
     scanf("%d", &num);   // read an int from keyboard

     cube = num * num  * num;

     printf("Cube of %d is %d", num, cube);

}
