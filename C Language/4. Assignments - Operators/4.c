//Write a program to swap values of two int variables.

#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter two integers value: ");
    scanf("%d %d", &num1, &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("Swapped values are %d and %d", num1, num2);

    return 0;
}