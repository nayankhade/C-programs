#include <stdio.h>
void drawline(); /*Function Declaration*/
int main()
{
    drawline(); /*Function call*/
    return 0;
}
void drawline() /*Function Definition*/
{
    int i;
    for (i = 1; i <= 80; i++)
        printf("-");
}