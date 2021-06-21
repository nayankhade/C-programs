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
    int gcd, lcm, rem, a, b;
    if (n1 > n2)
    {
        a = n1;
        b = n2;
    }
    else
    {
        a = n2;
        b = n1;
    }
    rem = a % b;
    while (rem != 0)
    {
        a = b;
        b = rem;
        rem = a % b;
    }
    gcd = b;
    lcm = n1 * n2 / gcd;

    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
}