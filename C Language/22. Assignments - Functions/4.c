/* Write a function to check whether a given number contains a given digit or not. (TSRS)
Q4 */

int checkDigit(int n, int digit)
{
    while(n)
    {
        if(n%10==digit)
            return 1; // True
        n=n/10;
    }
    return 0; // False
}
