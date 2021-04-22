/* Input a Number and Count the digits in it, use while loop */

#include <stdio.h>
int main()
{
    int num, rem;
    int count = 0;
    printf("Enter a Number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ++count;
    }
    printf("Numbes Of Digits is : %d", count);
    return 0;
}