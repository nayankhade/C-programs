#include <stdio.h>
int main()
{
    int n, f1, f2, f3;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d is a fibonacci number : ");
    }
    else
    {
        f1 = 0;
        f2 = 1;
        f3 = f1 + f2;
    }
    while (f3 < n)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    if (f3 == n)
    {
        printf("%d is a fibonacci number ", n);
    }
    else
    {
        printf("%d is not fibonacci number ", n);
    }
    return 0;
}