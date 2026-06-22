// Accept price and display net price after a discount of 10% or 20% based on price

#include <stdio.h>

void main()
{
 int price, discount, net_price;


    printf("Enter a price = ");
    scanf("%d", &price);

    if (price > 10000)
       discount = price * 0.20;
    else
       discount = price * 0.10;



    net_price = price - discount;
    printf("Net Price= %d",net_price);
}
