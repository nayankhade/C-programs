#include <stdio.h>
int main()
{
    /* Write a program to print all prime numbers from 1 to 99 */
    int i, j;
    for (i = 2; i <= 99; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d is prime number \n", i);
        }
    }
    return 0;
}