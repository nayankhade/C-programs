#include <stdio.h>
int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\t",i,ptr[i]);
        printf("The value at %d is %d\n",i,*(ptr+i));
        
    }
    *ptr=arr[0]+3;
    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    func2(arr);
    return 0;
}