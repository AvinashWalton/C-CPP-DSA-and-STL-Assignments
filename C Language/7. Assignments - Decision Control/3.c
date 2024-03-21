// Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2)
    printf("A given number is an odd number.\n");

    else
    printf("A given number is an even number.\n");

    return 0;
}