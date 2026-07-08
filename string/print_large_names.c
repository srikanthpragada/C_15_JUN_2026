#include <stdio.h>
#include <string.h>


void main()
{
 char names[5][20];
 int i;


   for(i = 0; i < 5; i ++)
   {
     printf("Enter a name :");
     gets(names[i]);
   }


   for(i = 0; i < 5; i ++)
   {
    if(strlen(names[i]) > 5)
        puts(strupr(names[i]));
   }

}
