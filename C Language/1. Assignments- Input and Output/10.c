//WAP to find the area of the circle. Take radius of circle from user as input.

#include<stdio.h>
int main()
{
    float radius;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    printf("Area of the circle is %.2f\n", 3.14*radius*radius);

    return(0);
}