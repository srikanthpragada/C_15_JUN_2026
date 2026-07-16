#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main()
{
  FILE * fp;
  char filename[50];
  int ch;


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

       putch(ch);
    }

    fclose(fp);

}
