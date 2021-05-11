#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Numbers : \n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Negative Number \n");
    }
    else
    {
        printf("Positive Number \n");
    }
    if (n % 2 == 0)
    {
        printf("Even Number \n");
    }
    else
    {
        printf("Odd Number \n");
    }
    return 0;
}
