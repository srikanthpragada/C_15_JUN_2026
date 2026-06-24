// Accept marks and display result

#include <stdio.h>

void main()
{
  int marks, subject, pass_marks;


     printf("Enter marks :");
     scanf("%d", &marks);

     printf("Enter subject [1-5] :");
     scanf("%d", &subject);

     switch(subject)
     {
         case 1 : pass_marks = 50; break;
         case 2 :
         case 4 : pass_marks = 60; break;
         case 3 : pass_marks = 70; break;
         default: pass_marks = 75;
     }


     if(marks > pass_marks)
          printf("Passed");
     else
          printf("Failed");
}
