#include<stdio.h>
struct student
{
    char name[20];
    int rollnum;
    int marks;
};
void display(struct student *);
void int_marks(struct student *);
int main(void)
{
    struct student stu1={"Nayan",2,98};
    struct student stu2={"Akshay",3,97};
    {
        int_marks(&stu1);
        int_marks(&stu2);
        display(&stu1);
        display(&stu2);
        
    }
    return 0;
}
void int_marks(struct student *stuptr)
{
    (stuptr->marks);
}
void display(struct student *stuptr)
{
    printf("Name = %s\t",stuptr->name);
    printf("rollnum = %d\t",stuptr->rollnum);
    printf("marks = %d\n",stuptr->marks);
}