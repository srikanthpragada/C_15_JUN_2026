//Create a struct to store details of a rectangle

#include <stdio.h>

enum paymodes
{
    CASH, CARD, UPI
};

void main()
{
  enum paymodes mode;

       mode = CARD;

       if(mode == CASH)
           printf("Cash payment!");

       printf(" %d ", mode);
}
