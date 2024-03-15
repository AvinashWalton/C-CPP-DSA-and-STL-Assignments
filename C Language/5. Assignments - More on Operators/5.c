/*Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
(Example - number = 234 and digit = 9 then the resulting number is 2349)*/

#include<stdio.h>
int main()
{
    int num, digit, append_Digit;

    printf("Enter a number and a digit: ");
    scanf("%d %d", &num, &digit);

    append_Digit = (num * 10) + digit;
    printf("Result of append a digit %d in the number %d is %d.\n", digit, num, append_Digit);

    return 0;
}