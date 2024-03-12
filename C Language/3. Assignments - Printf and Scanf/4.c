//Write a program to print last digit of a given number.
#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("The last digit of %d is: %d\n", num, num % 10);

    return 0;
}