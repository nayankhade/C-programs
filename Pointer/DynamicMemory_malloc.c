#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Use of malloc()
    int *ptr;
    int n;
    printf("Enter the size of array you want to creat\n");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this  array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array %d\n", i, ptr[i]);
    }
    return 0;
}