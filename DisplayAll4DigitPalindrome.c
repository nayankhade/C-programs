/* can not Solve */
#include <stdio.h>
int main()
{
    int num, rev = 0, rem, start, end, temp;
    printf("Enter the Lower Limit : ");
    scanf("%d", &start);
    printf("Enter the Upper Limit : ");
    scanf("%d", &end);
    printf("palindrome numbers between %d and %d are: %d ", start, end, num);
    for (num = start; num <= end; num++)
    {
        temp = num;
        while (temp)
        {
            rem = temp % 10;
            temp = temp % 10;
            rev = rev * 10 + rem;
        }
        if (num == rev)
            printf("%d\n", num);
    }
    return 0;
}