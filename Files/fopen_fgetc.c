#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("Myfile.txt","r");
    char c=fgetc(ptr);
    printf("The Character I red was %c\n",c);
    fclose(ptr);
    return 0;
}