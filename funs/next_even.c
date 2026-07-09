//create a function that takes a number and returns next even number

#include <stdio.h>
int next_even(int num)
{
    if (num % 2 == 0)
        return num + 2;
    else
        return num + 1;
}
void main()
{
    printf("%d\n",next_even(4));
    printf("%d\n",next_even(51));
}
