#include <stdio.h>
int main()
{
    int i, n, isprime = 0;
    printf("Enter the number to check prime:");
    scanf("%d", &n);
    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            printf("Nmber is not prime");
            isprime = 1;
            break;
        }
    }
    if (isprime == 0)
        printf("Number is prime");
    return 0;
}
