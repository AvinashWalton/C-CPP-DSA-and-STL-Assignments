// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>
int main()
{
    int a,b,c;
    float discriminant;

    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0)
        printf("Real & Distinct!\n");

    else if(discriminant == 0)
        printf("Real & Equal!\n");

    else
        printf("Imaginary Roots\n");

    return 0;
}
