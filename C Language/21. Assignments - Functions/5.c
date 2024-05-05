/* Write a function to print first N odd natural numbers. (TSRN)
Q5 */

void printNOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ", 2*i-1);
}