#include <stdio.h>
#include <ctype.h>
#include <conio.h>


void main()
{
 char st[50];
 int i;


     printf("Enter a string :");
     gets(st);

     for(i = 0; st[i] != '\0'; i ++)
     {
        if (isupper(st[i]))
            putch(tolower(st[i]));
        else
            putch(toupper(st[i]));
     }


}
