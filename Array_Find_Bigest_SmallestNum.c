#include <stdio.h>
int main()
{
    int arr[10] = {2, 5, 4, 1, 8, 9, 11, 6, 3, 7};
    int small, largest;
    small = largest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < small)
            small = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }
    printf("Smallest Num = %d, Largest Num = %d", small, largest);
    return 0;
}