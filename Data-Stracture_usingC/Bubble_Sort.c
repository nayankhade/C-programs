#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],temp,n,xchange;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    // Bubbal sort 
    for (int i = 0; i < n-1; i++)
    {
        xchange=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchange++;
            }
        }
        if (xchange==0)
        {
            break;
        }
        printf("Sorted List is : \n");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
            printf("\n");
        }
    }
    return 0;
}