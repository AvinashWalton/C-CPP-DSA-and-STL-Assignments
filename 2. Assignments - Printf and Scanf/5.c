/*Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.*/

#include<stdio.h>
int main()
{
    float CostPrice, SellingPrice, Profit_or_Loss, BananaSellingPrice;

    printf("Enter Cost Price and Selling Price of banana per dozen: \n");
    scanf("%f %f", &CostPrice, &SellingPrice);

    Profit_or_Loss = SellingPrice - CostPrice;

    /*1 dozen is equal to 12 and selling 25 bananas so multiply with per banana price after calculating 1 banana price.*/
    BananaSellingPrice = (Profit_or_Loss / 12.0) * 25;

    printf("Profit or loss earned price upon selling 25 bananas is %.2f", BananaSellingPrice);

    return 0;
}