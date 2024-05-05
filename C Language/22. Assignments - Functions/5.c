/* Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
Q5 */

void primeFactors(int n)
{
    int 1;
    for(i=2;n>1;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    return 0;
}
