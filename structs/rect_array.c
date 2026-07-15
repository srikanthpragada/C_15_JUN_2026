//Create a struct to store details of a rectangle

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct rect
{
   int length, width;
};

void print(struct rect r)
{
   printf("%3d X %3d  %4d\n", r.length, r.width, r.length * r.width);
}


void main()
{
    struct rect a[5];
    int i;

     srand(time(0));

     for(i = 0; i < 5; i ++)
     {
         a[i].length = rand() % 100;
         a[i].width = rand() % 100;
         print(a[i]);
     }
}
