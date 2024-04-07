//Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int num1, num2 = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    while(num1)
    {
        num2 = num2*10 + num1%10;
        num1 = num1/10;
    }
    printf("%d\n", num2);
    return 0;
}