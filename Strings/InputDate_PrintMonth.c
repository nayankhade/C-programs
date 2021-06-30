#include<stdio.h>
int main()
{
    int d,m,y;
    char *months[]={
        "Janunary","February","March","April","May","June","July","August","September","October","November","December"
    };
    printf("Enter date (dd/mm/yyyy) : ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("%d %s %d\n",d,months[m-1],y);
    return 0;
}