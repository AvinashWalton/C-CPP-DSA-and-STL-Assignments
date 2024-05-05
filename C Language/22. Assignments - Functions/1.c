/* Write a function to calculate the factorial of a number. (TSRS)
Q1 */

int factorial(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}