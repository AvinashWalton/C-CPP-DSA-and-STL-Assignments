//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two integers value: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Swapped values are %d and %d.\n", num1, num2);

    return 0;
}