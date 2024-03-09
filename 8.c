//Write a program to calculate square of a given number. Number is entered by the user.

#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is %d\n",num, num*num);

    return(0);
}