//create a function that takes a string and prints only digits

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void print_digits(char st[20])
{
  int i;

     for(i = 0; st[i] != '\0'; i ++)
     {
         if(isdigit(st[i]))
            putch(st[i]);
     }
}


void main()
{
    print_digits("Abc123Xyz456");
}
