//Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int num1, num2, L;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for(L=num1>num2?num1:num2; L<=num1*num2; L++)
        if(L%num1==0 && L%num2==0)
            break;
    printf("LCM is %d\n", L);

    return 0;
}