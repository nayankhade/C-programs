#include <stdio.h>
#define MAX 100
int main(void)
{
    int arr[MAX], n, temp, min;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min]>arr[j])
            {
                min = j;
            }
        }
        if (i!=min)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
    }
    printf("Sorted list is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
       
    }
    return 0;
    
}