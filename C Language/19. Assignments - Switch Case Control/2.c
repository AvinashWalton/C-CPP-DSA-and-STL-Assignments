/* Write a menu driven program with the following options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Q2 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int choice, num1, num2;
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Addition of %d and %d is %d\n", num1, num2, num1+num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Subtraction of %d and %d is %d\n", num1, num2, num1-num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Multiplication of %d and %d is %d\n", num1, num2, num1*num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Quotient of %d and %d is %d\n", num1, num2, num1/num2);
            break;

        case 5:
            exit(0);
            break;
        
        default:
            printf("INVALID CHOICE\n");
        }
    }
    return 0;
}