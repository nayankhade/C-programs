#include <stdio.h>
int biggestNumber(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter 3 Numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    int result = biggestNumber(a, b, c);
    printf("Biggest Number is : %d\n", result);
    return 0;
}
int biggestNumber(int a, int b, int c)
{
    if (a > c)
    {
        if (a > b)
            return a;
        else
            return b;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}