#include <stdio.h>
int display1(int n)
{
    if (n == 0)
        return 1;
    printf("%d", n);
    display1(n - 1);
}
int display2(int n)
{
    if (n == 0)
        return 1;
    display2(n - 1);
    printf("%d", n);
}
int main()
{
    int n;
    printf("\n Recursion : Displaying numbets from 1 to n \n");

    printf("Input the last number of range starting from 1 : ");
    scanf("%d", &n);
    printf("\n Displaying numbers from 1 to %d : %d\n", n, display1(n));
    printf("\n  Displaying numbers from 1 to %d : %d\n", n, display2(n));
    return 0;
}