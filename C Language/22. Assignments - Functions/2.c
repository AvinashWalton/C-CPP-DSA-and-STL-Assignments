/* Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
Q2 */

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

int combination(int n, int r)
{
    return factorial(n)/factorial(n-r)/factorial(r);
}