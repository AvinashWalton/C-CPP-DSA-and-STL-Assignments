/* convert the following if-else-if construct into switch case:

if var(var==1)
    printf("Good");
else if(var==2)
    printf("Better");
else if(var==3)
    printf("Best");
else
    printf("Invalid");

Q4 */

#include<stdio.h>

int main()
{
    int var;
    printf("Enter a number: ");
    scanf("%d", &var);
    switch(var)
    {
        case 1:
            printf("Good\n");
            break;

        case 2:
            printf("Better\n");
            break;

        case 3:
            printf("Best\n");
            break;

        default:
            printf("Invalid\n");
    }
    return 0;
}