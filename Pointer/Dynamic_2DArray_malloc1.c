/*Program to dynamically allocate a 2D array using array of pointer*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a[3], cols, i, j;
    printf("Enter number of cols : ");
    scanf("%d", &cols);
    for (int i = 0; i < 3; i++)
    {
        a[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter value of a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
        free(a[i]);
    return 0;
}