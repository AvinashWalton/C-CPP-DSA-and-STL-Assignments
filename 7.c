//Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.

#include<stdio.h>
int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum of two integers are %d\n",num1+num2);

    return(0);
}