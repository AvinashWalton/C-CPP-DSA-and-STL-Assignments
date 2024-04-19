#include<stdio.h>
#include<stdlib.h>
//Q1
int p1()
{
    int month;
    printf("enter month number");
    scanf("%d",&month);
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 Days");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28 or 29 days");
            break;
        default:
            printf("Invalid month number");
    }
    printf("\n");
    return 0;
}
//Q2
int p2()
{
    int choice,a,b;
    while(1){
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\n\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Quotient is %d",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
            
        }
    }
    printf("\n");
    return 0;
}
//Q3
int p3()
{
    int day;
    printf("enter day number of a week (Mon==1): ");
    scanf("%d",&day);
    switch(day)
    {
        case 1: 
            printf("जय महाकाल");
            break;
        case 2: 
            printf("जय बजरंगबली");
            break;
        case 3: 
            printf("जय गणपति");
            break;
        case 4: 
            printf("जय नारायण");
            break;
        case 5: 
            printf("जय संतोषी माँ");
            break;
        case 6: 
            printf("जय शनिदेव");
            break;
        case 7:
            printf("जय सूर्यदेव");
            break;
        default:
            printf("Invalid day number");
    }
   return 0;
}
//Q4
int p4()
{
    int choice,a,b,c;
    while(1){
        printf("\n1. Check isosceles triangle");
        printf("\n2. Check right angled triangle");
        printf("\n3. Check equilateral triangle");
        printf("\n4. Exit");
        printf("\n\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter lengths of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a==b || a==c || b==c)
                        printf("Isosceles Triangle");
                    else    
                        printf("Not an isosceles triangle");
                else
                    printf("Invalid sides of a triangle");
                break;
            case 2:
                printf("Enter lengths of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                        printf("Right Angled Triangle");
                    else    
                        printf("Not a right angled triangle");
                else
                    printf("Invalid sides of a triangle");
                break;
            case 3:
                printf("Enter lengths of sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && a+c>b)
                    if(a==b && a==c)
                        printf("Equilateral Triangle");
                    else    
                        printf("Not an equilateral triangle");
                else
                    printf("Invalid sides of a triangle");
                break;
            
            case 4:
                exit(0);
            default:
                printf("Invalid Choice");
            
        }
    }
    printf("\n");
    return 0;
}
//Q5
int p5()
{
    int var;
    printf("Enter a number");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("Invalid");

    }
    return 0;
}
int main()
{
    p4();
    printf("\n");
    return 0;
}