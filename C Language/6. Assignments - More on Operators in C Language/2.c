// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter a three digits number only: ");
    scanf("%d", &num1);

    num2 = (num1 % 10 * 100) + (num1 / 10);
    printf("The rotated number of %d is %d\n", num1, num2);

    return 0;
}
