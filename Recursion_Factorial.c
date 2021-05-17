#include <stdio.h>
long int factorial(int n)
{
    int i;
    long int fact = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact = n * factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("No factorial of negative number\n");
    }
    else
    {
        printf("Factorial of %d is %ld\n", n, factorial(n));
    }
    return 0;
}
