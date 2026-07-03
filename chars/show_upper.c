#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
 char ch;
 int i;

     printf("Enter Your Name :");

     while(1)
     {
         ch = getch();
         if(ch == '*')
             break;

         putch(toupper(ch));

     }

}
