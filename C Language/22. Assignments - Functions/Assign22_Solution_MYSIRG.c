#include<stdio.h>
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
int permu(int n,int r)
{
    return fact(n)/fact(n-r);
}
int checkDigit(int n,int digit)
{
    while(n)
    {
        if(n%10==digit)
            return 1; // true
        n=n/10;
    }
    return 0; //false
}
void primeFactors(int n)
{
    int i;
    for(i=2;n>1;i++)
    {
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
    }
}
int main()
{
    printf("%d ",checkDigit(2134,5));
    //primeFactors(36);
    printf("\n");
    return 0;
}