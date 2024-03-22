// Write a program to check whether a given character is an alphabet(uppercase), an alphabet(lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    char character;
    
    printf("Enter a character: ");
    scanf("%c", &character);

    if(character >= 'A' && character <= 'Z')
    printf("A given character is an alphabet.(uppercase)\n");

    else if(character >= 'a' && character <= 'z')
    printf("A given character is an alphabet.(lower case)\n");

    else if(character >= '0' && character <= '9')
    printf("A given character is a digit.\n");

    else
    printf("A given character is a special character.\n");
    
    return 0;
}