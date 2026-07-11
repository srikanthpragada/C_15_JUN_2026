//Pass by reference or address

#include <stdio.h>

void set_zero(int n)
{
   n = 0;
}

void set_zero_ref(int * n)
{
   *n = 0;
}

void main()
{
 int a = 100;

     set_zero(a);
     printf("%d ", a);

     set_zero_ref(&a);
     printf("%d ", a);
}
