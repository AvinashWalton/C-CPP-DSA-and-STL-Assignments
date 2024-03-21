// Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    if(num >= 000 && num <= 999)
    printf("A given number is a three digit number.\n");

    else
    printf("A given number is not a three digit number.\n");

    return 0;
}