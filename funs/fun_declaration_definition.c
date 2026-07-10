#include <stdio.h>

// Function declaration or Prototype Declaration
void print();
float avg(int, int);


void main()
{
   print(); // call to function
   printf("%f", avg(10, 15));
}

// Function definition
void print()
{

}

float avg(int a, int b)
{
   return (a + b) / 2.0;
}
