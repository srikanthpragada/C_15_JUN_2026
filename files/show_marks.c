// Read marks using Random Access

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, pos, rollno, count, i;


    fp = fopen("marks.dat", "rb");  // write binary

    if(fp == NULL) // open failed
    {
        printf("Sorry! Could not open file!");
        exit(1); // exit with error
    }

    while(1)
    {
       printf("Enter rollno [0 to stop]:");
       scanf("%d", &rollno);

       if(rollno == 0)
         break;

       pos = (rollno - 1) * sizeof(int);

       // Move file pointer to required position
       fseek(fp, pos, SEEK_SET);

       count = fread(&marks, sizeof(int), 1, fp);
       if(count == 0)  // EOF
           printf("Sorry! Could not read!\n\n");
       else
           printf("Marks of rollno %d are %d\n\n", rollno, marks);
    }

    fclose(fp);

}
