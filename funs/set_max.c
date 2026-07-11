//create a function that takes a string and returns word count


#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void set_max(int a, int b)
{
   if (a > b)
       b = a;
   else
       a = b;

   printf("%d %d\n", a, b);
}


void main()
{
 int x = 10, y = 20;

     set_max(x, y);
     printf("%d %d ", x, y);
}
