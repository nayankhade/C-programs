#include <stdio.h>
long int reverse(int n);
int main()
{
    long int n;
    printf("Enter a number : ");
    scanf("%ld", &n);
    printf("Reverse Number %d", reverse(n));
    return 0;
}
long int reverse(int n)
{
    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}