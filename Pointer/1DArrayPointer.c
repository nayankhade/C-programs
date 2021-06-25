#include<stdio.h>
int main()
{
    int arr[5]={3,5,6,7,9};
    int *p=arr;                 /*Can Point to an integer and Pointes to 0th elements of arr*/
    int (*ptr)[5]=&arr;         /*Can point to an array of 5 integers and Pointes to the whole array arr*/
    printf("p=%p, ptr=%p\n",p,ptr);
    printf("p=%d, *ptr=%p\n",*p,*ptr);
    printf("Sizeof(p)=%u,Sizeof(*p)=%u\n",sizeof(p),sizeof(*p));
    printf("Sizeof(ptr)=%u,Sizeof(*ptr)=%u\n",sizeof(ptr),sizeof(*ptr));
    return 0;
}