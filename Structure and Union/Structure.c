#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student nayan,ravi,shubham;    /*Declaration Structure*/
    {
        nayan.id=1;
        ravi.id=2;
        shubham.id=3;
        nayan.marks=455;
        ravi.marks=466;
        shubham.marks=466;
        nayan.fav_char='q';
        ravi.fav_char='p';
        shubham.fav_char='p';
        strcpy(nayan.name,"Nayan Khade");
        strcpy(shubham.name,"Shubham Kumar");
        printf("Nayan id = %d\tNayan got marks= %d\tMy fav char = %c\n",nayan.id,nayan.marks,nayan.fav_char);
        printf("ravi id = %d\travi got marks= %d\tMy fav char = %c\n",ravi.id,ravi.marks,ravi.fav_char);
        printf("shubham id = %d\tshubham got marks= %d\tMy fav char = %c\n",shubham.id,shubham.marks,shubham.fav_char);   
        printf("Nayan's name is : %s\n",nayan.name);   
        printf("Nayan's name is : %s\n",shubham.name);   
    }
    return 0;
}