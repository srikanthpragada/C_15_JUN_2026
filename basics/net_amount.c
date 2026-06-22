// Accept qty and price and display net amount after a discount of 20%

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, net_amount;


     printf("Enter Price :");
     scanf("%d", &price);

     printf("Enter Qty :");
     scanf("%d", &qty);

     amount = price * qty;
     discount = amount * 20 / 100;
     net_amount = amount - discount;

     printf("Amount     : %d\n", amount);
     printf("- Discount : %d\n", discount);
     printf("Net Amount : %d\n", net_amount);
}
