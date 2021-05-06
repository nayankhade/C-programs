#include <stdio.h>
void lcm_gcd(int, int);

void main()
{
    int n1, n2;

    printf("Enter two Numbers\n");
    scanf("%d %d", &n1, &n2);
    lcm_gcd(n1, n2);
}

void lcm_gcd(int n1, int n2)
{
    int gcd, lcm, remainder, numerator, denominator;
    if (n1 > n2)
    {
        numerator = n1;
        denominator = n2;
    }
    else
    {
        numerator = n2;
        denominator = n1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = n1 * n2 / gcd;

    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}