//Write a program to calculate area of a rectangle. input appropriate data from the user.

#include<stdio.h>
int main()
{
    int length, breadth;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    printf("Area of a rectangle is %d\n", length*breadth);

    return(0);
}