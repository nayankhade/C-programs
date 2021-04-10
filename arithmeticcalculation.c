#include <stdio.h>
int main()
{
    char op;
    int a, b;
    printf("Enter nymber,operator,another number \n");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("Ans=%d\n", a + b);
        break;
    case '-':
        printf("Ans=%d\n", a - b);
        break;
    case '*':
        printf("Ans=%d\n", a * b);
        break;
    case '/':
        printf("Ans=%d\n", a / b);
        break;
    default:
        printf("Enter Valid operator\n");
    }
    return 0;
}