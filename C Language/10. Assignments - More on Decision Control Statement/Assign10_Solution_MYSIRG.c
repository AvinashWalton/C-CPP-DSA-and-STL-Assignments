#include<stdio.h>
//Q1
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("Negative");
    else
        printf("Zero");

    printf("\n");
    return 0;
}
//Q2
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='a' &&ch<='z')
        printf("Lowercase alphabet");
    else if(ch>='A' &&ch<='Z')
        printf("Uppercase alphabet");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character")
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int a,b,c;
    printf("Enter length of sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Triangle");
    else    
        printf("Not a triangle");
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int monthNumber;
    printf("Enter month number: ");
    scanf("%d",&monthNumber);
    if(monthNumber<1 || monthNumber>12)
        printf("Invalid Month Number");
    else if(monthNumber==2)
        printf("28 or 29 Days");
    else if(monthNumber==4 || monthNumber==6 || monthNumber==9 || monthNumber==11)
        printf("30 Days");
    else
        printf("31 Days");


    printf("\n");
    return 0;
}


