#include<stdio.h>
int main()
{
     FILE *ptr=NULL;
    char string[64]="\tThis content was peoduced by Nayan";
    ptr=fopen("Myfile.txt","a");
    fprintf(ptr,"%s",string);
   return 0;
}