// Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int num1,num2,digitCount=0,sum,r,i,p;
    printf("Enter a number: ");
    scanf("%d", &num1);

    for(num2=num1;num2;num2=num2/10)
        digitCount++;

    for(num2=num1,sum=0;num2;num2=num2/10)
    {
        r=num2%10;
        for(p=1,i=1;i<=digitCount;i++)
        {
            p=p*r;
        }
        sum=sum+p;
    }
    if(sum==num1)
        printf("%d is an Armstrong number", num1);
    else
        printf("%d is not an Armstrong number", num1);

    return 0;
}