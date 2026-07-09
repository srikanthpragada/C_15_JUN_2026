//create a function that takes a string and and a char and returns the position of the char


#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int search(char s[20], char ch)
{
  int i;

     for(i = 0; s[i] != '\0'; i ++)
     {
         if (s[i] == ch)
             return i; // return position and terminate function
     }

     return  -1; // not found
}


void main()
{
   int pos;

     pos  = search("hello", 'a');
     printf("%d ", pos);

}
