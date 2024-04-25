/* Write a program which takes the month number as an input and display number of days in that month.
Q1 */

#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 Days\n");
        break;

    case 4: case 6: case 9: case 11:
        printf("30 Days\n");
        break;

    case 2:
        printf("28 or 29 Days\n");
        break;
    
    default:
        printf("INVALID MONTH NUMBER\n");
    }
    return 0;
}