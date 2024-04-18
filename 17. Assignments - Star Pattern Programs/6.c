/* Write a program to draw the following patterns:
Q6 */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(j<=i)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}