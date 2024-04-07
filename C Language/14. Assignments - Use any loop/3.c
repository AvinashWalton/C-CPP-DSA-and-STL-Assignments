//Write a program to check whether a given number is a prime number or not

#include<stdio.h>
int main()
{
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
        if(num%i==0)
        {
            printf("This number is not a prime number!\n");
            break;
        }
    if(i==num)
        printf("This number is a prime number!\n");

    return 0;
}