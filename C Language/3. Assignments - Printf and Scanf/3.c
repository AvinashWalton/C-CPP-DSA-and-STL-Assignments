/*Write a program to input three characters from the user and display characters with their corresponding ASCII codes.*/

#include <stdio.h>

int main()
{
    char inputChar1, inputChar2, inputChar3;

    printf("Enter three characters: \n"); //Asking user to enter three characters
    scanf("%c %c %c", &inputChar1, &inputChar2, &inputChar3);

    printf("ASCII value of %c is %d \n", inputChar1, inputChar1);
    printf("ASCII value of %c is %d \n", inputChar2, inputChar2);
    printf("ASCII value of %c is %d \n", inputChar3, inputChar3);

    return (0);
}