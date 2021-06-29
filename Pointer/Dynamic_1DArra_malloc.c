/*Program to access dynamically allocated memory as a ld array*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("Enter number of itegers to be entered : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory not available\n");
    }
    for (int i = 0; i<n; i++)
    {
        printf("Enter an integer [%d] : ",i);
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}