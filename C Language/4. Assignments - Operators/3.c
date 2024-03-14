/*Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.*/

#include <stdio.h>

int main()
{
    char Value = 'A';
    Value++;

    printf("Changed value of variable is %c\n", Value);

    return (0);
}