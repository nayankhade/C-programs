#include <stdio.h>
int product(int num);
int main()
{
    int num, prod;
    printf("Enter a number : \n");
    scanf("%d", &num);
    prod = product(num);
    printf("%d", prod);
    return 0;
}
int product(int num)
{

    int rem, prod = 1;
    while (num != 0)
    {
        rem = num % 10;
        prod = prod * rem;
        num = num / 10;
    }
    return prod;
}