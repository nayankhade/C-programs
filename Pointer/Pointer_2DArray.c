#include <stdio.h>
int main()
{
    int arr[3][4] = {
                       {10, 11, 12, 13}, 
                       {20, 21, 22, 23}, 
                       {30, 31, 32, 33}
                    };
    for (int i = 0; i < 3; i++)
    {
        printf("Address of %dth array = %p %p\n",i,arr[i],*(arr+i));
        for (int j = 0; j < 4; j++)
        {
            printf("%d %d",arr[i][j],*(*(arr+j)+j));
        }
        printf("\n");
    }
    return 0;
}