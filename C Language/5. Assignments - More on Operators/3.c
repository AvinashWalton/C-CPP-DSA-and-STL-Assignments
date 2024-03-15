//Write a program to print size of an int, a float, a char and a double type variable.

#include <stdio.h>

int main()
{
    int num, size;
    float average;
    char character;
    double test;

    size = sizeof(num);
    printf("Size of an int is %d\n", size);

    size = sizeof(average);
    printf("Size of a float is %d\n", size);

    size = sizeof(character);
    printf("Size of a char is %d\n", size);

    size = sizeof(test);
    printf("Size of a double is %d\n", size);

    return (0);
}