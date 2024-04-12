#include<stdio.h>
//Q1
int ain()
{
    int i,x;
    for(x=2;x<=100;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ",x);
    } 
    printf("\n");
    return 0;
}
//Q2
int min()
{
    int i,x,a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(x=a+1;x<b;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ",x);
    } 
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int i,x;
    printf("Enter a number");
    scanf("%d",&x);

    for(x++;;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
                break;
        if(i==x)
        {
            printf("%d ",x);
            break;
        }
    } 
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int a,b,H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    printf("HCF is %d",H);
    
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int a,b,H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    if(H==1)
        printf("Co-Prime");
    else
        printf("Not a co-prime");
    
    printf("\n");
    return 0;
}