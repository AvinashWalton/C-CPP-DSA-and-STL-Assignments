//Write a program to find next prime number of a given number

#include<stdio.h>
int main()
{
    int i, x;

    printf("Enter a number: ");
    scanf("%d", &x);

    for(x=x+1;; x++)
    {
        for(i=2; i<x; i++)
            if(x%i==0)
                break;
        if(i==x)
        {
            printf("%d ", x);
            break;
        }
    }
    return 0;

}