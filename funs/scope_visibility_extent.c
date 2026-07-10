#include <stdio.h>

int g = 100; // global scope and static extent


void f(int v)
{
  int n = 9; // local scope and local extent
  int g = 1;

      printf("%d %d ", n, g);

}

void main()
{
 int a; // local scope

    f(10);
    f(20);
    printf(" %d ", g);

}
