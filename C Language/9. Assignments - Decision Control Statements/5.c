// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%7==0 || num%3==0)
    printf("Number is divisible by 7 or divisible by 3.\n");

    else
    printf("Number is not divisible by 7 or 3.\n");

    return 0;
}