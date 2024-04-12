//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int i, x, a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(x=a+1; x<b; x++)
    {
        for(i=2; i<x; i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ", x);
    }
    return 0;

}