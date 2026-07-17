#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  char filename[50];
  int ch, chars, lines, words;


    chars = words = lines = 0;

    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");

    if(fp == NULL)  // open failed
    {
        printf("Sorry! Could not open file!");
        exit(1); // exit with error
    }

    while(1)
    {
       ch = fgetc(fp); // read a char
       if(ch == EOF)
          break;

       chars++;

       if(ch == 32)  // end of word
          words++;
       else
        if(ch == 10) // end of line
        {
            lines++;
            words ++;
        }

    }

    fclose(fp);

    printf("Chars : %d, Words : %d, Lines : %d", chars, words, lines);

}
