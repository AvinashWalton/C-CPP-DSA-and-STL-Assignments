//Write a program to calculate volume of a Cuboid.

#include<stdio.h>
int main()
{
    float length, breadth, height, cuboid;

    printf("Enter length, breadth and height of a cuboid: \n");
    scanf("%f %f %f", &length, &breadth, &height);

    cuboid = length * breadth * height;

    printf("The volume of a cuboid is: %.2f\n", cuboid);

    return 0;
}