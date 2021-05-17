#include <stdio.h>
int sumOfDigits(int n);
int main()
{
    int n, result;
    printf("Enter a numbers : ");
    scanf("%ld", &n);
    result = sumOfDigits(n);
    printf("Sum of Digits in %d is %d \n", n, result);
    return 0;
}
int sumOfDigits(int n)
{
    if (n / 10 == 0)
        return n;
    return n % 10 + sumOfDigits(n / 10);
}