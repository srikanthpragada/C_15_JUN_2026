#include<stdio.h>
#include<stdlib.h>

void main()
{
 int month, year;

    printf("Enter month number [1-12] :");
    scanf("%d", &month);


    printf("Enter year :");
    scanf("%d", &year);

    if(month < 1 || month > 12)
    {
        printf("Sorry! Invalid Month Number.");
        exit(1); // terminate program
    }


    if(month == 2)
    {
      // check whether year is leap year
      if (year % 4 == 0 && year % 100 != 100 || year % 400 == 0)
          printf("29");
      else
          printf("28");
    }
    else
    {
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("30");
        }
        else
        {
            printf("31");
        }
    }
}
