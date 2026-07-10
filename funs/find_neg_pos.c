//create a function that returns position of first negative number

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int find_neg_pos(int a[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
        if(a[i] < 0)
            return i;
     }

     return -1; // not found
}


void main()
{
   int arr[5] = {10, 5, 4, 3, 60};
   int pos;

     pos  = find_neg_pos(arr);
     if (pos >= 0)
        printf("Found at : %d ", pos);
     else
        printf("Not found!");
}
