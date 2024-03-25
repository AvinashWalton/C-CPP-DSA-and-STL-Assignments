// Write a program to print the first N odd natural numbers.

#include <stdio.h>
int main()
{
    int i=1, N;

    printf("Enter a number: ");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d\n",2*i-1);
        i++;
    }

    return 0;
}
