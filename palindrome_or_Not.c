#include <stdio.h>
int main()
{
    int n, rev = 0, rem, originalN;
    printf("Enter a Numbers : ");
    scanf("%d", &n);
    originalN = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (originalN == rev)
    {
        printf("%d is Palindrome Number", originalN);
    }
    else
    {
        printf("%d is Not Palindromw Number", originalN);
    }
    return 0;
}