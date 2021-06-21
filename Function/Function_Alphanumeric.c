// C code to illustrate isalphanum()
#include <ctype.h>
#include <stdio.h>
int ttl_alphanumeric(int i, int counter);
int main()
{
    int i = 0;
    int counter = 0;
    counter = ttl_alphanumeric(i, counter);
    printf("\nNumber of alphanumerics in thegiven input is : %d", counter);
    return 0;
}
int ttl_alphanumeric(int i, int counter)
{
    char ch;
    char a[50] = "thenayankhade";
    ch = a[0];

    // counting of alphanumerics
    while (ch != '\0')
    {
        ch = a[i];
        if (isalnum(ch))
            counter++;

        i++;
    }
    return (counter);
}