// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    float side1, side2, side3;
    
    printf("Enter sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
    printf("The triangle is valid.\n");

    else
    printf("The triangle is not valid.\n");
    
    return 0;
}