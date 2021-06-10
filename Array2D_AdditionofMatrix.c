#define ROW 3
#define COL 4
#include <stdio.h>
int main()
{
    int mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    printf("Enter matrix mat1(%dx%d) row-wise : \n", ROW, COL);
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix mat2(%dx%d) row-wise : \n", ROW, COL);
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Addition -
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("The resultant matrix mat3 is : \n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d  ", &mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}