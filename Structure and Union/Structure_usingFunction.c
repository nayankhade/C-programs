#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rollnum;
    int marks;
};
void display(char name[], int rollnum, int marks);
int main()
{
    struct student stu1 = {"Nayan", 35, 98};
    struct student stu2;
    {
    strcpy(stu2.name, "Akshay");
    stu2.rollnum = 36;
    stu2.marks = 97;
    }
    display(stu1.name, stu1.rollnum, stu1.marks);
    display(stu2.name, stu2.rollnum, stu2.marks);
    return 0;
}
void display(char name[], int rollnum, int marks)
{
    printf("Name = %s\t", name);
    printf("Roll num = %d\t", rollnum);
    printf("Marks = %d\n", marks);
}