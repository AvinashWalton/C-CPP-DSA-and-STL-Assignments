// Write a program to print MySirG N times on the screen.

#include <stdio.h>
int main()
{
    int i=1, N;

    printf("Enter a number: ");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("MySirG\n");
        i++;
    }

    return 0;
}
