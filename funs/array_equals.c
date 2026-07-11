//create a function that takes two arrays and compare them

#include <stdio.h>

int equals(int a[5], int b[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
        if(a[i] != b[i])
             return 0; // false
     }

     return 1; // true
}


void main()
{
   int a1[5] = {10, 5, 4, 3, 60};
   int a2[5] = {10, 5, 5, 3, 60};


     printf("%d ", equals(a1, a2));
}
