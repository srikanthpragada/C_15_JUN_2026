#include <stdio.h>
#include <stdlib.h>


void main()
{
  FILE * fp;
  char ch;

    fp = fopen("c:\\classroom\\jun15c\\chars.txt", "wt");

    if(fp == NULL)  // open failed
    {
        printf("Sorry! Could not create file!");
        exit(1); // exit with error
    }


    for(ch = 97; ch <= 122; ch ++)
    {
        fputc(ch,fp);
    }

    fclose(fp);

}
