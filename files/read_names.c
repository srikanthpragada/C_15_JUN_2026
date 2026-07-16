#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main()
{
  FILE * fp;
  int ch;


    fp = fopen("c:\\classroom\\jun15c\\names.txt", "rt");

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
