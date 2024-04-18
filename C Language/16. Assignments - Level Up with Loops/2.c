// Write a program to print first N terms of the fibonacci series.

#include<stdio.h>
int main()
{
    int num,num1=-1,num2=1,num3;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num)
    {
        num3=num1+num2;
        printf("%d ",num3);
        num1=num2;
        num2=num3;
        num--;
    }
    return 0;
}