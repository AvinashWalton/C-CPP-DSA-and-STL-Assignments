/* Write a program to draw the following patterns:
Q7 */

#include<stdio.h>
int main()
{
    int i, j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
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