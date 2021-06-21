#include <stdio.h>
#include <math.h>
int printprimes(int num1, int num2);
int isprime(int n);
int main()
{
    /* int num; */
    int num1, num2;
    printf("Enter two number \n");
    scanf("%d%d", &num1, &num2);
    printf("Prime number between %d and %d are : \n", num1, num2);
    printprimes(num1, num2);
    /* if (isprime(num))
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number a not prime\n");
    } */
    return 0;
}
int printprimes(int num1, int num2)
{
    int i;
    for (i = num1; i <= num2; i++)
        if (isprime(i))
            printf("%d\n", i);
}
int isprime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
