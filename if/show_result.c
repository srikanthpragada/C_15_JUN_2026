// Accept marks and display result

#include <stdio.h>

void main()
{
  int m1, m2;


     printf("Enter marks in two subjects :");
     scanf("%d%d", &m1, &m2);

     if(m1 > 50 && m2 > 50)
        printf("Passed");
     else
        if (m1 > 80 || m2 > 80)
           printf("Passed");
        else
            if (m1 + m2 >= 100)
                printf("Passed");
            else
                printf("Failed");

}
