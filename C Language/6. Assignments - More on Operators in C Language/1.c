// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
int main()
{
    float INR, USD = 84.23;

    printf("Enter the amount in INR: ");
    scanf("%f", &INR);

    printf("%.2f INR = %.2f USD",INR, INR / USD);

    return 0;
}