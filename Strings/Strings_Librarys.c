#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Nayan";
    char s2[] = " Khade";
    char s3[54];

    /*strcat()*/
    puts(strcat(s1, s2));

    /*strlen()*/
    printf("The Length of s2 : %d\n", strlen(s2));
    
    /*strrev()*/
    printf("The reversed string s2 is : ");
    puts(strrev(s2));
    
    /*strcpy()*/
    strcpy(s3, strcat(s1, s2));
    puts( s3);
    
    /*strcmp()*/
    printf("The strcmp for s1, s2 returned %d",strcmp(s1,s2));
    return 0;
}