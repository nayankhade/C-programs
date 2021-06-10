/* The recursive function for printing the prime factors of a number are */

#include <stdio.h>
void pFactors(int num);
int main()
{
    int num; /*12*/
    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("Using Recursion Function :: ");
    pFactors(num);
    return 0;
}
void pFactors(int num)
{
    int i = 2;
    if (num == 1)
        return;
    while (num % i != 0) /*2,2,3*/
    {
        i++;
    }
    printf("%d ", i);
    pFactors(num / i); /*6,3,1*/
    return;
}