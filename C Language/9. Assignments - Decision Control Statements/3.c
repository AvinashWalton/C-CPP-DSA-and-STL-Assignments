// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char alphabet;
    
    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet >= 'A' && alphabet <= 'Z')
    printf("Alphabet is Uppercase.\n");

    else if(alphabet >= 'a' && alphabet <= 'z')
    printf("Alphabet is Lowercase.\n");

    else
    printf("Invalid input.\n");

    return 0;
}