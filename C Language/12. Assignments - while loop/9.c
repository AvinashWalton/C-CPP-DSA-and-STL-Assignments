// Write a program to print cubes of the first N natural numbers.

#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d\n",i*i*i);
        i++;
    }

    return 0;
}
