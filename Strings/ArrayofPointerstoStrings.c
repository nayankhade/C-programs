#include<stdio.h>
int main()
{
    char *arrp[5]={
                         "white",
                         "red",
                         "green",
                         "yellow",
                         "blue"
    };
    for (int i = 0; i < 5; i++)
    {
        printf("String : %s\n",arrp[i]);
        printf("Address of string : %p\n",arrp[i]);
        printf("Address of string is stored at : %p\n",arrp+i);
    }
    return 0;
}