//Pass by reference or address

#include <stdio.h>

void print(int * a)
{
 int i;

    for(i = 0; i < 5; i ++)
        printf("%d ", a[i]);
}



void main()
{
  int arr[] = {1,2,3,4,5};

      print(arr);
}
