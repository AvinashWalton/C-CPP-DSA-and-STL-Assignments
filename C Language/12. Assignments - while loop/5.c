// Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int i, N;

    printf("Enter a number: ");
    scanf("%d",&N);

    i = N;

    while(i>=1)
    {
        printf("%d\n",2*i-1);
        i--;
    }

    return 0;
}
