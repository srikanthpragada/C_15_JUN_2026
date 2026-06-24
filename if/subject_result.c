// Accept marks and display result

#include <stdio.h>

void main()
{
  int marks, subject, pass_marks;


     printf("Enter marks :");
     scanf("%d", &marks);

     printf("Enter subject [1-4] :");
     scanf("%d", &subject);

     if(subject == 1)
        pass_marks = 50;
     else
        if(subject == 3)
            pass_marks = 70;
        else
            pass_marks = 60;



     if(marks > pass_marks)
          printf("Passed");
     else
          printf("Failed");
}
