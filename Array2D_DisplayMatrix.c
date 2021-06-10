#define ROW 3
#define COL 4
#include <stdio.h>
int main()
{
    int mat[ROW][COL];
    printf("Enter matrix mat1(%dx%d) row-wise : \n", ROW, COL);
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix that you have entered is : \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}