// Accept qty and price and display net amount after a discount of 20% and 10% tax

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, after_discount, tax, net_amount;


     printf("Enter Price :");
     scanf("%d", &price);

     printf("Enter Qty :");
     scanf("%d", &qty);

     amount = price * qty;
     discount = amount * 20 / 100;
     after_discount = amount - discount;
     tax = after_discount * 10 / 100;
     net_amount = after_discount + tax;

     printf("Amount     : %6d\n", amount);
     printf("- Discount : %6d\n", discount);
     printf("+ Tax      : %6d\n", tax);
     printf("Net Amount : %6d\n", net_amount);
}
