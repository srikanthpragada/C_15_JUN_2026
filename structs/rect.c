//Create a struct to store details of a rectangle

#include <stdio.h>
#include <string.h>

struct rect
{
   int length, width;
};


void main()
{
    struct rect r;
    struct rect r2 = {10, 12};

    printf("Enter length and width :");
    scanf("%d%d", &r.length, &r.width);

    printf("Area = %d\n", r.length * r.width);
    printf("Area = %d", r2.length * r2.width);

}
