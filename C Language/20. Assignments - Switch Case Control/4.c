/* Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
Q4 */

#include<stdio.h>


int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;

        case 32 ... 47:
        case 58 ... 64:
        case 91 ... 96:
        case 123 ... 126:
            printf("Other Special Character\n");
            break;

        default:
            printf("Consonant\n");
    }
    return 0;
}