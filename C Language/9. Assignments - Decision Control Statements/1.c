// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float cp, sp, Loss_or_Profit;
    
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    Loss_or_Profit = (sp - cp) / cp * 100;

    if(Loss_or_Profit < 0)
    printf("Loss percentage.\n");

    else if(Loss_or_Profit == 0)
    printf("No Profit and No Loss.\n");

    else
    printf("Profit percentage.\n");

    return 0;
}