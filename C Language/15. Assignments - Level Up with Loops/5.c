//Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{
    int num1, num2, HCF;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    for(HCF=num1<num2?num1:num2; HCF>=1; HCF--)
        if(num1%HCF==0 && num2%HCF==0)
            break;
    if(HCF==1)
        printf("Co-Prime");
    else
        printf("Not a Co-Prime");

    return 0;
}