/*program to multiply two numbers by Russian peasant method*/

#include <stdio.h>
int main()
{
    int a, b, x, y, s = 0;
    printf("Enter two number to be multipied: \n");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while (a >= 1)
    {
        if (a % 2 != 0)
            s = s + b;
        a = a / 2;
        b = b * 2;
    }
    printf("%d*%d=%d\n", x, y, s);
    return 0;
}