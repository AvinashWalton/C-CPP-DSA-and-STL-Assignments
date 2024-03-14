//Write a program to calculate size of a real constant.

#include<stdio.h>
int main()
{
    float constant;
    int size;

    printf("Enter a real constant: \n");
    scanf("%f", &constant);

    size = sizeof (constant);
    printf("Size of real constant is %d bytes\n", size);

    return 0;
}