/* Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
Q3 */

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

int permutation(int n, int r)
{
    return factorial(n)/factorial(n-r);
}