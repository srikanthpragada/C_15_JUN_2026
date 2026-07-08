#include <stdio.h>
#include <conio.h>

void print_line()
{
 int i;


   for(i = 0; i < 25; i ++)
   {
      putch('-');
   }

}


void print_stars()
{
 int i;


   for(i = 0; i < 25; i ++)
   {
      putch('*');
   }

}

void main()
{

   print_line();
   printf("\nSrikanth Technologies\n");
   print_stars();

}
