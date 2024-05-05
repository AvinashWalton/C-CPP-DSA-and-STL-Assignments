#include<stdio.h>
int isPrime(int n)
{
    int i;
    if(n<2)
        return 0;
    for(i=2;i<=n-1;i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Q1
void printAllPrime(int a,int b)
{
    int x;
    for(x=a+1;x<b;x++)
    {
        if(isPrime(x))
            printf("%d ",x);
    }
}
//Q2
void printFibN(int n)
{
    int a=-1,b=1,c;
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
//Q3
void printPascal(int lines)
{
     int i,j,flag,n,r;

    for(i=1;i<=lines;i++)
    {
        n=i-1;
        r=0;
        for(j=1,flag=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    printf("%d",combi(n,r++));
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
    
}
int countDigits(int x)
{
    int count=0;
    while(x)
    {
        x/=10;
        count++;
    }
    return count;
}
int power(int a,int b)
{
    int i,p;
    for(i=1,p=1;i<=b;i++)
        p=p*a;
    return p;
}
int isArmstrong(int x)
{
    int y,n,s;
    n=countDigits(x);
    for(s=0,y=x;y;y/=10)
        s=s+power(y%10,n);
    return s==x;
}
//Q4
void printArmstrong(int a,int b)
{
    int x;
    for(x=a+1;x<b;x++)
    {
        if(isArmstrong(x))
            printf("%d ",x);
    }
}
//Q5
void seriesSum(int n)
{
    int i,s;

    for(i=1,s=0;i<=n;i++)
        s=s+fact(i)/i;
    return s;
}
int main()
{
    printArmstrong(100,1000);
    return 0;
}