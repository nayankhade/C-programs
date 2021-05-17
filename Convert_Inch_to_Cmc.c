#include <stdio.h>
float converter(float inch);
int main()
{
    float inch, cms;
    printf("Enter a number : ");
    scanf("%f", &inch);
    cms = converter(inch);
    printf("%.2f", cms);
    return 0;
}
float converter(float inch)
{
    float cms;
    cms = inch * 2.54;
    return cms;
}