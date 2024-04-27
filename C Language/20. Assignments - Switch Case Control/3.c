/* Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.
Q3 */

#include<stdio.h>


int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Uppercase Alphabet\n");
            break;

        case 'a' ... 'z':
            printf("Lowercase Alphabet\n");
            break;

        default:
            printf("Other Character\n");
    }
    return 0;
}