/* Find out the Greates Common Divisor */

#include <stdio.h>
int GCD(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter Two postive integers : ");
    scanf("%d%d", &num1, &num2);
    printf("GCD of %d and %d is %d ", num1, num2, GCD(num1, num2));
    return 0;
}
int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    return GCD(num2, num1 % num2);
}