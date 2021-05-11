#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Natural Number are \n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}