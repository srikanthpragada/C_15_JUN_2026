#include <stdio.h>
#include <string.h>


void main()
{
 char name[20], largest[20];


   //strcpy(largest,""); // empty string
   largest[0] = '\0'; // empty string

   while(1)
   {
     printf("Enter name [end to stop] :");
     gets(name);

     if(stricmp(name, "end")  == 0)
        break;

     if (strcmp(name, largest) > 0)
          strcpy(largest, name);
   }

   printf("Largest Name : %s", largest);

}
