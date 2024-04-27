/* Write a menu driven program with the following options:
1. Factorial of a number
2. Check even and odd
3. Area of Circle
4. Sum of First N natural Numbers
5. Exit

Q2 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice, num, fact, sum;
    while(1)
    {
        printf("1. Factorial of a number\n");
        printf("2. Check even and odd\n");
        printf("3. Area of Circle\n");
        printf("4. Sum of First N natural Numbers\n");
        printf("5. Exit\n");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter a number\n");
                scanf("%d", &num);
                fact=1;
                while(num)
                {
                    fact=fact*num;
                    num--;
                }
                printf("Factorial is %d",fact);
                break;

            case 2:
                printf("Enter a number\n");
                scanf("%d", &num);
                printf(num%2?"Odd":"Even");
                break;

            case 3:
                printf("Enter a radius\n");
                scanf("%d", &num);
                printf("Area of cicle is %.2f", 3.14*num*num);
                break;

            case 4:
                printf("Enter a number\n");
                scanf("%d", &num);
                for(sum=0;num;num--)
                sum=sum+num;
                printf("Sum is %d",sum);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}