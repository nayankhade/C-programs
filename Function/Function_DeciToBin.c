/* Covert Decimal to Binery number */

#include <stdio.h>
long int binary(int num);
int main()
{
    long int num;
    printf("Enter a number : \n");
    scanf("%ld", &num);
    printf("Decimal=%ld, Binary=%ld\n", num, binary(num));
    return 0;
}
long int binary(int num)
{
    int rem, a = 1, bin = 0;
    while (num > 0)
    {
        rem = num % 2;
        bin = bin + rem * a;
        num = num / 2;
        a *= 10;
    }
    return bin;
}