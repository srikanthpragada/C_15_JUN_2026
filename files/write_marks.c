#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, i;


    fp = fopen("marks.dat", "wb");  // write binary

    if(fp == NULL) // open failed
    {
        printf("Sorry! Could not open file!");
        exit(1); // exit with error
    }

    srand(time(0));

    for(i = 1; i <= 50  ; i ++)
    {
       marks = rand() % 100;
       fwrite(&marks, sizeof(int),1, fp);
    }

    fclose(fp);

}
