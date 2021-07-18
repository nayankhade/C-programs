#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    typedef int *intepointer;
    intepointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    printf("Addrees of *a Value of a is : %d\n", *a);
    printf("Addreess of *b Value of b is : %d\n", *b);
    return 0;
}