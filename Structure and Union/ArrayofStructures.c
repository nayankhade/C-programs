#include<stdio.h>
struct student
{
    char name[20];
    int rollnum;
    float marks;
};
int main()
{
    struct student stuarr[10];
    {
       for (int i = 0; i<10; i++)
       {
           printf("Enter name,rollnum,marks : ");
           scanf("%s\n%d\n%f",&stuarr[i].name,&stuarr[i].rollnum,&stuarr[i].marks);
       }
       for (int i = 0; i < 10; i++)
       {
          printf("%s\t%d\t%2.2f\n",stuarr[i].name,&stuarr[i].rollnum,&stuarr[i].marks);
       }
       
    };
    return 0;
}