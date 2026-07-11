//Pass by reference or address

#include <stdio.h>

void set_max(int * a, int * b)  // pointer
{
   if (*a > *b)
       *b = *a;
   else
       *a = *b;
}


void main()
{
 int x = 10, y = 20;

     set_max(&x, &y); // pass address (pass by reference)
     printf("%d %d ", x, y);
}
