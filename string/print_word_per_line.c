#include <stdio.h>
#include <ctype.h>
#include <conio.h>


void main()
{
 char st[50];
 int i;


   printf("Enter a name :");
   gets(st);

   for(i = 0; st[i] != '\0'; i ++)
   {
     if(isspace(st[i]))
        putch('\n');
     else
        putch(st[i]);
   }

}
