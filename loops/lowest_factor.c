// Lowest Factor

#include<stdio.h>

void main()
{
 int num, i;

     printf("Enter a number :");
     scanf("%d",&num);

     for(i = 2; i <= num / 2; i ++)
     {
        if(num % i == 0)
        {
           printf("Lowest Factor : %d ",i);
           break;
        }
     }

     if(i > num/2)  // no other factor found
     {
         printf("Lowest Factor : %d", num);
     }

}
