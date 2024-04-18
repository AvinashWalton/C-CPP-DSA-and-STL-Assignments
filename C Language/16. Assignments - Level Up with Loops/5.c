// Write a program to print all armstrong numbers under 1000

#include<stdio.h>
int main()
{
    int num1,num2,digitCount=0,sum,r,i,p;
    for(num1=1;num1<=1000;num1++)
    {
        for(digitCount=0,num2=num1;num2;num2=num2/10)
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
            printf("%d ", num1);
    }
    return 0;
}