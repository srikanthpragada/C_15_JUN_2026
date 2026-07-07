#include <stdio.h>
#include <ctype.h>
#include <conio.h>


void main()
{
 char st[50];
 int i;


     printf("Enter a string :");
     gets(st);

     // Invert the case
     for(i = 0; st[i] != '\0'; i ++)
     {
        if (isupper(st[i]))
            st[i] = tolower(st[i]);
        else
            st[i] = toupper(st[i]);
     }

     puts(st);
}
