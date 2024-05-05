#include<stdio.h>
int lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            return L;    
}
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return H;    
}
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
int nextPrime(int n)
{
    while(!isPrime(++n));
    return n;
}
void printNPrime(int n)
{
    int x;
    for(x=2;n;x++)
    {
        if(isPrime(x))
        {
            printf("%d ",x);
            n--;
        }
    }
}