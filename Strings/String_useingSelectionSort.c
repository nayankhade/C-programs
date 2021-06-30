#include<stdio.h>
#include<string.h>
#define N 5
#define LEN 10
int main()
{
    char arr[N][LEN]={
                         "white",
                         "red",
                         "green",
                         "yellow",
                         "blue"
    };
    char temp[10];
    printf("Before sorting : \n");
    for (int i = 0; i < N; i++)
    {
        printf("%s   ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("After sorting : \n");
    for (int i = 0; i < N; i++)
    {
        printf("%s   ",arr[i]);
    }
    return 0;
}