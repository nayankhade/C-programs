#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("Myfile.txt","r+");
    fputc('o',ptr);
    fputs("\nThis is nayan\n",ptr);
    fclose(ptr);
    return 0;
}