#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    float avg;
    printf("Enter 10 positive number:\n");
    while (i <= 10)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Enter only positive number\n");
            continue;
        }
        sum += n;
        i++;
    }
    avg = sum / 10.0;
    printf("sum=%d avg=%f\n", sum, avg);
    return 0;
}