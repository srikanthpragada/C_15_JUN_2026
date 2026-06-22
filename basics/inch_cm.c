// Accept inches and display centimeters

#include <stdio.h>

void main()
{
  int inches, cm;

     printf("Enter Inches :");
     scanf("%d", &inches);

     cm = inches * 2.54;

     printf("Centimeters : %d", cm);
}
