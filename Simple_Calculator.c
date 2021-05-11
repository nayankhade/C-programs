#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter Number,operator,Another Number : ");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("result = %d", a + b);
        break;
    case '-':
        printf("result = %d", a - b);
        break;
    case '*':
        printf("result = %d", a * b);
        break;
    case '%':
        printf("result = %d", a % b);
        break;

    default:
        printf("Enter valid Operator");
        break;
    }
    return 0;
}