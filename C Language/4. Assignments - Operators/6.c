// Write a program to swap values of two int variables without using third variable and without using +, - operators.

#include<stdio.h>
int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("Swapped values are: %d and %d", num1,num2);

    return 0;
}