// Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("A given year is a leap year.\n");

    else
    printf("A given year isn't a leap year.\n");

    return 0;
}