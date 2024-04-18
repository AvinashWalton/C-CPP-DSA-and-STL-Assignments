// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int num,num1=-1,num2=1,num3;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(1)
    {
        num3=num1+num2;
        if(num3>=num)
            break;
        num1=num2;
        num2=num3;
    }
    if(num3==num)
        printf("%d is found in the series", num);
    else
        printf("%d is not found in the series", num);
    return 0;
}