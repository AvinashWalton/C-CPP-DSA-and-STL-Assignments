#include<stdio.h>
//Q1
int main()
{
    int x;
    printf("Enter a three digit number");
    scanf("%d",&x);
    if(x>99&&x<1000 || x>-1000&&x<-99)
        printf("Yes it is a 3 digit number");
    else 
        printf("No it is not a 3 digit number");
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d",a);
    else
        printf("%d",b);
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int a,b,c,d;
    printf("Enter values of a,b,c in a quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Real and Distinct roots");
    else if(d==0)
        printf("Real and equal roots");
    else
        printf("Imaginary Roots");
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%100)
        if(year%4)
            printf("%d is not a leap year",year);
        else
            printf("%d is a leap year",year);
    else
        if(year%400)
            printf("%d is not a leap year",year);
        else
            printf("%d is a leap year",year);

    printf("\n");
    return 0;
}
//Q5
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b? a>c?a:c : b>c?b:c);

    printf("\n");
    return 0;
}