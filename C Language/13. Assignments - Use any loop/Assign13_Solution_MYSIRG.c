#include<stdio.h>
//Q1
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i-1;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}