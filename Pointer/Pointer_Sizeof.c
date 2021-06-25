#include<stdio.h>
int main()
{
    char a='x',*p1=&a;
    int b=12, *p2=&b;
    float c=12.4, *p3=&c;
    double d=18.34, *p4=&d;
    printf("Sizeof(p1)=%u, Sizeof(*p1)=%u\n", sizeof(p1), sizeof(*p1));
    printf("Sizeof(p2)=%u, Sizeof(*p2)=%u\n", sizeof(p2), sizeof(*p2));
    printf("Sizeof(p3)=%u, Sizeof(*p3)=%u\n", sizeof(p3), sizeof(*p3));
    printf("Sizeof(p4)=%u, Sizeof(*p4)=%u\n", sizeof(p4), sizeof(*p4));
    return 0;
}