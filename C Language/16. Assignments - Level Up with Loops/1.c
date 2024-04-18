// Write a program to find the Nth term of the fibonacci series.

#include<stdio.h>
int main()
{
    int num,num1=-1,num2=1,num3;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
        num--;
    }
    printf("%d", num3);
    return 0;
}