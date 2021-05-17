#include <stdio.h>
int isPerfect(int num);
int main()
{
    int num; /*num=6*/
    printf("Enter an integer number : ");
    scanf("%d", &num);
    if (isPerfect(num))
    {
        printf("%d is a perfect number.", num); /*6= perfect*/
    }
    else
    {
        printf("%d is not a perfect number.", num);
    }
    return 0;
}
int isPerfect(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i; /*1+2+3=6*/
    }
    if (sum == num)
        return 1;
    else
        return 0;
}