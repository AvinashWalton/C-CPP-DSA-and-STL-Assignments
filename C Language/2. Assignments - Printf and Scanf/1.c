/*Write a program to calculate average of three integers. Numbers are given by the users.*/

#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter three integers value: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("The Average of %d, %d and %d is %.2f\n", num1,num2,num3,(num1+num2+num3)/3.0);

    return 0;
}