#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    std s1,s2;
    {
    s1.id=34;
    s2.id=89;
    printf("Value of s1 id is :  %d\n",s1.id);
    printf("Value of s2 is id :  %d\n",s2.id);
    }
}