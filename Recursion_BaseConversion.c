/* Convert a positive decimal number to Binary, Octal or Hexadecimal */

#include <stdio.h>
void convert(int, int);
int main()
{
    int num, choice, base;
    while (1)
    {
        printf("Select conversion : \n\n");
        printf("1. Decimal to binary. \n");
        printf("2. Decimal to octal. \n");
        printf("3. Decimal to Hexadecicmal. \n");
        printf("4. Exit. \n");

        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            base = 2;
            break;

        case 2:
            base = 8;
            break;

        case 3:
            base = 16;
            break;

        case 4:
            printf("Exiting...");
            exit(1);

        default:
            printf("Invalid choice. \n\n");
            continue;
        }

        printf("Enter a number : ");
        scanf("%d", num);
        printf("Result = ");
        convert(num, base);
        printf("\n\n");
    }
    return 0;
}
void convert(int num, int base)
{
    int rem;
    if (num == 0)
    {
        return;
    }
    else
    {
        rem = num % base;
        convert(num / base, base);
        if (base == 16 && rem >= 10)
        {
            printf("%c", rem + 55);
        }
        else
        {
            printf("%d", rem);
        }
    }
}