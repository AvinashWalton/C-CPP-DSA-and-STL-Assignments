/* Write a program to draw the following patterns:
Q2 */
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5-i)
                printf(" ");
            else   
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}