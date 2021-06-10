#include <stdio.h>
int main()
{
    int temp, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0, j = 9; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[i];
        arr[j] = temp;
    }
    printf("After reversing, the array is : ");
    for (int i = 0; i < 10; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}
//output = 1234554321