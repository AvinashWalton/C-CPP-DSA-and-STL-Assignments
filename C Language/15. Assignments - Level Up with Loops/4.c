//Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int num1, num2, HCF;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    for(HCF=num1<num2?num1:num2; HCF>=1; HCF--)
        if(num1%HCF==0 && num2%HCF==0)
            break;
    printf("HCF is %d", HCF);

    return 0;
}