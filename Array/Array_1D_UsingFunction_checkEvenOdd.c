#include <stdio.h>
void check(int num);
int main(void)
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a array elements : ");
        scanf("%d", &arr[i]);
        check(arr[i]);
    }
    return 0;
}
void check(int num)
{

    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}