/* Write a program to draw the following patterns:
Q7 */

#include<stdio.h>
int main()
{
    int i, j, star, k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1,star=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(star)
                {
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                        k--;
                }
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