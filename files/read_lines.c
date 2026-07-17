#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  char filename[50], line[100];
  char * p;
  int lineno=1;


    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");

    if(fp == NULL) // open failed
    {
        printf("Sorry! Could not open file!");
        exit(1); // exit with error
    }

    while(1)
    {
       p = fgets(line, 100, fp);

       if(p == NULL) // EOF
          break;

       printf("%3d: %s", lineno,line);
       lineno ++;
    }

    fclose(fp);

}
