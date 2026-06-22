// Accept price and display net price after a discount of 10%

#include <stdio.h>

void main()
{
  int price, discount, net_price;

     printf("Enter price :");
     scanf("%d", &price);

     discount = price * 10 / 100;
     net_price = price - discount;

     printf("Net price : %d", net_price);

}
