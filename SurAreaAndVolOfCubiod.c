/* Find Surface and volume of cubiod */
#include <stdio.h>
int main()
{
    int l, b, h, sarea, vol;
    printf("Enter length,width,height of a cubiod: \n");
    scanf("%d%d%d", &l, &b, &h);
    while (l <= 0 && b <= 0 && h <= 0)
    {
        printf("Enter length,width,height of a cubiod");
        scanf("%d%d%d", &l, &b, &h);
    }
    sarea = 2 * (l * b + b * h + h * l);
    vol = l * b * h;
    printf("Surface area = %d,Volume = %d", sarea, vol);
    return 0;
}