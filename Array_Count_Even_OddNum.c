// Check How Many Even and Odd Numbers is here

#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE], even = 0, odd = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter a value for arr[%d] : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even Number = %d, Odd Number = %d\n", even, odd);
    return 0;
}