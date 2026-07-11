//create a function that takes a string and returns word count


#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int word_count(char s[20])
{
  int i, count = 1;

     for(i = 0; s[i] != '\0'; i ++)
     {
         if (s[i] == 32)
            count ++;

     }
     return  count;
}


void main()
{
   int words;

     words = word_count("how do you do today");
     printf("%d ", words);
     words = word_count("hello");
     printf("%d ", words);
}
