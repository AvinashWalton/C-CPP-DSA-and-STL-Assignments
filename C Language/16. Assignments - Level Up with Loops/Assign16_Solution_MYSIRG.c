#include<stdio.h>
//Q1
int main1()
{
    int a=-1,b=1,c,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        
        a=b;
        b=c;
        n--;
    }
    printf("%d ",c);
    printf("\n");
    return 0;
}
//Q2
int main2()
{
    int a=-1,b=1,c,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    printf("\n");
    return 0;
}
//Q3
int main3()
{
    int a=-1,b=1,c,num;
    printf("Enter a number");
    scanf("%d",&num);
    while(1)
    {
        c=a+b;
        if(c>=num)
            break;
        a=b;
        b=c;
        
    }
    if(c==num)
        printf("%d found in the series",num);
    else
        printf("%d is not there in the sereis",num);
    printf("\n");
    return 0;
}
//Q4
int main4()
{
    int x,y,digitCount=0,sum,r,i,p;
    printf("Enter a number");
    scanf("%d",&x);
    
    for(y=x;y;y=y/10)
        digitCount++;
    
    for(y=x,sum=0;y;y=y/10)
    {
        r=y%10;
        for(p=1,i=1;i<=digitCount;i++)
        {
            p=p*r;
        }
        sum=sum+p;
    }
    if(sum==x)
        printf("%d is an Armstrong number",x);
    else
        printf("%d is not an Armstrong number",x);

    printf("\n");
    return 0;
}
//Q5
int main()
{
    int x,y,digitCount=0,sum,r,i,p;
    for(x=1;x<=100000;x++)
    {
    
        for(digitCount=0,y=x;y;y=y/10)
            digitCount++;
        
        for(y=x,sum=0;y;y=y/10)
        {
            r=y%10;
            for(p=1,i=1;i<=digitCount;i++)
            {
                p=p*r;
            }
            sum=sum+p;
        }
        if(sum==x)
            printf("%d ",x);
    }

    printf("\n");
    return 0;
}