#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter any Number : \n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d", num, i, num * i);
        printf("\n");
    }
    return 0;
}