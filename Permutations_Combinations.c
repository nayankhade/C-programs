#include <stdio.h>
long int factorial(int);
long int perm(int n, int r);
long int comb(int n, int r);
int main()
{
    int n, r;
    printf("Enter n and r : \n");
    scanf("%d%d", &n, &r);
    printf("Total Combination are : %ld\n", comb(n, r));
    printf("Total Permutations are : %ld\n", perm(n, r));
    return 0;
}

long int perm(int n, int r)
{
    long p;
    p = factorial(n) / factorial(n - r);
    return p;
}
long int comb(int n, int r)
{
    long c;
    c = factorial(n, r) / factorial(r);
    return c;
}
long int factorial(int n)
{
    int i;
    long int fact = 1;
    if (n == 0)
    {
        return 1;
    }
    for (i = n; n > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}