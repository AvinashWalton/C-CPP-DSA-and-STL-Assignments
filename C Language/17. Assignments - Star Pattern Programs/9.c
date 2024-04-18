/* Write a program to draw the following patterns:
Q9 */

#include<stdio.h>
int main()
{
    int i, j;
    char k;
    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
            if(i<=j)
                printf("%c", k++);
            else   
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}