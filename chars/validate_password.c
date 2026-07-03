#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
 char ch;
 int i, uppercase  = 0, digit = 0;

     printf("Enter Your PIN :");

     for(i = 1; i <= 8; i ++)
     {
         ch = getch();
         putch('*');

         if(isdigit(ch))
             digit = 1;
         else
            if (isupper(ch))
                uppercase = 1;
     }


     if(digit && uppercase)
        printf("\nValid Password");
     else
        printf("\nInvalid Password");

}
