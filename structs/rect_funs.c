
#include <stdio.h>
#include <string.h>

struct rect
{
   int length, width;
};

// 0 if r1 == r2, > 0 if r1 > r2, < 0 if r1 < r2
int compare(struct rect r1, struct rect r2)
{
    if (r1.length == r2.length && r1.width == r2.width)
        return 0;
    else
        return (r1.length * r1.width) - (r2.length * r2.width);
}



// Returns the largest of r1 and r2
struct rect max(struct rect r1, struct rect r2)
{
    if ((r1.length * r1.width) - (r2.length * r2.width) > 0 )
         return r1;
    else
         return r2;
}


void main()
{
    struct rect r1 = {10, 10};;
    struct rect r2 = {10, 20};
    struct rect m;


    printf("%d ", compare(r1,r2));

    m = max(r1, r2);

    printf("%d X %d ", m.length, m.width);

}
