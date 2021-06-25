#include<stdio.h>
int main()
{
    int a=5, *pi=&a;
    char b='x', *pc=&b;
    float c=5.5, *pf=&c;
    printf("Value of pi = Address of a = %p\n",pi);
    printf("Value of pc = Address of a = %p\n",pc);
    printf("Value of pf = Address of a = %p\n",pf);
    pi++;
    pc++;
    pf++;
    printf("Value of pi = %p\n",pi);
    printf("Value of pc = %p\n",pc);
    printf("Value of pf = %p\n",pf);
    return 0;
}