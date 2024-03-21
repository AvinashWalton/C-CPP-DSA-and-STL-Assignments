// Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num / 2 * 2 == num)
    printf("Number is even.");

    else
    printf("Number is odd.");

    return 0;
}