//Create a struct to store details of a course

#include <stdio.h>
#include <string.h>

struct course
{
   // members
   char title[20];
   int duration, fee;
};


void main()
{
    struct course c1, c2;  // structure variables

    strcpy(c1.title, "Gen AI");
    c1.duration = 24;
    c1.fee = 10000;

    printf("%s %d %d\n", c1.title, c1.duration, c1.fee);

    strcpy(c2.title, "Python");
    c2.duration = 30;
    c2.fee = 7500;

    printf("%s %d %d\n", c2.title, c2.duration, c2.fee);

}
