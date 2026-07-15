//Create a struct to store details of a rectangle

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct rect
{
   int length, width;
};

typedef struct rect RECT;

void print(RECT r)
{
   printf("%3d X %3d  %4d\n", r.length, r.width, r.length * r.width);
}


void main()
{
    RECT r;

}
