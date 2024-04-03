// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    if(month < 1 || month > 12)
    printf("Invalid month number!\n");

    else if(month == 2)
    printf("Number of days in this month is 28 or 29. (depends on the year)\n");

    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    printf("Number of days in this month is 31.\n");

    else
    printf("Number of days in this month is 30.\n");

    return 0;
}
