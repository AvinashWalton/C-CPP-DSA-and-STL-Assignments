//Write a program to calculate size of a character constant.

#include <stdio.h>
int main()
{
    char constant;
    int size;

    printf("Enter a character constant: \n");
    scanf("%c", &constant);

    size = sizeof (constant);
    printf("size of character constant is %d bytes.\n", size);

    return (0);
}