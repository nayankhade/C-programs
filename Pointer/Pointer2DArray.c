#include<stdio.h>
int main()
{
    int arr[3][4]={{10,12,13,14},{20,21,22,23},{30,31,32,33}};
    int *pa[3];
    for (int i = 0; i<3; i++)
    {
        pa[i]=arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ",pa[i][j]);
        }
        printf("\n");
    }
    return 0;
}