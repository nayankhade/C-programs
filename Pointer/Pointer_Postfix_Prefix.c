#include<stdio.h>
int main()
{
   int a = 5;
   int *p;
   p=&a;
   printf("Value of p = Adderss of a = %p\n",p);
   printf("Value of p = %p\n",++p);
   printf("Value of p = %p\n",p++);
   printf("Value of p = %p\n",p);
   printf("Value of p = %p\n",--p);
   printf("Value of p = %p\n",p--);
   printf("Value of p = %p\n",p);
   return 0;
}