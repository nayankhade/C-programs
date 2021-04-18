/*Write a program to print number from 1 to 80 separated by tab, 8 number per line*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 80; i++)
    {
        printf("%d\t", i);
        if (i % 86 == 0)
            printf("\n");
    }
    return 0;
}