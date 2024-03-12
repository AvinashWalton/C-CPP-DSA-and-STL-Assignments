//Write a program to calculate circumference of a circle.

#include<stdio.h>
int main()
{
    int radius;

    printf("Enter radius of a circle: \n");
    scanf("%d", &radius);

    float circumference = 2*3.14*radius;

    printf("The Circumference of a circle is %.2f", circumference);

    return 0;
}