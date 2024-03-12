//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("The last digit of %d is: %d\n", num, num / 10);

    return 0;
}