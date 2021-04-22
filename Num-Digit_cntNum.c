/* Input a number and a digit, and count the number of time the digit occurs in the number */

#include <stdio.h>
int main()
{
    int num, digit, rem, tNum, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter a digit : ");
    scanf("%d", &digit);
    tNum = num;
    while (tNum > 0)
    {
        rem = tNum % 10;
        if (rem == digit)
            count++;
        tNum = tNum / 10;
    }
    printf("Total occurrence of digit is : %d in number : %d", count, num);
    return 0;
}