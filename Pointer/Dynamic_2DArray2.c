#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **a, i, j, rows, cols;
    printf("Enter number of rows and columns : ");
    scanf("%d%d", &rows, &cols);
    a = (int **)malloc(rows * cols * sizeof(int));
    for (int i = 0; i < rows; i++)
    {
        a[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     printf("The matrix is : \n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%5d", a[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < rows; i++)
            free(a[i]);
        return 0;
}