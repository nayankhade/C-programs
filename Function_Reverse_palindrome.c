#include <stdio.h>
long int reverse(long int n);
int ispalindrome(long int num);
int main()
{
    long int num;
    printf("Enter a number : ");
    scanf("%ld", &num);
    if (ispalindrome(num))
    {
        printf("Number is a palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}
long int reverse(long int n)
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
int ispalindrome(long int num)
{
    if (num == reverse(num))
        return 1;
}