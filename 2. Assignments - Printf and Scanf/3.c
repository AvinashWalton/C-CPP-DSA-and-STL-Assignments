//Write a program to calculate Simple Interest.

#include<stdio.h>
int main()
{
    int Principle, Rate, Time;

    printf("Enter values of Principle, Rate and Time(in years): \n");
    scanf("%d %d %d", &Principle, &Rate, &Time);

    float SimpleInterest = (Principle * Rate * Time) / 100.0;

    printf("Simple interest is: %.2f\n", SimpleInterest);

    return 0;
}