#include <stdio.h>
#include <conio.h>

void line(char ch, int len)
{
 int i;


   for(i = 0; i < len; i ++)
   {
      putch(ch);
   }

}

void main()
{

   line('*', 30);
   printf("\nSrikanth Technologies\n");
   line('=', 40);

}
