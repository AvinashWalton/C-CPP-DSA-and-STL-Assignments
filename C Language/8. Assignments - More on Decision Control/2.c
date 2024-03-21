// Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    printf("A greater number is %d.\n", num1);

    else if(num1 < num2)
    printf("A greater number is %d.\n", num2);

    else
    printf("%d\n", num1);

    return 0;
}