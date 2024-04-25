/* Write a menu driven program with the following options:
1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.
2. Check whether a given set of three numbers are lenghts of sides of a right angled triangle or not.
3. Check whether a given set of three numbers are equilateral triangle or not
4. Exit

Q4 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int num1,num2,num3,choice;
        printf("\n1. Check lengths of an isosceles triangle or not");
        printf("\n2. Check lenghts of sides of a right angled triangle or not");
        printf("\n3. Check equilateral triangle or not");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2)
                    if(num1==num2 || num1==num3 || num2==num3)
                        printf("Isosceles Triangle");
                    else    
                        printf("Not an isosceles triangle");
                else
                    printf("Invalid sides of a triangle");
                break;

            case 2:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2)
                    if(num1*num1 + num2*num2 == num3*num3 || num1*num1 + num3*num3 == num2*num2 || num2*num2 + num3*num3 == num1*num1)
                        printf("Right Angled Triangle");
                    else    
                        printf("Not a Right Angled Triangle");
                else
                    printf("Invalid sides of a triangle");
                break;

            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2)
                    if(num1==num2 && num1==num3)
                        printf("Equilateral Triangle");
                    else    
                        printf("Not an equilateral triangle");
                else
                    printf("Invalid sides of a triangle");
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}