#include <stdio.h>

int main()
{
    int x, remaining;
    scanf("%d %d", &x, &remaining);

    while (x != 0)
    {
        remaining = x % 10;
        x = x / 10;
    }

    if (remaining % 2 == 0) printf("EVEN\n");
    else printf("ODD\n");

    return 0;
}