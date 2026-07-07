#include <stdio.h>
#include <ctype.h>
#include <conio.h>


void main()
{
 char st[50];
 int i, count = 0;


     printf("Enter a string :");
     gets(st);

     // Go to end of the string
     for(i = 0; st[i] != '\0'; i ++)
     {

     }


     // print in reverse order from the end
     for( i-- ; i >= 0; i --)
          putch(st[i]);


}
