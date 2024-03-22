// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    if(sub1<0 || sub2<0 || sub3<0 || sub4<0 || sub5<0)
    printf("Marks can't be negative.\n");

    else if(sub1>100 || sub2>100 || sub3>100 || sub4>100 || sub5>100)
    printf("Enter marks 100 or under 100.\n");

    else if(sub1<33 || sub2<33 || sub3<33 || sub4<33 || sub5<33)
    printf("Failed\n");

    else
    printf("Passed\n");

    return 0;
}