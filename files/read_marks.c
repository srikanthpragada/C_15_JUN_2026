#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, count, i;


    fp = fopen("marks.dat", "rb");  // write binary

    if(fp == NULL) // open failed
    {
        printf("Sorry! Could not open file!");
        exit(1); // exit with error
    }

    while(1)
    {
       count = fread(&marks, sizeof(int), 1, fp);
       if(count == 0)  // EOF
          break;
       printf("%d ", marks);
    }

    fclose(fp);

}
