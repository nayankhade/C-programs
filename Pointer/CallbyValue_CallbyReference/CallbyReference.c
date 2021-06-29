#include<stdio.h>
void ref(int *p, int *q);
int main()
{
    int a=5,b=8;
    printf(" a=%d,  b=%d\n",a,b);
    ref(&a,&b);                           /*Actual parameter*/
    printf(" a=%d,  b=%d\n",a,b);         /*Any Change in Foraml parameter also change Actual parameter*/
    return 0;
}
void ref(int *p, int *q)        /*Formal Parameter*/
{
    (*p)++;
    (*q)++;
    printf("*a=%d, *b=%d\n",*p,*q);
}