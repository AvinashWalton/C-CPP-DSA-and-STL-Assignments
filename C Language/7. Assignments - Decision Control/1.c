// Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<=0)
    printf("A given number is non-positive.\n");

    else
    printf("A given number is positive.\n");

    return 0;
}