//create a function that takes a string and prints only digits

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void print_reverse(int a[10])
{
  int i;

     for(i = 9; i >= 0; i --)
        printf("%d ", a[i]);

}


void main()
{
  int arr[10] = {10, 5, 4, 3, 60, 90, 80, 11, 23, 20};

     print_reverse(arr);
}
