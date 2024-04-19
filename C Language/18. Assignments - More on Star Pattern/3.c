/* Write a program to draw the following patterns:
Q3 */

#include<stdio.h>
int main()
{
    int i, j, star;
    for(i=1;i<=4;i++)
    {
        for(j=1,star=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(star)
                    printf("*");
                else   
                    printf(" ");
                star=1-star;
            }
            else
                printf(" ");

        }
        printf("\n");
    }
    printf("\n");
    return 0;
}