/* Write a program which takes the day number of a week and displays a unique greeting message for the day.
Q3 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day;
    printf("Enter a day number (starts from MONDAY): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("JAI MAHAKAL\n");
            break;

        case 2:
            printf("JAI BAJRANGBALI\n");
            break;

        case 3:
            printf("GANPATI BAPPA MAURYA\n");
            break;

        case 4:
            printf("JAI SHREE HARI NARAYANA\n");
            break;

        case 5:
            printf("LAXMI MATA KI JAI\n");
            break;

        case 6:
            printf("JAI HO SHANIDEV KI\n");
            break;

        case 7:
            printf("SURYADEV KI JAI HO\n");
            break;
        
        default:
            printf("INVALID DAY NUMBER\n");
    }
    return 0;
}