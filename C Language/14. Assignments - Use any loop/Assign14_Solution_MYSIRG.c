#include<stdio.h>
//Q1
int main()
{
    int i,f,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    printf("Factorial is %d",f);
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int n,count;
    printf("Enter a number");
    scanf("%d",&n);
    for(count=0;n!=0;count++)
        n=n/10;
    printf("Total digits are %d",count);
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int i,s,n;
    printf("Enter a number");
    scanf("%d",&n);
    
    for(i=2;i<n;i++)
        if(n%i==0)
        {
            printf("Not Prime");
            break;
        }
    if(i==n)    
        printf("Prime");
    
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int a,b,L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b; L<=a*b; L++)
        if(L%a==0&&L%b==0)
            break;
    printf("LCM is %d",L);
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int x,y=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x=x/10;
    }
    printf("%d",y);
    printf("\n");
    return 0;
}