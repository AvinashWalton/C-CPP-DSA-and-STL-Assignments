// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%3==0 && num%2==0)
    printf("Number is divisible by 3 and divisible by 2.\n");

    else
    printf("Number is not divisible by both 3 and 2.\n");

    return 0;
}