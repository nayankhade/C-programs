#include <stdio.h>
float power(float a, int n);
int main()
{
    float a, p;
    int n;
    printf("Enter a and b : ");
    scanf("%f%d", &a, &n);
    p = power(a, n);
    printf("%f raised to power %d is %f\n", a, n, p);
    return 0;
}
float power(float a, int n)
{
    if (n == 0)
        return 1;
    return (a * power(a, n - 1));
}