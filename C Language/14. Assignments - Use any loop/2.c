//Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int count = 0, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits: %d\n", count);

    return 0;
}