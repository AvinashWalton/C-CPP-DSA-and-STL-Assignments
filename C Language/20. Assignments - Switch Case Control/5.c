/* Write a menu driven program will the following options:
1. Calculate LCM of two numbers
2. Calculate sum of the digits of a number
3. Volume of a cuboid
4. Check whether a given number is prime or not
5. Exit
Q5 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,num,num1,num2,LCM,SUM;
    while(1)
    {
        printf("\n1. Calculate LCM of two numbers");
        printf("\n2. Calculate sum of the digits of a number");
        printf("\n3. Volume of a cuboid");
        printf("\n4. Check whether a given number is prime or not");
        printf("\n5. Exit");
        
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers\n");
                scanf("%d %d", &num1, &num2);
                for(LCM=num1>num2?num1:num2;LCM<=num1*num2;LCM++)
                    if(LCM%num1==0 && LCM%num2==0)
                        break;
                printf("LCM is %d",LCM);
                break;

            case 2:
                printf("Enter a number\n");
                scanf("%d", &num);
                for(SUM=0;num;num/=10)
                    SUM=SUM+num%10;
                printf("Sum of the digits: %d", SUM);
                break;

            case 3:
                printf("Enter length, breadth and height of a cuboid\n");
                scanf("%d %d %d", &num,&num1,&num2);
                printf("Volume is %d", num*num1*num2);
                break;

            case 4:
                printf("Enter a number\n");
                scanf("%d", &num);
                for(num1=2;num1<num;num1++)
                    if(num%num1==0)
                        break;
                if(num1==num)
                    printf("prime\n");
                else
                    printf("Not Prime\n");
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}