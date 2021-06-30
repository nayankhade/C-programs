#include<stdio.h>
int main()
{
    char str[]="India";
    char *p=str;
    while(*p!='\0')
    {
        printf("Character = %c\t",*p);
        printf("Address = %p\n",p);
        p++;

    }
    return 0;
}