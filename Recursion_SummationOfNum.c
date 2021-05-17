#include <stdio.h>
int summation(int);
int main()
{
    int n1;
    int sum;
    printf("Recursion : Calculate the sum of number from 1 to n : \n");

    printf("Input the last number of range starting from 1 : ");
    scanf("%d", &n1);
    sum = summation(n1);
    printf(" The sum of numbers from 1 to %d : %d \n", n1, sum);
    return 0;
}
int summation(int n1)
{
    {
        if (n1 == 0)
            return 1;
        return (n1 + summation(n1 - 1));
    }
}