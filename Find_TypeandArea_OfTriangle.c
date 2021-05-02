/* Program to find the type and area of triangle */

#include <stdio.h>
#include <math.h>
void type(float a, float b, float c);
void area(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter the sides of triangle \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        type(a, b, c);
        area(a, b, c);
    }
    else
    {
        printf("No triangle possible with these sides \n");
    }
    return 0;
}
void type(float a, float b, float c)
{
    if (a + b == c || b + c == a || a + c == b)
        printf("Right Angle Triangle\n");
    if (a == b || b == c)
        printf("Equilateral Triangle\n");
    if (a == b || b == c || c == a)
        printf("Isosoceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}
void area(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area Of Triangle = %f\n", area);
}