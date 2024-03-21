/* Write a program to swap values of two int variables in single line arithmetic expression.
(This program is not recommended due to different compiler.) */

#include<stdio.h>
int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2 - (num2 = num1);

    printf("Swapped values are: %d and %d", num1,num2);

    return 0;
}