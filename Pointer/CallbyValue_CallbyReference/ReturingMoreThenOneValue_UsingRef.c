#include<stdio.h>
void func(int x,int y,int *sum, int *diff,int *Product);
int main()
{
    int a,b,sum,diff,product;
    a=6;
    b=4;
    func(a,b,&sum,&diff,&product);
    printf("Sum=%d\nDiff=%d\nProduct=%d\n",sum,diff,product);
    return 0;
}
void func(int x,int y,int *sum, int *diff,int *Product)
{
    *sum=x+y;
    *diff=x-y;
    *Product=x*y;
}