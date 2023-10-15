#include <stdio.h>

int main()
{
    char n;
    int sum = 0;

    while (scanf("%c", &n) && n != '\n')
    {
        sum = sum + (n - '0');
    }

    if (sum % 3 == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}