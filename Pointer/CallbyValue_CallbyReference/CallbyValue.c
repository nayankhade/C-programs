#include<stdio.h>
void value(int a, int b);
int main()
{
    int a =5, b=8;
    printf("a=%d, b=%d\n",a,b);
    value(a,b);                    /*Actual parameter*/
    printf("a=%d, b=%d\n",a,b);   /*Any Change in Foraml parameter but do not change Actual parameter*/
    return 0;
}
void value(int x, int y)      /*Formal Parameter*/
{
      x++;   
      y++;
      printf("a=%d, b=%d\n",x,y);
}