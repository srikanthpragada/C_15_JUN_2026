//create a function that takes a string and prints only digits

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int sum(int a[5])
{
  int total = 0, i;

     for(i = 0; i < 5; i ++)
     {
        total += a[i];
     }

     return total;
}


void main()
{
   int arr[5] = {10, 5, 4, 3, 60};
   int total;

     total = sum(arr);
     printf("%d ", total);
}
