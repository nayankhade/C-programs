#include<stdio.h>
#include<string.h>
struct Student
{
    char name[20];
    int rollnum;
    float marks;
};

int main()
{
    struct Student stu1={"Nayan,25,98"};
    struct student stu2,stu3;
    {
        strcpy(stu2.name,"kiran");
        stu2.rollnum=34;
        stu2.marks=35;
        printf("Enter name, Rollnum and Marks for stu3 : \n");
        scanf("%s %d %f",stu3.name,&stu3.rollnum,&stu3.marks);
        printf("stu1 : %s %d %.2f\n",stu1.name,stu1.rollnum,stu1.marks);
        printf("stu2 : %s %d %.2f\n",stu2.name,stu2.rollnum,stu2.marks);
        printf("stu3 : %s %d %.2f\n",stu3.name,stu3.rollnum,stu3.marks);
    }
    return 0;
}