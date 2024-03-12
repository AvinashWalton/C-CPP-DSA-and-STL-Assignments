//Write a program to input a character from the user and print its ASCII code.

#include <stdio.h>

int main()
{
    char inputChar;

    printf("Enter a character: \n"); //Asking user to enter a character
    scanf("%c", &inputChar);

    printf("ASCII value of %c is %d \n", inputChar, inputChar);

    return (0);
}