#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && 'z' <= ch || ch >= 'A' && 'Z' <= ch)
    {
        printf("Is an Alphabet\n");
    }
    else
    {
        printf("Not Alphabet\n");
    }
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Alphabet is vowel\n");
        break;

    default:
        printf("Alphabet is consonant\n");
        break;
    }
    return 0;
}