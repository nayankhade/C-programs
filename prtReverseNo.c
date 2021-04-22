/* Write a program to enter numbers and find revers of that numbers */
#include <stdio.h>
int main()
{
    int n, rev = 0, rem;
    printf("Enter a numbers :");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Revers numbers : %d", rev);
    return 0;
}