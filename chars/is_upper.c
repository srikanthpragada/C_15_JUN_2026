#include <stdio.h>
#include <conio.h>

void main()
{
 char ch;

      printf("Enter a char :");
      ch = getche();

      if(ch >= 65 && ch <= 90)
         printf("Uppercase");
      else
         printf("Not uppercase");

}
