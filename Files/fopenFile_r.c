#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[34];
    ptr=fopen("Myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("This content of this file has %s\n",string);
    return 0;
}
