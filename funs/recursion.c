//Recursion

#include <stdio.h>

// Recursive
void reverse(int n)
{
    printf("%d ", n);
    if(n > 1)
        reverse(n - 1); // recursion
}

// Non-recursive
void reverse2(int n)
{
 int i;
    for(i = n; i >= 1; i --)
        printf("%d ", i);
}

void main()
{
   reverse(5);
   reverse2(5);
}
