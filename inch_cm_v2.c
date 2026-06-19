// Accept inches and display centimeters

#include <stdio.h>

void main()
{
  float inches, cm;

     printf("Enter Inches :");
     scanf("%f", &inches);

     cm = inches * 2.54;

     printf("Centimeters : %8.2f", cm);
}
