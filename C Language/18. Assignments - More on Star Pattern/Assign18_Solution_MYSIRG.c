#include<stdio.h>
//Q1
int p1()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q2
int p2()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q3
int p3()
{
    int i,j,flag;

    for(i=1;i<=4;i++)
    {
        
        for(j=1,flag=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(flag)
                    printf("*");
                else
                    printf(" ");
                flag=1-flag;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q4
int p4()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q5
int p5()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q6
int p6()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q7
int p7()
{
    int i,j,flag,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1,flag=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(flag){
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else{
                    printf(" ");
                    if(j==5)
                        k--;
                }
                flag=1-flag;
                
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q8
int p8()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q9
int p9()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i){
                printf("%d",k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
//Q10
int p10()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i){
                printf("%c",k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
int main()
{
    p10();
    return 0;
}