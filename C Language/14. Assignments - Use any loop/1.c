//Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int i, factorial = 1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        factorial = factorial * i;
    }
    printf("The Factorial of %d is %d\n", num, factorial);

    return 0;
}