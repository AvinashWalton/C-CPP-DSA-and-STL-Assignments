// Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>
int main()
{
    int i=1, N, sum = 0;

    printf("Enter a number: ");
    scanf("%d",&N);

    while(i<=N)
    {
        sum = sum + (2*i);
        i++;
    }
    printf("%d\n",sum);

    return 0;
}