//Write a program to input an ASCII code from the user and print its corresponding character.

#include<stdio.h>
int main()
{
    int ASCII;

    printf("Enter an ASCII code(0 to 255 any): \n");
    scanf("%d", &ASCII);

    printf("The Character is %c of ASCII code %d\n", ASCII, ASCII);

    return 0;
}