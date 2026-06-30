// Display avg of negative numbers

#include<stdio.h>

void main()
{
int num,sum = 0,negative_numbers = 0;

  while(1)
  {
    printf("Enter a number = ");
    scanf("%d", &num);

    if(num == 0)
        break;


    if(num > 0)  // if positive then ignore
       continue;  // start next iteration


    negative_numbers++;
    sum += num;
  }

  printf("Average = %.2f",  (float) sum / negative_numbers);
}
