#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, s;
    printf("Enter values for a and b : ");
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}
int sum(int a, int b)
{
    int s;
    s = a + b;
    printf("sum of %d and %d is : %d", a, b, s);
    return s;
}