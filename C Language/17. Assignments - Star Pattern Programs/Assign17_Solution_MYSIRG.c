#include<stdio.h>
//Q1
int p1()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
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

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
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
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
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
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
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

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
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
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k--);
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
    int i,j;
    char k;

    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
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
    int i,j,k=1;

    for(i=1;i<=4;i++)
    {
       
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k++);
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
    int i,j;
    char k;

    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
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

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5 || j==1 || j==5)
                printf("*");
            else
                printf(" ");
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