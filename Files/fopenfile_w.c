#include<stdio.h>
int main()
{
     FILE *ptr=NULL;
    char string[64]="This content was peoduced by Nayan";
    ptr=fopen("Myfile.txt","w");
    fprintf(ptr,"%s",string);
   return 0;
}
