#include<stdio.h>
/*
//Q1
int main()
{
    float rs,usd;
    printf("Enter amount in INR: ");
    scanf("%f",&rs);
    usd=rs/84.23;
    printf("%f", usd);
    printf("\n");
    return 0;
}
*/
//Q2
int main()
{
    int x;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("After rotation: %d", x);
    printf("\n");
    return 0;
}
//Q3,4,5
int main()
{
    int x;
    x=10>8>4;
    printf("%d\n",x); //0
    x=!2>-2;
    printf("%d\n",x); //1
    x=3<0&&5>0;
    printf("%d\n",x); //0
    return 0;
}
