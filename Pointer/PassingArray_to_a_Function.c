#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n",i,array[i]);
        
    }
    array[0]=383;     /*If you Change any value her, it gets refelected in main*/
    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("The value of index 0 is %d\n",arr[0]);
    func1(arr);
    printf("The value of index 0 is %d",arr[0]);
    return 0;
}