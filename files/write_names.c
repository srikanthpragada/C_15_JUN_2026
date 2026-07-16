#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
  FILE * fp;
  char name[20];


    fp = fopen("c:\\classroom\\jun15c\\names.txt", "wt");

    if(fp == NULL)  // open failed
    {
        printf("Sorry! Could not create file!");
        exit(1); // exit with error
    }

    while(1)
    {
        printf("Enter a name [end to stop] :");
        gets(name);

        if (strcmp(name, "end") == 0)
            break;

        //fputs(name, fp); // write to file
        //fputc('\n', fp);

        fprintf(fp,"%s\n", name);
    }

    fclose(fp);

}
