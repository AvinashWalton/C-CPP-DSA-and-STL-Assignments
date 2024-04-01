#include<stdio.h>
//Q1
int main()
{
    float cp,sp,x;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);
    if(sp>=cp)
    {
        x=(sp-cp)/cp*100;
        printf("Profit: %0.2f%%",x);
    }
    else
    {
        x=(cp-sp)/cp*100;
        printf("Loss: %0.2f%%",x);
    }
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
    {
        printf("Result: Pass");
    }
    else
    {
        printf("Result: Fail");
    }
    printf("\n");
    return 0;
}
//Q3
int main()
{
    char ch;
    printf("Enter an alphabet");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase alphabet");
    else if(ch>='A'&&ch<='Z')
        printf("Uppercase alphabet");
    else
        printf("Not an alphabet");
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
        printf("It is divisible by 3 and 2");
    else
        printf("It is not divisible by both 3 and 2");
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf("It is divisible by either 7 or 3 or both");
    else
        printf("It is neither divisible by 7 nor divisible by 3");
    
    printf("\n");
    return 0;
}